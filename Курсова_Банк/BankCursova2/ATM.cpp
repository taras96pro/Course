#include "ATM.h"



ATM::ATM()
{
}

ATM::ATM(double money)
{
	this->moneyATM = money;
}

void ATM::setNumATM(int num)
{
	this->numATM = num;
}

int ATM::getNumATM()
{
	return numATM;
}

void ATM::setPinATM(int pin)
{
	this->pinATM = pin;
}

int ATM::getPinATM()
{
	return pinATM;
}

void ATM::setMoneyATM(double money)
{
	this->moneyATM = money;
}

double ATM::getMoneyATM()
{
	return moneyATM;
}

double ATM::terminal(double moneyIn, double moneyOut)
{
	double money;
	money = moneyIn + moneyOut;
	return money;

}

void ATM::Balanc()
{
	cout << "Ваш баланс - ";
	cout << moneyATM << endl;
}
double ATM::takeMoney(double moneyIn, double moneyOut)
{

	double money;
	money = moneyIn - moneyOut;
	
	return money;
}

ATM::~ATM()
{
}
