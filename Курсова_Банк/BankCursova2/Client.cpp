#include "Client.h"



Client::Client()
{
}
Client::Client(string name)
{
	this->firstNameClient = name;
}


Client::Client(string firstNameClient, double money)
{
	this->moneyClient = money;
}

void Client::createFile()
{
	ifstream form("form.txt");
	if (!form.is_open())
	{
		form.close();
		cout << "lllllllllllll";
		ofstream form("form.txt");
		form.close();
	}
	ifstream p1(path1);
	if (!p1.is_open())
	{
		p1.close();
		cout << "lllllllllllll";
		ofstream form(path1);
		p1.close();
	}
	ifstream p2(path2);
	if (!p2.is_open())
	{
		p2.close();
		cout << "lllllllllllll";
		ofstream form(path2);
		p2.close();
	}
}

void Client::setFirstClientName(string name)
{
	this->firstNameClient = name;
}
string Client::getFirstClientName()
{
	return firstNameClient;
}

void Client::setLastClientName(string name)
{
	this->lastNameClient = name;
}

string Client::getLastClientName()
{
	return lastNameClient;
}

void Client::setId(bool i)
{
	this->id = i;
}

bool Client::getID()
{
	return id;
}

void Client::setAc()
{
	this->ac = operation();
}

bool Client::getAc()
{
	return ac;
}

void Client::setMoneyClient(double money)
{
	this->moneyClient = money;
}

double Client::getMoneyClient()
{
	return moneyClient;
}

void Client::setMoneyClientD(double money)
{
	this->moneyClientD = money;
}

double Client::getMoneyClientD()
{
	return moneyClientD;
}

void Client::setMoneyClientC(double money)
{
	this->moneyClientC = money;
}

double Client::getMoneyClientC()
{
	return moneyClientC;
}

void Client::setCardNumClient(int num)
{
	this->cardNumClient = num;
}

int Client::getCardNumClient()
{
	return cardNumClient;
}

void Client::setPinClient(int pin)
{
	this->pinClient = pin;
}

int Client::getPinClient()
{
	return pinClient;
}


/*void Client::registration(bool card)
{

	if (card == true)
		createCard();
	setPinClient(pinCard);
	setCardNumClient(cardNum);
	revrite();
	start();

}*/




void Client::revrite()
{
	string line;
	string linebuff;
	ofstream f2;
	start();
	remove("Storage2.txt");
	f2.open(path2, ios_base::app);

	f2 << getFirstClientName() << " " << getLastClientName() << " " << getPinClient() << " " <<  getCardNumClient()<< " ";
	f2 << getMoneyClient() << endl;

	ifstream f1;
	f1.open(path1);
	while (!f1.eof()) {

		getline(f1, line);
		if (line.find(getFirstClientName()) == string::npos) {
			f2 << line << endl;;
		}
	}

	f1.close();
	f2.close();
	ofstream f3;
	remove("Storage.txt");
	f3.open(path1, ios_base::app);
	ifstream f4;
	f4.open(path2);
	while (!f4.eof()) {
		getline(f4, line);

		f3 << line << endl;

	}
	f3.close();
	f4.close();
	remove("form.txt");
}

/*void Client::menu()
{
	
	string name;
	getline(cin, name);
	setFirstClientName(name);
	//storageOut();
	findId();
	while (true) {
		//cout << "Бакомат(1) вiдiлення банку(2)" << endl;
		int x;
		cin >> x;
		if (x == 1)
		{
			//ATM(moneyClient);
			setMoneyATM(moneyClient);
			setNumATM(cardNumClient);
			int y;
			//cout << "Баланс(1) Зняти кошти(2)" << endl;
			cin >> y;
			if (y == 1) {
				Balanc();
			}
			if (y == 2)
			{
				moneyClient = takeMoney(moneyClient);
				setMoneyClient(moneyClient);
				revrite();
			}
		}
		if (x == 3)
		{
			remove("Storage2.txt");
			break;

		}
		cout << getFirstClientName() << endl << moneyClient;
	}
	//storage();

}*/

void Client::storage()
{
	remove("form.txt");
	ofstream f2;
	f2.open("form.txt", ios_base::app);
	f2 << firstNameClient << " " << lastNameClient << " " << pinClient << " " << cardNumClient << " ";
	f2 << moneyClient << endl;
}

void Client::start()
{
	string line;
	string name;
	string lastname;
	int num;
	int pin;
	double money; 

	ifstream form("form.txt");
	if (!form.is_open())
	{
		cout << "lllllllllllll";
		ofstream form("form.txt");
		form.close();
	}
	getline(form, line);
	stringstream ss(line);
	ss >> name;
	ss >> lastname;
	ss >> pin;
	ss >> num;
	ss >> money;
	setFirstClientName(name);
	setLastClientName(lastname);
	setCardNumClient(num);
	setPinClient(pin);
	setMoneyClient(money);
	form.close();
}

/*void Client::storageOut()
{
	ifstream out;
	out.open(path);
	string name;
	double money;
	out >> name >> money;
	setFirstClientName(name);
	setMoneyClient(money);
	out.close();
}*/

void Client::findId()
{
	ifstream f1;
	f1.open(path1);
	ifstream f2;
	string nameid;
	string line;
	string name;
	string lastname;
	int num;
	int pin;
	double money;
	bool t1 = 0;

	while (!f1.eof()) {

		getline(f1, line);
		if (line.find(getFirstClientName()) != string::npos) {
			t1++;
			stringstream ss(line);
			ss >> name;
			
			ss >> lastname;
			
			ss >> pin;
			
			ss >> num;
			
			ss >> money;
			
			setFirstClientName(name);
			setLastClientName(lastname);
			setCardNumClient(num);
			setPinClient(pin);
			setMoneyClient(money);
			ofstream f;
			f.open("form.txt");
			f << line;
			f.close();
			//cout << line << endl;
			setId(true);
			break;
			

		}

	}
	if(t1==0) {
	setId(false);
}
	

	
}

void Client::terminalClient(double in)
{
	double m;
	m=terminal(getMoneyClient(),in);
	setMoneyClient(m);
	storage();
}

void Client::atmClient(double in)
{
	double m;
	m = takeMoney(getMoneyClient(), in);
		setMoneyClient(m);
	storage();
}

bool Client::atmCheck(double money)
{
	if (money > getMoneyClient())
	{
		return false;
	}
	if (money <= getMoneyClient())
	{
		return true;
	}
}

 double Client::operD(int time, double money)
{
	 double m;
		m= Dep(time, money);
		setMoneyClient(getMoneyClient() + getMoneyD());
		storage();
		return m;
}

 double Client::operC(int time, double money)
 {
	 
	 double m;
	 double x;
	 m = Cre(time, money);
	 x = getMoneyClient()-m;
	 setMoneyClient(x);
	
	 storage();
	 return m;
 }

Client::~Client()
{
	//remove("form.txt");
}
