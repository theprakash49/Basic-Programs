#include <iostream>
using namespace std;

/*
    Take input marks of a student and print the grade 
    according to marks.

    91 - 100 (Excellent)
    81 - 90  (Very good)
    71 - 80  (Good)
    61 - 70  (Can do better)
    51 - 60  (Average)
    40 - 50  (Below Average)
    < 40     (Fail)
*/

int main(){
    int marks;
    cout << "enter your marks : ";
    cin >> marks;
    if(marks >= 91 && marks <= 100){
        cout << "Excellent" << endl;
    }else if(marks >= 81 && marks <= 90){
        cout << "Very good" << endl;
    }else if(marks >= 71 && marks <= 80){
        cout << "Good" << endl;
    }else if(marks >= 61 && marks <= 70){
        cout << "Can do better" << endl;
    }else if(marks >= 51 && marks <= 60){
        cout << "Average" << endl;
    }else if(marks >= 40 && marks <= 50){
        cout << "Below Average" << endl;
    }else if(marks < 40){
        cout << "Fail" << endl;
    }
    return 0;
}