#include "Bank.h"



Bank::Bank()
{

}

Bank::Bank(std::string name)
{
	this->firstName = name;
}

void Bank::setFirstName(std::string name)
{
	this->firstName = name;
}

std::string Bank::getFirstName()
{
	return firstName;
}

void Bank::setMoney(double money)
{
	this->money = money;
}

double Bank::getMoney()
{
	return money;
}
void Bank::menu()
{
	
	std::string name;
	//getline(cin, name);
	setFirstName(name);
	//cout << "Enter your money" << endl;
	double money;
	//cin >> money;
	setMoney(money);
}


void Bank::findId()
{

}

Bank::~Bank()
{
}
