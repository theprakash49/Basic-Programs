#include <iostream>
#include <string>
using namespace std;

/*
    Display this AP : 1,3,5,7,9...upto 'n' terms.
*/

int main(){
    int num;
    cout << "enter a number : ";
    cin >> num;
    int a = 1;
    for(int i = 1; i <= num; i++){
        cout << a << " ";
        a = a + 2;
    }
    cout << endl;
    return 0;
}