#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <vector>
#include <string>
#include "Transaction.h"

//dont use namespaces in header files

class Account {
  private:
    int balance;
    std::vector<Transaction> log;

  public:
    Account();
    std::vector<std::string> Report();
    bool Deposit(int amt);
    bool Withdraw(int amt);
    int GetBalance(){return balance;} //"inline" function should be smol
};

#endif
