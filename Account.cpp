#include<string>
#include<utility>
#include<vector>
#include<fstream>
#include<iostream>
#include "Account.h"
#include<cstdlib.h>
Account::Account(std::string name){
    std::ifstream accFile;
    accFile.open(name);
    if(!acc.is_open()){
        this->open = false;
    }
    this->open = true;
}
void Account::addExpense(std::string category, int amount){
    for(std::pair<std::string, int>& p : this->expenses) if(p.first == category) {
        p.second += amount;
        return;
    }
    this->expenses.push_back({category, amount});
}
void Account::show(){
    for(std::pair<std::string, int>& p : this->expenses)
        std::cout<<p.first<<" : Rs."<<p.second<<std::endl;
}
