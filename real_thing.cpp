#include <iostream>
using namespace std;

/*
    if(condition){
        // statements
    }

    if(boolean_expression){
        // statements
    }

    -> any non-zero value it's true (5,-7,5.6,'h',"hy!",etc)
    -> zero(0) is false 
*/

int main(){
    if( 3 + 2 % 5)
        cout << "This works" << endl;
    int a;
    if(a = 10)
        cout << "Even this works" << endl;
    if(-5)
        cout << "Suprisingly even this works" << endl;
    if("hy"){
        cout << "what even this also works!" << endl;
    }
    
    return 0;
}