#include "../hdr/Twitter.h"
#include <iostream>

Twitter::Twitter(std::string first, std::string last, int arbitrary, std::string handle): Person(first,last,arbitrary), twitterhandle(handle){}

Twitter::~Twitter(){}

std::string Twitter::GetName() const {
  return Person::GetName() + " " + twitterhandle;
}
