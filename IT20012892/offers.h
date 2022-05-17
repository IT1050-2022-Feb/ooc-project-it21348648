#pragma once
using namespace std;
#include <string>

class offers
{
private:
	float discountRate;
	string offerType;
	string offerName;
	int Id;
public:
	offers(float oDiscRate, string oType, string oname, int oId);
	float getDiscountRate();
	string getOfferType();
	int getId();
	float calcNetRate();
	float getNetRate();
  ~offers();
};