#include<iostream>
#include"Report.h"
#include<cstring>
using namespace std;

report::report()
{
	string str = (R_name, " ");
    R_ID = pR_ID;
    strcpy (R_type = " ");
    R_date = pR_date;
}

report::report(string pR_name, int pR_ID, char pR_type, int pR_date)
{
    string str = (R_name, pR_name);
    R_ID = pR_ID;
    strcpy (R_type = pR_type);
    R_date = pR_date;
}

report::setReportName(string name)
{
    
}

void report::setID(int id)
{
    
}

void report::setReportType(char type)
{
    
}

void report::setDate(int date)
{
    
}

void report:: Display(){
  cout << "Report Name : " << pR_name << endl;
  cout << "Report ID : " << pR_ID << endl;
  cout << "Report Type : " << pR_type << endl;
  cout << "Report date : " << pR_date << endl << endl;
}


report::~report()
{
	cout<< "Destructor Executed" << endl;
}