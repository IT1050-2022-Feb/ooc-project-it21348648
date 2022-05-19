class Photoshoot{
  private:
    char photographerName[20];
    int ID;
    char location[20];
    int contactNo;
  public:
    Photoshoot();
    Photoshoot(char pName[], int pID, char pLocation[], int pContactNo);
    char getPhotographerName();
    int getID();
    char getLocation();
    int getContactNo();
    void displayPhotoshootDetails();
    
};