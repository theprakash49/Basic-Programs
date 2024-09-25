#include <iostream>
#include <string> 
using namespace std;

/*
    Given the marks of the student. If the marks are greater than 33 print the result as pass otherwise fail without using if-else statement.
*/

int main(){
    int mark;
    cout << "enter the mark : ";
    cin >> mark;
    string is_pass = (mark > 33)? "Pass" : "Fail";
    cout << mark << "/" << is_pass << endl;
    return 0;
}