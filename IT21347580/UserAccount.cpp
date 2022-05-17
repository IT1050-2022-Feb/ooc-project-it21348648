#include <iostream>
#include<string>

using namespace std;

class Useraccount{
	private:
		string Name;
		int id;
		string email;
		int contactNo;
		
		
	public:
		Useraccount();
		Useraccount(string uName, int uid , string uemail ,int uCountNo);
		void assignDetails();
		string getName();
		int getid();
		string getemail();
		int getContactNo();
};

int main (){
	Useraccount *U1 = new Useraccount ("nipun",5623,"jamesi234@gmail.com",071234576);
	Useraccount *U2 = new Useraccount ("supun",5643,"supun234@gmail.com",0712346743);
	Useraccount *U3 = new Useraccount ("akila",3045,"akila234@gmail.com",0712345045);
	

	return 0;		
}