#include "Dispatcher.h"
using namespace std;

Dispatcher::Dispatcher()//5
{
	this->name = "No info";
	this->request = true;
	this->light = false;
	this->gass = false;
	this->wather = false;
	this->santex = false;
	for (int i = 0; i < 24; i++) { time_line[i] = false; }
}

void Dispatcher::setTime(int time) {
	this->times = times;
}
int Dispatcher::getTime() {
	return times;
}


void Dispatcher::setMashtab(int mashtab) {
	this->mashtab = mashtab;
}
int Dispatcher::getMashtab() {
	return mashtab;
}

Dispatcher::Dispatcher(string name, bool request, bool light, bool gass, bool wather, bool santex) {
	this->name = name;
	this->request = request;
	this->light = light;
	this->gass = gass;
	this->wather = wather;
	this->santex = santex;
}
void Dispatcher::setData(Dispatcher object)
{
	this->name = object.name;
	this->request = object.request;
}

Dispatcher &Dispatcher::getData1() {
	return *this;
}
void Dispatcher::setLight(bool light) {
	this->light = light;
}
bool Dispatcher::getLight() {
	return light;
}
void Dispatcher::setGass(bool gass) {
	this->gass = gass;
}
bool Dispatcher::getGass() {
	return gass;
}
void Dispatcher::setWather(bool wather) {
	this->wather = wather;
}
bool Dispatcher::getWather() {
	return wather;
}
void Dispatcher::setSantex(bool santex) {
	this->santex = santex;
}
bool Dispatcher::getSantex() {
	return santex;
}

Dispatcher::~Dispatcher()
{
}
