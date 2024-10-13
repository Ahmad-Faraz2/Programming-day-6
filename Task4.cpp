#include <iostream>
using namespace std;
double amountDue(char,char,int);
int main()
{
    cout << "Enter the service code(R/r for regular, P/p for premium):";
    char code;
    cin >> code;

    cout << "Enter time of the call(D/d for day , N/n for night):";
    char time;
    cin >> time;

    cout << "Enter the number of minutes used:";
    int min;
    cin >> min;
    if(code == 'r' || code == 'R'){
        cout << "Service Type: Regular" << endl;
        cout << " Total minutes Used: " << min << " minutes " << endl;
        cout << "Amount due:$" <<amountDue(code,time,min);
    }
    else if(code == 'p' || code == 'P'){
    cout << "Service Type: Premium" << endl;
    cout << " Total minutes Used: " << min << " minutes " << endl; 
    cout << "Amount due:$" <<amountDue(code,time,min);
    }
    else{
        cout << "Invalid code,try again";
    }

}

double amountDue(char code,char time,int min){
    double amount;
    if(code == 'R' || code == 'r'){
        if(min <= 50){
            amount=10;
        }
        else {
            amount=10+(min-50) * 0.20;
        }

    }
    if(code == 'P' || code == 'p'){
        if(time == 'd' || time == 'D'){
            if(min <= 75){
                amount=25;
            }
            else{
                amount=25+(min-75) * 0.10;
            }
        }
        if(time == 'n' || time == 'N'){
            if(min <=100){
                amount=25;
            }
            else{
                amount=25+(min-100) * 0.05;
            }
        }
    }
    return amount;
}