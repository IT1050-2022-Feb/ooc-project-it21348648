#include<iostream>
#include"Photo_Galery.h"
#include<cstring>
using namespace std;

Photo_Gallery::Photo_Gallery()
{
	string str = (P_name, " "); 
	P_ID =0;
	strcpy (P_type, " ");
}

Photo_Gallery::Photo_Gallery(string pP_name, int pP_ID, char pP_type)
{
    string str = (P_name, pP_name); 
	P_ID =pP_ID;
	strcpy (P_type, pP_type);
}

void Photo_Gallery::setPhotoGalleryName(string name)
{
    
}

void Photo_Gallery::setID(int id)
{
    
}

void Photo_Gallery::setPhotoGalleryType(char type)
{
    
}

void Photo_Gallery:: Display(){
  cout << "Photo Gallery Name : " << P_name << endl;
  cout << "Photo Gallery ID : " << P_ID << endl;
  cout << "Photo Gallery Type : " << P_type << endl;
}

Photo_Gallery::~Photo_Gallery()
{
	cout<< "Destructor Executed" << endl;
}