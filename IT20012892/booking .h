#pragma once
using namespace std;
#include <string>

class Booking
{
private:
	float rate;
	int date;
	int Id;
public:
	Booking(float bRate,int bDate,int bId);
	float getRate();
	int getDate();
	int getId();
  ~Booking();
};