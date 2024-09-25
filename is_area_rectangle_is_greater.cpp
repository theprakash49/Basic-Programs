#include <iostream>
using namespace std;

/*
    Given the length and breadth of a rectangle, wap to find whether 
    the area of the rectangle is greater than its perimeter.
*/

int main(){
    int length,breadth;
    cout << "enter length : ";
    cin >> length;
    cout << "enter breadth : ";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    if(area > perimeter){
        cout << "Area > Perimeter" << endl;
    }else if(area < perimeter){
        cout << "Area < Perimeter" << endl;
    }else{
        cout << "Area = Perimeter" << endl;
    }
    return 0;
}