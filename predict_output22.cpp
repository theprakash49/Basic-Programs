#include <iostream>
using namespace std;

/*
    Predict the output
*/

int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;
    return 0;
}

/*
output
--------
First character 1
Second character 49
*/