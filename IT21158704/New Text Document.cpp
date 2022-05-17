#include <iostream>
using namespace std;

class Admin{
  private:
    string adminName;
    int ID;
    string email;
    int contactNo;
  public:
    void assignDetails(string aName, int aID, string aEmail, int aContactNo);
    string getAdminName();
    int getID();
    string getEmail();
    int getContactNo();
};

//Implementng Methods

void Admin::assignDetails(string aName, int aID, string aEmail, int aContactNo){
  adminName = aName;
  ID = aID;
  email = aEmail;
  contactNo = aContactNo;
}

Admin::Addmin(){
  adminName = aName;
  ID = 011;
  email = aEmail;
  contactNo = aContactNo;
}



string Admin::getAdminName(){
  return adminName;
}

int Admin::getID(){
  return ID;
}

string Admin::getEmail(){
  return email;
}

int Admin::getContactNo(){
  return contactNo;
}

int main() {

  Admin admin1, admin2;

  admin1.assignDetails( "Admin 1 Name", 001, "@gmail.com", 0752632471);
  admin2.assignDetails( "Admin 2 Name", 002, "@gmail.com", 0775412673);

  cout << "Admin Name :" << admin1.getAdminName() << endl; 
  cout << "Admin ID :" << admin1.getID() << endl; 
  cout << "Admin Email :" << admin1.getEmail() << endl; 
  cout << "Admin Contact :" << admin1.getContactNo() << endl;

  return 0;

}