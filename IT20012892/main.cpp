#include <iostream>
#include "offers.h"
#include "Booking.h"
#include "Payment.h"
using namespace std;

int main()
{
    offers o1, o2;
    Payment p1, p2;
    Booking b1, b2;
    
    o1.offers(0.20, "BOGOF","Buy 1 Get 1 Free", 001);
    o2.offers(0.25, "BMSM", "Buy More Save More", 002);

    p1.Payment(365.01,"Visa", 12/5/2020, 001);
    p2.Payment(978.45, "Master card", 13 / 4 / 2021, 002);

    b1.Booking(399.99, 16 / 2 / 2022, 001);
    b1.Booking(199.99, 11 / 6 / 2021, 002);
  
    return 0;
}

