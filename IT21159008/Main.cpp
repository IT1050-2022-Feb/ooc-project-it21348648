#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "Packges.h"
using namespace std;

int main()
{
  Feedback F1("Formal","Positive Feedback",1234,"Exellents");
  Feedback F2("Formal","Constructive Feedback",1235,"Grate Service");
  Feedback F3("Formal","Positive Feedback",1236,"Good Service");

  Packages *pack1 = new Packages("Wpackage","Wedding",0001);
  Packages *pack2 = new Packages("Bpackage","Birthday",0002);
  Packages *pack3 = new Packages("Ppackage","Parties",0003);

 

  return 0;
} 
