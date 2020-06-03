#pragma once
#include<iostream>
#include<string>
#include<fstream>

 class Bank
{
protected:
	std::string path1 = "Storage.txt";
	std::string firstName;
	std::string lastName;
	double money;
public:
	Bank();
	Bank(std::string);
	void setFirstName(std::string);
	std::string getFirstName();
	void setLastName(std::string);
	std::string getLastName();
	void setMoney(double);
	double getMoney();
	void menu();
	void storage();
	void findId();
	~Bank();
};

