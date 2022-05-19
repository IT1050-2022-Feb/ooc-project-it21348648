#include "Photographer.h"
#include <iostream>
#include <cstring>
using namespace std;

Photoshoot::Photoshoot(char pName[], int pID, char pLocation[], int pContactNo)
{
  strcpy(photographerName,pName);
  ID = pID;
  strcpy(location,pLocation);  
  contactNo = pContactNo;
}

char Photoshoot::getPhotographerName(){
  return photographerName[20];
}

int Photoshoot::getID(){
  return ID;
}

char Photoshoot::getLocation(){
  return location[20];
}

int Photoshoot::getContactNo(){
  return contactNo;
}

void Photoshoot::displayPhotoshootDetails(){
  cout << "Photographer Name : " << photographerName << endl;
  cout << "Photographer ID : " << ID << endl;
  cout << "Photographer location : " << location << endl;
  cout << "Photographer contact No : " << contactNo << endl << endl;
}
