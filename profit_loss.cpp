#include <iostream>
using namespace std;

/*
    If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred. 
*/

int main(){
    int cp,sp;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    if(sp > cp){
        cout << "Profit : " << sp - cp << endl;
    }else if(sp == cp){
        cout << "No Proft & Loss!" << endl;
    }else{
        cout << "Loss : " << cp - sp << endl;
    }

    return 0;
}