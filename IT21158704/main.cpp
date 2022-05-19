#include <iostream>
#include "Admin.h"
#include "Photographer.h"
using namespace std;

int main() {

  Admin a1("Admin 1 Name", 001, "@gmail.com", 0723611511);
  a1.displayAdminDetails();

  Admin a2("Admin 2 Name", 002, "@gmail.com", 0723611554);
  a1.displayAdminDetails();

  Admin a3("Admin 3 Name", 003, "@gmail.com", 0723611541);
  a1.displayAdminDetails();

  Photoshoot p1("Photographer 1 Name", 005, "@gmail.com", 0723611511);
  p1.displayPhotoshootDetails();

  Photoshoot p2("Photographer 2 Name", 006, "@gmail.com", 0723611554);
  p1.displayPhotoshootDetails();

  Photoshoot p3("Photographer 3 Name", 007, "@gmail.com", 0723611541);
  p1.displayPhotoshootDetails();
 
  return 0;

  }