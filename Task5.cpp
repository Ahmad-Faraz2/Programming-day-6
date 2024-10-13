#include <iostream>
using namespace std;
float calculateFruitPrice(string,string,float);
main()
{
    cout << "Enter the fruit name:";
    string fr_name;
    cin >> fr_name;

    cout << "Enter the day of the week:";
    string day;
    cin >> day;

    cout << "Enter the Quantity:";
    float quantity;
    cin >> quantity;

    cout << calculateFruitPrice(fr_name,day,quantity);
    return 0;
}

float calculateFruitPrice(string fr_name,string day,float quantity){
    float price;
    if(day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday"){
         if(fr_name == "banana"){
            price=quantity*2.50;
        }
         if(fr_name == "apple"){
            price=quantity*1.20;
        }
         if(fr_name == "orange"){
            price=quantity*0.85;
        }
         if(fr_name == "grapefruit"){
            price=quantity*1.45;
        }
         if(fr_name == "kiwi"){
            price=quantity*2.70;
        }
         if(fr_name == "pineapple"){
            price=quantity*5.50;
        }
         if(fr_name == "grapes"){
            price=quantity*3.85;
        }                    
}
    if(day == "Saturday" || day == "Sunday"){
         if(fr_name == "banana"){
            price=quantity*2.70;
        }
         if(fr_name == "apple"){
            price=quantity*1.25;
        }
         if(fr_name == "orange"){
            price=quantity*0.90;
        }
         if(fr_name == "grapefruit"){
            price=quantity*1.60;
        }
         if(fr_name == "kiwi"){
            price=quantity*3.00;
        }
         if(fr_name == "pineapple"){
            price=quantity*5.60;
        }
         if(fr_name == "grapes"){
            price=quantity*4.20;
        }                        

    }
    return price;
}