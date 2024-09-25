#include <iostream>
using namespace std;

// wap take float input and print the fractional part of the real number
int main(){
    float num;
    cout << "enter a number : ";
    cin >> num;
    int y = (int)num;
    if(y < 0) { // logic part, if the `y` is negative number
        y = y -1;
    }
    float z = (float)y;
    float find_fractional = num - z;
    cout << "Fractional Part of " << num << " is : " << find_fractional << endl;
    return 0;
}