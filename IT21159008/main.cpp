#include <iostream>
#include <cstring>
#include "Packages.h"
#include "Feedback.h"
using namespace std;

int main()
{
  
  Feedback F1("Formal" , "Positive Feedback" , 0001 , "Exellents");
  F1.displayFeedbackDetails();
  
  Feedback F2("Formal","Constructive Feedback",1235,"Grate Service");
  F2.displayFeedbackDetails();
  
  Feedback F3("Formal","Positive Feedback",1236,"Good Service");
  F3.displayFeedbackDetails();


  Packages pack1("Wpackage","Wedding",0001);
  pack1.displayPackagesDetails();
  
  Packages pack2("Bpackage","Birthday",0002);
  pack2.displayPackagesDetails();
  
  Packages pack3("Ppackage","Parties",0003);
  pack3.displayPackagesDetails();

  return 0;
  
}