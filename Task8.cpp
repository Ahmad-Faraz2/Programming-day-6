#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int calculateVolleyballGames(string , int , int );

int main() 
{
    cout << "Enter year type (leap or normal): ";
    string year;
    cin >> year;

    cout << "Enter number of holidays: ";
     int holidays;
    cin >> holidays;

    cout << "Enter number of weekends: ";
    int hometown_weekends;
    cin >> hometown_weekends;
    
    int totalGames = calculateVolleyballGames(year, holidays, hometown_weekends);
    cout << totalGames << endl;
    
    return 0;
}

int calculateVolleyballGames(string year, int holidays, int hometown_weekends) {
    int total_games = 0;
    
    int sofia_games;
    sofia_games = (48 - hometown_weekends) * 3 / 4; 
    
    int hometown_games;
    hometown_games = hometown_weekends;
    
    int holiday_games; 
    holiday_games = holidays * 2 / 3;

    total_games = sofia_games + hometown_games + holiday_games;
    
    if (year == "leap") {
        total_games = total_games+(total_games*15/100);
    }
    
    total_games = floor(total_games);
    
    return total_games;
}

