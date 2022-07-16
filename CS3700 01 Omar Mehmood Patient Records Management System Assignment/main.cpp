// Omar Mehmood CS3700 01 [6119] Patient Records Management System Assignment 10/31/2021
// admin code is 1111
#include <iostream>
#include <fstream>
#include "patientlist.h"
using namespace std;

int menuoption, adminoption, patientcount = 0, patientlistcount = 0;
int ID, admin = 1111;
string a;
Patient newPatient[10000], vaccine;

int main()
{
	cout << "Welcome to New York City Medical Center";
	do{
	cout <<"\n---------------------------------------\n"
		 <<"1) Register as new patient\n2) Coronavirus Vaccine Request (REQUIRED)\n3) Administrator\n4) Quit"
		 <<"\n\nSELECTION: ";
	cin >> menuoption;
		
// PATIENT CODE
	if (menuoption == 1)
	{
		patientcount++;
		cout << "What is your age: ";
		cin >> newPatient[patientcount].age;
		cout << "What is your weight: ";
		cin >> newPatient[patientcount].weight;
		cin.ignore();
		cout << "What is your name: ";
		getline (cin, newPatient[patientcount].name);
		cout << "What is your visit reason: ";
		getline (cin, newPatient[patientcount].visitreason);
		cout << "What is your gender: ";
		getline (cin, newPatient[patientcount].gender);
		cout << "What is your address: ";
		getline (cin, newPatient[patientcount].address);
		cout << "Do you have any allergies towards any medicine (if so please specify): ";
		getline (cin, newPatient[patientcount].allergies);
		cout << "What insurance do you currently have: ";
		getline (cin, newPatient[patientcount].insurance);
		cout << "Do you want a flushot or have you had a recent flushot(yes/no): ";
		getline (cin, newPatient[patientcount].flushot);
	}
	{
	if (menuoption == 2)
	{
		vaccine.askvaccine();	
	}
	}
// ADMIN CODE
	if (menuoption == 3)
	{
		cout << "What is your admin id: ";
		cin >> ID;
		if (ID == admin)
		{
			cout << "\nADMIN MENU";
			cout << "\n---------------------------------------\n"
				 << "1) Print Current Patients\n\nSELECTION: ";
				 cin >> adminoption;
			// prints out the patients
			if (adminoption == 1)
			{
				patientlistcount++;
				for(int i = 1; i <= patientlistcount; i++)
				cout << "\n\nPatient " << i << "\n---------------------------------------\n"
				<< "\nPatient Name:         [" << newPatient[i].name << "]"
				<< "\nCurrent Visit Reason: [" << newPatient[i].visitreason << "]"
				<< "\nPatient Age:          [" << newPatient[i].age << "]"
				<< "\nPatient Weight:       [" << newPatient[i].weight << "]"
				<< "\nPatient Gender:       [" << newPatient[i].gender << "]"
				<< "\nPatient Address       [" << newPatient[i].address << "]"
				<< "\nPatient Allergies:    [" << newPatient[i].allergies << "]"
				<< "\nPatient Insurance:    [" << newPatient[i].insurance << "]"
				<< "\nPatient Flushot:      [" << newPatient[i].flushot << "]";
				cout << "\n\n";
			}	
		}
		else if (ID != admin)
		{
			cout << "Incorrect ID!\n";
		}
		
	}
	
	}while (menuoption != 4);
	cout << "Have a lovely day!";
	cout << "\n\n\n\n\n";
	return 0;
}
