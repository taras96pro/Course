#include "Card.h"



Card::Card()
{
}

void Card::setPinCard(int pin)
{
	this->pinCard = pin;
}

int Card::getPinCard()
{
	return pinCard;
}

void Card::setCardNum(int num)
{
	this->cardNum = num;
}

int Card::getCardNum()
{
	return cardNum;
}

void Card::setMoneyCard(double money)
{
	this->moneyCard = money;
}

double Card::getMoneyCard()
{
	return moneyCard;
}

void Card::createCard()
{
	int pin=0;
	int num=0;
	int x;
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		if (i != 0) pin *= 10;
		pin += rand() % 10;
	}
	setPinCard(pin);
	std::cout << pin<<std::endl;
	for (int i = 0; i < 8; i++) {
		if (i != 0) num *= 10;
		num += rand() % 10;
	}
		setCardNum(num);
		std::cout << num;
		
	

}


Card::~Card()
{
}
