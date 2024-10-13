#include <iostream>
using namespace std;
string calculateHostelPrices(string,int);
int main()
{   
    cout << "Enter the month:";
    string month;
    cin >> month;

    cout << "Enter the number of stays:";
    int stays;
    cin >> stays;

    string prices;
    prices = calculateHostelPrices(month, stays);

    cout << prices;

    return 0;
}

string calculateHostelPrices(string month,int stays){
    float studio_price,apartment_price;
    if(month == "May" || month == "October"){
          studio_price = stays * 50.0;
        apartment_price = stays * 65.0;
        if (stays > 7 && stays < 14) {
            studio_price = studio_price-(studio_price*5/100);
        } 
        if (stays > 14) {
            studio_price = studio_price-(studio_price*30/100);
        }
    }
    else if(month == "June" || month == "September"){
         studio_price = stays * 75.20;
        apartment_price = stays * 68.70;
         if(stays > 14){
            studio_price=studio_price-(studio_price*20/100);
        }
    }
    else if(month == "July" || month == "August"){
        studio_price = stays * 76.0;
        apartment_price = stays * 77.0;
    }

    if(stays > 14){
            apartment_price=apartment_price-(apartment_price*10/100);
        }
    
     return "Studio: " + to_string(studio_price) + "$" + ", Apartment: " + to_string(apartment_price) + "$";
 
}