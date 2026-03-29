#pragma once
#include<string>
#include<vector>
#include<utility>
#include<fstream>
#include<iostream>
#include<cstdlib>
class Account{
    private:
        std::vector<std::pair<std::string, int>> expenses;
    public:
        std::string name;
        bool open;
        Account(std::string name);
        Account* newAcc(std::string name);
        void addExpense(std::string category, int amount);
        void show();
        void writeAccount();
};
