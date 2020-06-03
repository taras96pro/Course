#pragma once
#include "Bank.h"
class Operations :
	public Bank
{
private:
	double moneyD;
	double moneyC;
public:
	Operations();
	double getMoneyD();
	void setMoneyD(double);
	double getMoneyC();
	void setMoneyC(double);
	double credit(int, double);
	double deposit(int,double);
};

