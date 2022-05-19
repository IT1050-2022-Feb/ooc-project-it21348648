#include <iostream>
#include <cstring>
#include "Packages.h"
using namespace std;


Packages::Packages(char pType[],char pName[],int pID)
{
  strcpy(packageType,pType);
  strcpy(packageName,pName);
  ID = pID;
}

void Packages::displayPackagesDetails()
{
  cout << "Package Type : " << packageType << endl;
  cout << "Package Name : " << packageName << endl;
  cout << "Package ID : " << ID << endl << endl;
  
}

