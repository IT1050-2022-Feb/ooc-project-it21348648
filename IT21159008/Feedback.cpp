#include <iostream>
#include <cstring>
#include "Feedback.h"
using namespace std;


Feedback::Feedback(char fType[],char fName[],int fID , char fComments[])
{
  strcpy(feedbackType,fType);
  strcpy(feedbackName,fName);
  ID = fID;
  strcpy(Comments,fComments);
}

void Feedback::displayFeedbackDetails()
{
  cout << "Feedback Type : " << feedbackType << endl;
  cout << "Feedback Name : " << feedbackName << endl;
  cout << "Feedback ID : " << ID << endl;
  cout << "Comments : " << Comments << endl << endl;
}



