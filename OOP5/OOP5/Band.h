#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Dispatcher.h"

using namespace std;
class Band: public Dispatcher
{
	
public:
	//2
	int mark = 2;//2
	int kof = 2;//2

	Band() : Dispatcher() {//4
	};
	Band(string name, string surname, bool request, bool light, bool gass, bool wather, bool santex) : Dispatcher(name, request,  light, gass, wather, santex) {

	}//4 констурктор з параметрами//11
	Band(const Band &object) {//4 конструктор копіювання

		this->mark = object.mark;
		cout << "Construct copy";
	};

	void show_data();

	 ~Band();
};
