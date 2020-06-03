#pragma once
#include<iostream>
#include"Card.h"
#include"ATM.h"
#include"Employee.h"
#include"Operations.h"
#include<string>
#include<fstream>
#include<sstream>
#include<cstdio>
using namespace std;
class Client :public Card, public ATM, public Employee
{
	
protected:
	string path1 = "Storage.txt";
	string path2 = "Storage2.txt";
	string firstNameClient;
	string lastNameClient;
	double moneyClient;
	int cardNumClient;
	int pinClient;
	bool id;
	bool ac;
	double moneyClientD;
	double moneyClientC;
public:
	Client();
	Client(string);
	Client(string firstNameClient, double);
	void createFile();
	void setFirstClientName(string);
	 string getFirstClientName();
	void setLastClientName(string);
	string getLastClientName();
	void setId(bool);
	bool getID();
	void setAc();
	bool getAc();
	void setMoneyClient(double);
	double getMoneyClient();
	void setMoneyClientD(double);
	double getMoneyClientD();
	void setMoneyClientC(double);
	double getMoneyClientC();
	void setCardNumClient(int);
	int getCardNumClient();
	void setPinClient(int);
	int getPinClient();
	void registration(bool);
	void revrite();
	void menu();
	void storage();
	void start();
	void storageOut();
	void findId();
	void terminalClient(double);
	void atmClient(double);
	bool atmCheck(double);
	double operD(int, double);
	double operC(int, double);
	~Client();
};

