#include "Admin.h"
#include <iostream>
#include <cstring>
using namespace std;


Admin::Admin(char aName[], int aID, char aEmail[], int aContactNo)
{
  strcpy(adminName,aName);
  ID = aID;
  strcpy(email,aEmail);  
  contactNo = aContactNo;
}

char Admin::getAdminName(){
  return adminName[20];
}

int Admin::getID(){
  return ID;
}

char Admin::getEmail(){
  return email[20];
}

int Admin::getContactNo(){
  return contactNo;
}

void Admin::displayAdminDetails(){
  cout << "Admin Name : " << adminName << endl;
  cout << "Admin ID : " << ID << endl;
  cout << "Admin location : " << email << endl;
  cout << "Admin contact No : " << contactNo << endl << endl;
}