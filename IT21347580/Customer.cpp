#include <iostream>
#include<string>

using namespace std;

class Customer{
	private:
		string Name;
		string Address;
		string email;
		int id;
		int contactNo;
		
	public:
		Customer();
		Customer(string cName, string cAddress,string cemail , int id , int contactNo );
		void assignDetails();
		string getName;
		string getAddress;
		string getemail;
		int getid;
		int getcontactNo;
			
		
};

int main (){
  Customer *c1 = new Customer ("Kavidu","NO.04,Temple Rd,Galle","Dihan123@gmail.com",1053,0712347425);
	Customer *c2 = new Customer ("asitha","NO.104, Valiwita Rd, Malabe","ravindu678@gmail.com",1046,0714452055);
	Customer *c3 = new Customer("minura","NO.90, Sawsiri Rd, Kaluthara.","chalindu690@gmail.com",1073,0712307505);


	return 0;		
}