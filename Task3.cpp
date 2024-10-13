#include <iostream>
using namespace std;
string findZodiacSign(string,int);
int main()
{   
    cout << "Enter the month of birth:";
    string month;
    cin >> month;

    cout << "Enter the day of birth:";
    int day;
    cin >> day;

    cout << "Zodiac Sign:" << findZodiacSign(month,day);

}

string findZodiacSign(string month,int day){
    if(month == "March" && day >=21 && day <=31 || month == "April" && day <=19){
        return "The Ram";
    }
    if(month == "April" && day >=20 && day <=30 || month == "May" && day <=20){
        return "The Bull";
    }
    if(month == "May" && day >=21 && day <=31  || month == "June" && day <=20){
        return "The Twins";
    }
    if(month == "June" && day >=21 && day <=30 || month == "July" && day <=22){
        return "The Crab";
    }
    if(month == "July" && day >=23 && day <=31|| month == "August" && day <=22){
        return "The Lion";
    }
    if(month == "August" && day >=23 && day <=30 || month == "September" && day <=22){
        return "The Virgin";
    }
    if(month == "September" && day >=23 && day <=30 || month == "October" && day <=22){
        return "The Scales";
    }
    if(month == "October" && day >=23 && day <=31 || month == "November" && day <=22){
        return "The Scorpion";
    }
    if(month == "November" && day >=22 && day <=30 || month == "December" && day <=21){
        return "The Archer";
    }
    if(month == "December" && day >=22 && day <=31 || month == "January" && day <=19){
        return "The Goat";
    }
    if(month == "January" && day >=20 && day <=31 || month == "February" && day <=18){
        return "The Water Bearer";
    }
    if(month == "February" && day >=19 || month == "February" && day <=20){
        return "The Fishes";
    }
}
