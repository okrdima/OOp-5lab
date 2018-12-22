#include <iostream>
#include <fstream>
#include "Requastion.h"
#include "Band.h"
#include "Dispatcher.h"
#include "Householder.h"
#include <string>

using namespace std;
const int n = 4;
int main(int argc, char* argv[]) {




	Band mark;
	Requastion requastion;
	Dispatcher humans[10];
	Householder *ptr;
	Householder_Pens householder_pens;
	Householder_Pilg householder_pilg,object_age[10];
	Householder_User householder_user;
	Householder_Pens householders1, householders2, householders3,householders4, householders5;
	Householder_Pens *householder1 ,*householder2,*householder3,*householder4,*householder5;
	householder1 = &householders1; householders1.allocdinamicmemory(householder1);
	householder2 = &householders1; householders2.allocdinamicmemory(householder2);
	householder3 = &householders1; householders3.allocdinamicmemory(householder3);
	householder4 = &householders1; householders4.allocdinamicmemory(householder4);
	householder5 = &householders1; householders5.allocdinamicmemory(householder5);//5
	object_age[1].age = 17;
	Service_Static(object_age);
	Householder_Pilg *din_array = new Householder_Pilg[10];
	din_array[4].age = 18;
	Service_Dynamic(din_array);
	bool run = true;
	string yes;
	int i = 0,works[n],time,mashtab,human_index=0,mark_for_Band,system_pay = 0;
	cout<<"Hello,you run in system Housing utilities \n"<<endl;


	Requastion file_client;    //5 ËĞ - 7.
	if (argc > 1) {        //5 ËĞ - 7.
	  string file_name = argv[1];  //5 ËĞ - 7.
	  Service(file_client, file_name);  //5 ËĞ - 7. Ôóíêö³é Service, îïåğóº ç Read, Write.
	}                  //5 ËĞ - 7.
	else {              //5 ËĞ - 7.
	  cout << "No Arguments" << endl;  //
	}

	
	Create_Delete_Object();//8


	while (run) {
		for (i = 0; i < 4; i++) { works[i] = 0; }
		cout << "Work list: /for exsit press 0 \n" << "Lihgt - 1\n" << "Santex - 2\n" << "Gass - 3\n" << "Water - 4" << endl;
		i = 0;
		while (works[i - 1] != 0) {

			cin >> works[i];
			i++;
		}
		cout << endl;
		for (int i = 0; i < n; i++) {
			if (works[i] == 1) { requastion.setLight(true); }//25
			else if (works[i] == 2) { requastion.setSantex(true); }//25
			else if (works[i] == 3) { requastion.setGass(true); }//25
			else if (works[i] == 4) { requastion.setWather(true); }//25
			else { continue; }
		}
		cout << "Ok, time work: " << endl;
		cin >> time;
		requastion.counter = 1;
		requastion.workChek();
		humans[human_index].setTime(time);//24

		cout << "Mashtab from 1 to 5 :" << endl;
		cin >> mashtab;
		humans[human_index].setMashtab(mashtab);//24

		requastion.Work(time);//25
		requastion.show();//25


		requastion.setTime(time);//25
		requastion.falseVariable();//25
		human_index++;

		cout << "Enter choose payer :\nPensioner - 1\nPilgovik - 1\nUser - 3" << endl;
		cin >> system_pay;
		switch (system_pay)
		{
		case(1): {

			ptr = &householder_pens;
			ptr->pay();
			break;
		}
		case(2): {
			ptr = &householder_pilg;
			ptr -> pay();

		 break;
		 }
		case(3): {
			ptr = &householder_user;
			ptr -> pay() ;
			break;
		}
		default:
			break;
		}
		cout << "Enter mark please : ";
		cin >> mark_for_Band;
		mark.show_data();

		cout << "Exit,enter yes or no:" << endl; cin >> yes;
		if (yes == "yes") {
			run = false;
		}
	}
	cin.get();
	return 0;
}