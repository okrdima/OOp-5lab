#pragma once
#include<iostream>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;
class Householder
{

	string  name;//2
	bool light, gass, wather, santex, request;//2
	
public:
	int age;
	Householder();//4
	Householder(string name, bool light, bool gass, bool wather, int mashtab, bool santex, int times, bool request);//4

	//void setData(Householder object);			//6. приймає об'єкт в якості параметрів
	void setData(string name, bool light, bool gass, bool wather,
		int mashtab, bool santex, int times);	//6. два методи перевантажені
	Householder &getData();//6

	void outputData();

	void setLight(bool);	//6. використання полів у методах
	bool getLight();
	void setGass(bool);	//6. використання полів у методах
	bool getGass();
	void setWather(bool);	//6 використання полів у методах
	bool getWather();
	void setSantex(bool);	//6. використання полів у методах
	bool getSantex();

	
	

	void setRequest(bool);	//2. використання полів у методах
	bool getRequest();//6
	
	virtual void pay() = 0;

	virtual ~Householder();
};

class Householder_Pens : virtual public Householder {
public:
	
	void allocdinamicmemory(Householder_Pens *);
	virtual void func() {
	
	
	}
	void pay() {
	
		cout << "You run as Pensioner" <<endl;
	}
	~Householder_Pens() {
		cout << "Destructor Householder_Pensioner" << endl;
		cin.get();
	}

};
class Householder_Pilg : virtual public  Householder {
public:
	void allocdinamicmemory(Householder_Pilg *);
	virtual void Types_of_Benefits() {
	
// case види пільг
	}
	void pay() {
	
		cout <<"You run as Pilgovik"<< endl;
	}
	~Householder_Pilg() {
		cout << "Destructor Householder_Pilg" << endl;
		cin.get();
	}
};
class Householder_User : virtual public Householder {

public:
	void allocdinamicmemory(Householder_User *);
	
	virtual void func2() {
	
	
	}
	void pay() {
	
		cout <<"You run as User" <<endl;
	}
	~Householder_User() {
		cout << "Destructor Householder_User" << endl;
		cin.get();
	
	}
};


void Service_Dynamic(Householder_User *object_age);
void Service_Dynamic(Householder_Pilg *object_age);
void Service_Dynamic(Householder_Pens *object_age);
void Service_Static(Householder_Pens *object_age);
void Service_Static(Householder_Pilg *object_age);
void Service_Static(Householder_User *object_age);




void Service_Delete_Object(Householder_User *object);
void Service_Delete_Object(Householder_Pilg *object);
void Service_Delete_Object(Householder_Pens *object);

void Create_Delete_Object();
								