#include <iostream>
using namespace std;

/*
    Take 3 numbers input and tell if they can be sides of a triangle.
*/

int main(){
    int a,b,c;
    cout << "enter 1st side : ";
    cin >> a;
    cout << "enter 2nd side : ";
    cin >> b;
    cout << "enter 3d side : ";
    cin >> c;
    if((a + b) > c && (b + c) > a && (c + a) > b){
        cout << "Can be Side of triangle" << endl;
    }else{
        cout << "Invalid triangle" << endl;
    }
    return 0;
}