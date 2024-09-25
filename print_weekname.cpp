#include <iostream>
using namespace std;

/*
    wap to input day number(1-7) and print day of week_name 
    by using switch case.
*/

int main(){
    int week_num;
    cout << "enter the day number : ";
    cin >> week_num;
    switch(week_num){
        case 1: 
            cout << "MON" << endl;
            break;
        case 2: 
            cout << "TUE" << endl;
            break;
        case 3: 
            cout << "WED" << endl;
            break;
        case 4: 
            cout << "THUR" << endl;
            break;
        case 5: 
            cout << "FRI" << endl;
            break;
        case 6: 
            cout << "SAT" << endl;
            break;
        case 7: 
            cout << "SUN" << endl;
            break;
        default:
            cout << "Invalid day number!" << endl;
    }
    return 0;
}