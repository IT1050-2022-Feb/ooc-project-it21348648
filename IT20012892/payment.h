#pragma once
using namespace std;
#include <string>
class Payment
{
private:
	float totAmount;
	string payType;
	int date;
	int Id;

public:
	Payment(float pTotamnt,string pType,int pDate,int pId);
	void printPayslip();
	float getTotAmount();
	string getPayType();
	int getDate();
	int getId();
  ~Payment();
};