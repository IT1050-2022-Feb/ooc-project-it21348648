class Feedback{
private:

char feedbackType[20];
char feedbackName[20];
int ID;
char Comments[30];

public:

Feedback(char fType[],char fName[],int fID , char fComments[]); 
void assignDetails(char fType[],char fName[],int fID , char fComments[]);
char getFeedbackType();
char getFeedbackName();
int getID();
char getComments();
void displayFeedbackDetails();

};