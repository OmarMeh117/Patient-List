// Omar Mehmood CS3700 01 [6119] Patient Records Management System Assignment 10/31/2021
#ifndef patientlist_h
#define patientlist_h
using namespace std;
#include <string>
#include <iostream>
class Patient
{
	public:
	string name;
	int age;
	int weight;
	string gender;
	string visitreason;
	string address;
	string allergies;
	string insurance;
	string covidvaccine;
	string flushot;
	string askvaccination;
	
	void askvaccine() 
{
	string response;
	response = "yes";
	cout << "Have you been vaccinated?: ";
	cin >> covidvaccine;
	if (covidvaccine == response) 
	{
		cout << "Which Vaccine?\n(after you provide the name and show proof of vaccine to the nurse)\n\nRESPONSE: ";
		cin >> askvaccination;
	}
	
	if (covidvaccine != response) 
	{
		cout << "Sorry unvaccinated patients are not aloud in the office.";
	}
};
};
#endif
