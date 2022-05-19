#include <iostream>
#include <cstring>
#include "Customer.h"
#include "UserAccount.h"
using namespace std;

int main()
{
  Customer c1("Kavidu","NO.04,Temple Rd,Galle","Dihan123@gmail.com",1053,0712347425);
  c1.displayCustomerDetails();
  
	Customer c2("asitha","NO.104, Valiwita Rd,Malabe","ravindu678@gmail.com",1046,0714452055);
  c2.displayCustomerDetails();
  
	Customer c3("minura","NO.90, Sawsiri Rd,Kaluthra","chalindu690@gmail.com", 1073,0712307505);
  c3.displayCustomerDetails();

Useraccount U1("nipun",5623,"jamesi234@gmail.com",071234576);
  U1.displayUserAccoutDetails();

  Useraccount U2("supun",5623,"supun234@gmail.com",071234575);
  U2.displayUserAccoutDetails();

  Useraccount U3("akila",5623,"akila234@gmail.com",071234577);
  U3.displayUserAccoutDetails();


	

	return 0;		
}