#include <iostream>
using namespace std;

/*
    Any year is input through the keyboard.wap to determine whether
    the year is a leap year or not.(considering leap year occurs after every 4 years)
*/

int main(){
    int year;
    cout << "enter a year : ";
    cin >> year;
    if(year % 400 == 0){
        cout << "Leap Year" << endl;
    }else if(year % 100 == 0){
        cout << "Not a Leap Year" << endl;
    }else if(year % 4 == 0){
        cout << "Leap Year" << endl;
    }else{
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}