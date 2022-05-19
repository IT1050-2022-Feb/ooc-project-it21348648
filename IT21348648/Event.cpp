#include<iostream>
#include"Event.h"
#include<cstring>
using namespace std;

event::event()
{
	string str = (E_name , " ");
    E_ID = 0;
    strcpy (E_type ," ");
    string str = (location, " ");
}

event::event(string peName, int pE_ID, char pE_type, string pLocation)
{
    string str = (E_name ,pE_name);
    E_ID = pE_ID;
    strcpy (E_type ,pE_type);
    string str = (location, pLocation);
}

void event::setEventName(string name)
{
    
}

void event::setID(int id)
{
    
}

void event::setEventType(char type)
{
    
}

void event::setLocation(string loaction)
{
    
}

void event::Display()
{
  cout << "Event Name : " << E_name << endl;
  cout << "Event ID : " << E_ID << endl;
  cout << "Event Type : " << E_rype << endl;
  cout << "Location : " << location << endl << endl;
}

event::~event()
{
	cout<< "Destructor Executed" << endl;
}