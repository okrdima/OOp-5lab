#include "Householder.h"
using namespace std;
#include<iostream>
#include <fstream>


Householder::Householder() {//5
	this->name = "Bob";
	this->light = false;
	this->gass = false;
	this->wather = false;
	this->santex = false;

	this->request = true;
}

Householder::Householder(string name, bool light, bool gass, bool wather,
	int mashtab, bool santex, int times, bool request) {
	this->name = name;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	
	this->santex = santex;

	
	this->request = request;
}



Householder &Householder::getData() {
	return *this;
}
void Householder::outputData()
{
	cout << endl;
}

void Householder::setData(string name, bool light, bool gass, bool wather, int mashtab, bool santex, int times)
{
	this->name = name;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->santex = santex;
	
}


void Householder::setLight(bool light) {
	this->light = light;
}
bool Householder::getLight() {
	return light;
}
void Householder::setGass(bool gass) {
	this->gass = gass;
}
bool Householder::getGass() {
	return gass;
}
void Householder::setWather(bool wather) {
	this->wather = wather;
}
bool Householder::getWather() {
	return wather;
}
void Householder::setSantex(bool santex) {
	this->santex = santex;
}
bool Householder::getSantex() {
	return santex;
}
void Householder::setRequest(bool request) {
	this->request = request;
}
bool Householder::getRequest() {
	return request;
}

void Householder_Pens::allocdinamicmemory(Householder_Pens *ptr) {
	try {

		throw 1;
		ptr = new Householder_Pens;	
	}
	catch (int i)
	{
	
		cout <<"Errore ¹ "<< i <<"\nCan't alloc memory to Householder_Pens "<<endl ;
	}

}
void Householder_Pilg::allocdinamicmemory(Householder_Pilg *ptr) {
	try {

		throw 2;
		ptr = new Householder_Pilg;
	}
	catch (int i)
	{

		cout << "Errore ¹ " << i << "\nCan't alloc memory to Householder_Pilg " << endl;
	}


}
void Householder_User::allocdinamicmemory(Householder_User *ptr) {
	try {

		throw 3;
		ptr = new Householder_User;
	}
	catch (int i)
	{

		cout << "Errore ¹ " << i << "\nCan't alloc memory to Householder_User " << endl;
	}
}

void Service_Static(Householder_Pens *object_age) {
	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		Householder_Pens new_objects[9];
		for (int i = 0, j = 0; i < 9; i++, j++) {
			if (i == index) {
				continue;
				j++;
			}
			else { new_objects[i] = object_age[j]; }
		}
		memcpy(object_age, new_objects, sizeof(new_objects));
	}
}
void Service_Static(Householder_User *object_age) {
	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		Householder_User new_objects[9];
		for (int i = 0, j = 0; i < 9; i++, j++) {
			if (i == index) {
				continue;
				j++;
			}
			else { new_objects[i] = object_age[j]; }
		}
		memcpy(object_age, new_objects, sizeof(new_objects));
	}
}
void Service_Static(Householder_Pilg *object_age) {
	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		Householder_Pilg new_objects[9];
		for (int i = 0, j = 0; i < 9; i++, j++) {
			if (i == index) {
				continue;
				j++;
			}
			else { new_objects[i] = object_age[j]; }
		}
		memcpy(object_age, new_objects, sizeof(new_objects));
	}
}

void Service_Dynamic(Householder_Pilg *object_age) {
	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		try {
			throw 123;
			Householder_Pilg *new_objects = new Householder_Pilg[10];
			for (int i = 0, j = 0; i < 9; i++, j++) {
				if (i == index) {
					continue;
					j++;
				}
				else { new_objects[i] = object_age[j]; }
			}
			memcpy(object_age, new_objects, sizeof(new_objects));
			delete[] new_objects;
		}
		catch (int n) {
			cout << "Can't alloc memory " << n << endl;
		}
	}
	
}
void Service_Dynamic(Householder_Pens *object_age) {

	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		try {
			throw 123;
			Householder_Pens *new_objects = new Householder_Pens[10];
			for (int i = 0, j = 0; i < 9; i++, j++) {
				if (i == index) {
					continue;
					j++;
				}
				else { new_objects[i] = object_age[j]; }
			}
			memcpy(object_age, new_objects, sizeof(new_objects));
			delete[] new_objects;
		}
		catch (int n) {
			cout << "Can't alloc memory " << n << endl;
		}
	}

}
void Service_Dynamic(Householder_User *object_age) {

	int age, index = 0;
	cout << "Input age: ";
	cin >> age;
	for (int i = 0; i < 10; i++) {
		if (object_age[i].age == age) {
			index = i;
		}
	}
	if (index != 0 && isalnum(index)) {
		try {
			throw 123;
			Householder_User *new_objects = new Householder_User[10];
			for (int i = 0, j = 0; i < 9; i++, j++) {
				if (i == index) {
					continue;
					j++;
				}
				else { new_objects[i] = object_age[j]; }
			}
			memcpy(object_age, new_objects, sizeof(new_objects));
			delete[] new_objects;
		}
		catch (int n) {
			cout << "Can't alloc memory " << n << endl;
		}
	}

}

void Create_Delete_Object() {

	string str;
	Householder_Pilg *pilg;
	cout << "Enter: create or delete obj\n"<< endl;
	//cin >> str;
	if (str == "create")
	{
		pilg = new Householder_Pilg;
	}
	else if (str =="delete")
	{
		//delete [] pilg;
	}
	else
	{
	
		cout << "Error" << endl;
	}
}



Householder::~Householder() {

	cout << "Desrtuctor Householder" << endl;//13
}