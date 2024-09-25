#include <iostream>
using namespace std;

/*
    Given a point(x,y), write a program to find out if it lies on the 
    x-axis,y-axis or at the origin, viz(0,0).
*/

int main(){
    int x,y;
    cout << "enter x,y coordinate : ";
    cin >> x >> y;
    if(x == 0 && y == 0){
        cout << "Origin" << endl;
    }else if(x == 0){
        cout << "Y-Axis" << endl;
    }
    else if(y == 0){
        cout << "X-Axis" << endl;
    }else if(x > 0 && y > 0){
        cout << "1st Quadrant" << endl;
    }else if(x < 0 && y > 0){
        cout << "2nd Quadrant" << endl;
    }else if(x < 0 && y < 0){
        cout << "3rd Quardrant" << endl;
    }else if(x > 0 && y < 0){
        cout << "4th Quardrant" << endl;
    }
    return 0;
}