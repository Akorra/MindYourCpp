#include "../hdr/Account.h"

using namespace std;

//initialization sintaxe sets balance as 0
Account::Account(void):balance(0){}

vector<string> Account::Report(){
  vector<string> report;
  report.push_back("Balance is " + to_string(balance));
  report.push_back("Transactions: ");
  for(auto t:log)
    report.push_back(t.Report());
  report.push_back("------------------");

  return report;
}

bool Account::Deposit(int amt){
  if(amt >= 0){
    balance += amt;
    log.push_back(Transaction(amt,"Deposit"));
    return true;
  }
  return false;
}

bool Account::Withdraw(int amt){
  if(amt >= 0){
    if(balance >= amt){
      balance -= amt;
      log.push_back(Transaction(amt,"Deposit"));
      return true;
    }
    return false;
  }
  return false;
}
