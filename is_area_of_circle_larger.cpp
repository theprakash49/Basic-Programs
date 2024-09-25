#include <iostream>
using namespace std;

/*
    Given the radius of the circle predict whether numerically area of
    this circle is larger than the circumference or not.
*/

int main(){
    int r;
    cout << "enter radius : ";
    cin >> r;
    float c = 2 * 3.141592 * r;
    float a = 3.141592 * r * r;

    if(a > c){
        cout << "Area > Circumference" << endl;
    }else if(a < c){
        cout << "Area < Circumference" << endl;
    }else if(a == c){
        cout << "Area = Circumference" << endl;
    }
    return 0;
}