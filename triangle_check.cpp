#include <iostream>
using namespace std;

/*
    wap to input sides of a triangle and check whether a triangle is 
    equilateral,scalene or isosceles triangle.
*/

int main(){
    int a,b,c;
    cout << "enter 3 side : ";
    cin >> a >> b >> c;
    if((a == b) && (a == c)){
        cout << "Equilateral" << endl;
    }else if((a == b || a == c || b == c)){
        cout << "Isoscales" << endl;
    }else{
        cout << "Scalene" << endl;
    }
    return 0;
}