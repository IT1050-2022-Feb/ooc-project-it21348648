/*---------------User account -------------*/

class Useraccount{
	private:
		char Name;
		int id;
		char email;
		int contactNo;
		
		
	public:
		Useraccount();
		Useraccount(char uName, int uid , char uemail ,int uCountNo);
		void assignDetails();
		char getName();
		int getid();
		char getemail();
		int getContactNo();
    void displayUserAccoutDetails();
};