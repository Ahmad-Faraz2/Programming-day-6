#include <iostream>
using namespace std;
float calculateAverage(float,float,float,float,float);
string calculateGrade(float);
int main()
{
    cout << "Enter student name:";
    string name;
    cin >> name;

    cout << "Enter marks for English:";
    float Eng_marks;
    cin >> Eng_marks;

    cout << "Enter marks for Math:";
    float Math_marks;
    cin >> Math_marks;

    cout << "Enter marks for Chemistry:";
    float Chem_marks;
    cin >> Chem_marks;

    cout << "Enter marks for Social Science:";
    float ss_marks;
    cin >> ss_marks;

    cout << "Enter marks for Biology:";
    float biology_marks;
    cin >> biology_marks;

    int percentage;
    percentage=calculateAverage(Eng_marks,Math_marks,Chem_marks,ss_marks,biology_marks);
    cout << "Percentage:"  <<percentage <<"%" <<endl;
    cout<< "Grade:" <<calculateGrade(calculateAverage( Eng_marks,Math_marks, Chem_marks,ss_marks,biology_marks));
   


}

float calculateAverage(float Eng_marks,float Math_marks,float Chem_marks,float ss_marks,float biology_marks){
    float average;
    average= (Eng_marks + Math_marks + Chem_marks + ss_marks + biology_marks)/5;
    return average;
}

string calculateGrade(float average){
    string grade="";
    if(average >= 90){
        grade= "A+";
    }
    if(average >= 80 && average < 90 ){
        grade= "A";
    }
    if(average >= 70 && average < 80){
        grade= "B+";
    }
    if(average >= 60 && average < 70){
        grade= "B";
    }
    if(average >= 50 && average < 60){
        grade= "C";
    }
    if(average >= 40 && average < 50){
        grade= "D";
    }  
    if(average < 40){
        grade= "F";
    }
    return grade;
}