#pragma once
#include "Bank.h"
#include<string>
#include<iostream>
using namespace std;
class ATM :
	public Bank
{
protected:
	string path1 = "Storage.txt";
	string path2 = "Storage2.txt";
	int numATM;
	int pinATM;
	double moneyATM;
public:
	ATM();
	ATM(double);
	void setNumATM(int);
	int getNumATM();
	void setPinATM(int);
	int getPinATM();
	void setMoneyATM(double);
	double getMoneyATM();
	double terminal(double, double);
	void Balanc();
	double takeMoney(double, double);
	~ATM();
};

