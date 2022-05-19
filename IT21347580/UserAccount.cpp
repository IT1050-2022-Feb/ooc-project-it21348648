#include <iostream>
#include<cstring>
#include "UserAccount.h"
using namespace std;

Useraccount::Useraccount (char uName[], int uid[],char uemail[] , int ucontactNo)
{
   strcpy(Name,uName);
   ID = id;
   strcpy(email,uemail);
   contactNo = ucontactNo;
   
}
void Useraccount::displayUserAccoutDetails()
{
  cout << "Useraccount Name : " << Name << endl;
  cout << "Useraccount ID : " << ID << endl;
  cout << "Email : " << email << endl;
  cout << "Contact No : " << contactNo << endl << endl;
}


