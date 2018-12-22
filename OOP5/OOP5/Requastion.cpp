#include "Requastion.h"
Requastion::Requastion()
{
	this->request = true;
	this->light = false;
	this->gass = false;
	this->wather = false;
	this->santex = false;
	this->addres = "no info";
	this->phone = "no info";
	this->name = "no info";
	this->surname = "no info";
	for (int i = 0; i < 24; i++) { time_line[i] = false; }
}
Requastion::Requastion(bool request1, bool light, bool gass, bool wather, bool santex) {
	this->request = request1;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->santex = santex;
}

void Requastion::setData(Requastion object)
{
	this->light = object.light;
	this->gass = object.gass;
	this->wather = object.wather;
	this->santex = object.santex;
	this->request = object.request;
}
Requastion &Requastion::getData1() {
	return *this;
}


void Requastion::setLight(bool light) {
	this->light = light;
}
bool Requastion::getLight() {
	return light;
}

void Requastion::setGass(bool gass) {
	this->gass = gass;
}
bool Requastion::getGass() {
	return gass;
}

void Requastion::setWather(bool wather) {
	this->wather = wather;
}
bool Requastion::getWather() {
	return wather;
}

void Requastion::setSantex(bool santex) {
	this->santex = santex;
}
bool Requastion::getSantex() {
	return santex;
}

int Requastion::Work(int times) {

	for (int i = 0; i < counter; i++) {
		if (time_line[times + i] == true) {
			cout << "Operator is busy: " << times + i << endl;
			request = false;
			return 1;
		}
		else {
			request = true;
		}
	}
}

void Requastion::show() {
	if (request == true)
	{
		cout << "You request has been approved" << endl;
	}
	else {
		cout << "You request has't been rejected,please enter other time" << endl;;
	}
}
void Requastion::setTime(int time) {

	for (int i = 0; i < counter - 1; i++) { time_line[time + i] = true; }
}

void Requastion::workChek() {
	if (santex == true) { counter++; }
	if (wather == true) { counter++; }
	if (gass == true) { counter++; }
	if (light == true) { counter++; }
}


void Requastion::falseVariable() {
	this->gass = false;
	this->wather = false;
	this->santex = false;
	this->light = false;
	this->request = false;
}

void Service(Requastion &object, string file_name) {

	object.writeFile(file_name);
	object.readFile(file_name);
}

void Requastion::writeFile(string file_name) {//6-7

	string err = "Can't write file";
	ofstream file;
	try {
		file.open(file_name);
		if (!file) {
			throw err;
		}
		file << name << surname << phone << addres;
		file.close();
	}
	catch (string err) {
		cout << err << endl;
	}
}
void Requastion::readFile(string file_name) {//6-7

	string err = "Can't read file";
	ifstream file;
	try {
		file.open(file_name);
		if (!file) {
			throw err;
		}
		file >> name >> surname>>phone>>addres ;
		file.close();
	}
	catch (string err) {
		cout << err << endl;
	}
}


Requastion::~Requastion()
{
	cout << "This destructor Requastion";
}
