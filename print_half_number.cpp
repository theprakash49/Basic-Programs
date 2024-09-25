#include <iostream>
using namespace std;

// Take integer as input and print half of the number
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    float half_num = (float)num;
    cout << half_num/2 << endl;
    return 0;
}