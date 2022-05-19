/*--------------Customer class ---------------*/

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
    void displayCustomerDetails();
			
		
};