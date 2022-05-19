class Packages{
private:

char packageType[10];
char packageName[20];
int ID;

public:

Packages(char pType[],char pName[],int pID);
void assignDetails(char pType[],char pName[],int pID);
char getPackageType();
char getPackageName();
int getID;
void displayPackagesDetails();

};