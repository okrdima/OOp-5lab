#pragma once
#include "Dispatcher.h"
#include "Requastion.h"
#include "Householder.h"
#include <iostream>
using namespace std;

class Dispatcher
{
	string name;//2
	bool request, light, gass, wather, santex;//2
	int times;//2
protected:
	int mashtab;//2
	//2
public:
	//	Householder householder;//3
	//2
	bool time_line[24];

	Dispatcher();//4
	Dispatcher(string name, bool request, bool light, bool gass, bool wather, bool santex);//4

	void setData(Dispatcher object);//6


	Dispatcher &getData1(); //6 використання полів у метода


	void setLight(bool);	//6. використання полів у методах
	bool getLight();
	void setGass(bool);	//6. використання полів у методах
	bool getGass();
	void setWather(bool);	//6. використання полів у методах
	bool getWather();
	void setSantex(bool);	//6. використання полів у методах
	bool getSantex();//6


	void setTime(int times);//6
	int getTime();//6


	void setMashtab(int mashtab);//6
	int getMashtab();//6


	 ~Dispatcher();
};

