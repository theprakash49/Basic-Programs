#include <iostream>
using namespace std;

// wap for finding the volume of cylinder by taking radius 
// and height as input
int main(){
    int radius,height;
    cout << "enter radius : ";
    cin >> radius;
    cout << "enter height : ";
    cin >> height;
    float pi = 3.1415;
    float volume = pi * radius * radius * height;
    cout << "Volume of cylinder is : " << volume << endl;
    return 0;
}