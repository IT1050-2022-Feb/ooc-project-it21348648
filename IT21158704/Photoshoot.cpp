#include <iostream>
using namespace std;

class Photoshoot{
  private:
    string photographerName;
    int ID;
    string location;
    int contactNo;
  public:
    Photoshoot();
    void assignDetails(string pName, int pID, string pLocation, int pContactNo);
    string getPhotographerName();
    int getID();
    string getLocation();
    int getContactNo();
};

//Implementing Methods

void Photoshoot::assignDetails(string pName, int pID, string pLocation, int pContactNo){
  photographerName = pName;
  ID = pID;
  location = pLocation;
  contactNo = pContactNo;
}

string Photoshoot::getPhotographerName(){
  return photographerName;
}

int Photoshoot::getID(){
  return ID;
}

string Photoshoot::getLocation(){
  return location;
}

int Photoshoot::getContactNo(){
  return contactNo;
}

int main(){

  Photoshoot photoshoot1;

  photoshoot1.assignDetails( "Photographer 1 Name", 005, "@gmail.com", 0723611521);

  cout << "Photographer Name :" << photoshoot1.getPhotographerName() << endl; 
  cout << "Photographer ID :" << photoshoot1.getID() << endl; 
  cout << "Photographer Location :" << photoshoot1.getLocation() << endl; 
  cout << "Photographer Contact :"  << photoshoot1.getContactNo() << endl;
  
  return 0;
  
}