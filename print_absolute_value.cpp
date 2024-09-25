#include <iostream>
#include <string>
using namespace std;

// wap to print the absolute value of that integer
int main(){
    int n;
    cout << "enter an integer : ";
    cin >> n;
    string txt;
    txt = "Absolute value of ";
    if(n > 0){
        cout << txt << n << " is " << n << endl;
    }else{
        cout << txt << n << " is " << -(n) << endl;
    }
    return 0;
}