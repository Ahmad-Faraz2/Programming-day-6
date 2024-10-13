#include <iostream>
using namespace std;
string checkActivity(string,string);
int main()
{
    cout << "Enter temperature (cold or warm):";
    string temp;
    cin >> temp;

    cout << "Enter Humidity (dry or humid):";
    string humidity;
   cin >> humidity;

    string result;
    result=checkActivity(temp,humidity);
    cout << "Recommended activity:" <<result;  

}

string checkActivity(string temp,string humidity){
    if(temp == "cold" && humidity == "dry"){
        return "play basketball";
    }
    if(temp == "cold" && humidity == "humid"){
        return "watch TV";
    }
    if(temp == "warm" && humidity == "dry"){
        return "play tennis";
    }
    if(temp == "warm" && humidity == "humid"){
        return "swim";
    }

}