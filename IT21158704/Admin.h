class Admin{
  private:
    char adminName[20];
    int ID;
    char email[20];
    int contactNo;
  public:
    Admin();
    Admin(char aName[], int aID, char aEmail[], int aContactNo);
    char getAdminName();
    int getID();
    char getEmail();
    int getContactNo();
    void displayAdminDetails();
};