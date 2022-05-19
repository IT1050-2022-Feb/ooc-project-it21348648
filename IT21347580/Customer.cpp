#include <iostream>
#include<cstring>
#include "Customer.h"
using namespace std;



Customer::Customer (char cName[], char cAddress[],char cemail[] , int id , int CcontactNo)
{
   strcpy(Name,cName);
   strcpy(Address,cAddress);
   strcpy(email,cemail);
   ID = id;
   contactNo = CcontactNo;
   
}

void Customer::displayCustomerDetails()
{
  cout << "Customer Name : " << Name << endl;
  cout << "Address : " << Address << endl;
  cout << "Email : " << email << endl;
  cout << "Customer ID : " << ID << endl;
  cout << "Contact No : " << contactNo << endl << endl;
}

