#include "Employee.h"



Employee::Employee()
{
}

void Employee::setMoneyEmplo(double money)
{
	this->moneyEmplo = money;
}

double Employee::getMoneyEmplo()
{
	return moneyEmplo;
}

void Employee::setAcc(bool a)
{
	this->acc = a;
}

bool Employee::getAcc()
{
	return acc;
}

bool Employee::operation()
{

	srand(time(NULL));
	setAcc(rand() % 2 == 0);
	if (getAcc() == true)
	{
		setAcc(true);
		return true;
	}
	if (getAcc() == false)
	{
		setAcc(false);
		return false;
	}
}

void Employee::transfer()
{
}

double Employee::Dep(int time, double money)
{
	return deposit(time, money);
}

double Employee::Cre(int time, double money)
{
	return credit(time,money);
}
