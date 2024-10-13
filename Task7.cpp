#include <iostream>
using namespace std;
string checkStudentStatus( int , int , int , int );
int main()
{
    cout << "Enter exam starting time (hours): ";
    int examHour;
    cin >> examHour;
    cout << "Enter exam starting time (minutes): ";
    int examMinute;
    cin >> examMinute;
    cout << "Enter student arrival time (hours): ";
    int studentHour;
    cin >> studentHour;
    cout << "Enter student arrival time (minutes): ";
    int studentMinute;
    cin >> studentMinute;
    
    string result;
    result = checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
    cout << result << endl;
    
    return 0;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) {
    int examTime = examHour * 60 + examMinute;
    int studentTime = studentHour * 60 + studentMinute;
    int difference = studentTime - examTime;
    
    if (difference < -30) {
        int hours = -difference / 60;
        int minutes = -difference % 60;
        return "Early " + to_string(hours) + ":" + to_string(minutes) + " hours before the start";
    } else if (difference < 0) {
        int minutes = -difference;
        return "On time " + to_string(minutes) + " minutes before the start";
    } else if (difference == 0) {
        return "On time";
    } else if (difference <= 30) {
        int minutes = difference;
        return "Late " + to_string(minutes) + " minutes after the start";
    } else {
        int hours = difference / 60;
        int minutes = difference % 60;
        return "Late " + to_string(hours) + ":" + to_string(minutes) + " hours after the start";
    }
}
