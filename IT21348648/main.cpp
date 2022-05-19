#include<iostream>
#include"Event.h"
#include"Photo_Galery.h"
#include"Report.h"
using namespace std;

int main(void)
{
    Photo_Gallery *g1 = new Photo_Gallery("Nipun", 5612, "Wedding");
    event *e1 = new event("Nipun", 1236, "Wedding", "Galle");
    report *r1 = new report("Nipun", 1456, "Wedding", "12/2/2022");

  g1->Display();
  e1->Display();
  r1->Display();

  delete g1;
  delete e1;
  delete r1;

  return 0;
}