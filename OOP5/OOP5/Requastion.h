#pragma once
#include <iostream>
#include "Householder.h"
#include <string>

class Requastion
{
	bool request, light, gass, wather, santex;//2
public:
	string name, surname, phone, addres;
	int counter;//2
	bool time_line[24];

	Requastion();
	Requastion(bool request, bool light, bool gass, bool wather, bool santex);//4

	void setData(Requastion object);//6


	int Work(int);//6
	void show();//6
	void workChek();//6
	void falseVariable();//6
	void setTime(int);


	Requastion &getData1(); //6 використання полів у метода
	
	void setLight(bool);	//6. використання полів у методах
	bool getLight();
	void setGass(bool);	//6. використання полів у методах
	bool getGass();
	void setWather(bool);	//6. використання полів у методах
	bool getWather();
	void setSantex(bool);	//6. використання полів у методах
	bool getSantex();//6

	void writeFile(string file_name);
	void readFile(string file_name);

	~Requastion();
};

void Service(Requastion&, string);