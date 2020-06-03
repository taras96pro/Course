#pragma once
#include "Operations.h"
#include <ctime>
#include <cstdlib>
class Employee :
	public Operations
{
private:
	double moneyEmplo;
	bool acc;

public:
	Employee();
	void setMoneyEmplo(double);
	double getMoneyEmplo();
	void setAcc(bool);
	bool getAcc();
	bool operation();
	void transfer();
	double Dep(int, double);
	double Cre(int, double);
};

