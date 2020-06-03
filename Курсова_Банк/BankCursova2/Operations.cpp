#include "Operations.h"



Operations::Operations()
{
}

double Operations::getMoneyD()
{
	return moneyD;
}

void Operations::setMoneyD(double money)
{
	this->moneyD = money;
}

double Operations::getMoneyC()
{
	return 0.0;
}

void Operations::setMoneyC(double)
{
}

double Operations::credit(int time, double firstMoney)
{
	float procent;
	double moneyProc;
	double credit;
	double buf;
	if (time == 12)
	{
		procent = 3;
		moneyProc = firstMoney * 3 / 100;
		credit = (moneyProc * 12) + firstMoney;
		buf = credit - firstMoney;
		setMoneyC(buf);
		return credit;
	}
	if (time == 36)
	{
		procent = 8;
		moneyProc = firstMoney * 8 / 100;
		credit = (moneyProc * 36) + firstMoney;
		buf =credit - firstMoney;
		setMoneyC(buf);
		return credit;
	}
	if (time == 72)
	{
		procent = 12;
		moneyProc = firstMoney * 12 / 100;
		credit = (moneyProc * 72) + firstMoney;
		buf = credit - firstMoney;
		setMoneyC(buf);
		return credit;
	}
}


double Operations::deposit(int time, double firstMoney)
{
	
	float procent;
	double moneyProc;
	double deposit;
	double buf;
	if (time == 3)
	{
		procent = 4;
		moneyProc =firstMoney * 4 / 100;
		deposit = (moneyProc * 3)+firstMoney;
		buf = deposit - firstMoney;
		setMoneyD(buf);
		return deposit;
	}
	if (time == 9)
	{
		procent = 11;
		moneyProc = firstMoney * 4 / 100;
		deposit = (moneyProc * 9) + firstMoney;
		buf = deposit - firstMoney;
		setMoneyD(buf);
		return deposit;
	}
	if (time == 15)
	{
		procent = 20;
		moneyProc = firstMoney * 4 / 100;
		deposit = (moneyProc * 15) + firstMoney;
		buf = deposit - firstMoney;
		setMoneyD(buf);
		return deposit;
	}
}

