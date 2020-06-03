#pragma once
#include "Bank.h"
#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>

class Card :
	public Bank
{
protected:
	int pinCard;
	int cardNum;
	double moneyCard;
public:
	Card();
	void setPinCard(int);
	int getPinCard();
	void setCardNum(int);
	int getCardNum();
	void setMoneyCard(double);
	double getMoneyCard();
	void createCard();
	~Card();
};

