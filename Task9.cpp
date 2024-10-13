#include <iostream>
#include <string>
using namespace std;

string checkPointPosition(int , int , int );
int main() 
{
    cout << "Enter the size of the block (h): ";
    int h;
    cin >> h;

    cout << "Enter the x coordinate:";
    int x;
    cin >> x;

    cout << "Enter the y coordinate:";
    int y;
    cin >> y;

    cout << checkPointPosition(h, x, y) ;

    return 0;
}

string checkPointPosition(int h, int x, int y) {
    if ((x >= 0 && x <= h) && (y >= 0 && y <= h)) {
        if (x == 0 || x == h || y == 0 || y == h) {
            return "border";
        } else {
            return "inside";
        }
    }
    if ((x >= h && x <= 2 * h) && (y >= 0 && y <= h)) {
        if (x == h || x == 2 * h || y == 0 || y == h) {
            return "border";
        } else {
            return "inside";
        }
    }
    if ((x >= 0 && x <= h) && (y >= h && y <= 2 * h)) {
        if (x == 0 || x == h || y == h || y == 2 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    if ((x >= h && x <= 2 * h) && (y >= h && y <= 2 * h)) {
        if (x == h || x == 2 * h || y == h || y == 2 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    if ((x >= 0 && x <= h) && (y >= 2 * h && y <= 3 * h)) {
        if (x == 0 || x == h || y == 2 * h || y == 3 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    if ((x >= h && x <= 2 * h) && (y >= 2 * h && y <= 3 * h)) {
        if (x == h || x == 2 * h || y == 2 * h || y == 3 * h) {
            return "border";
        } else {
            return "inside";
        }
    }
    
    // If not inside any block, it is outside
    return "outside";
}
