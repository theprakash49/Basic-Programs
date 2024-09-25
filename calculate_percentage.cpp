#include <iostream>
using namespace std;

int main(){
    float math = 76;
    float english = 53;
    float physics = 65;
    float chemistry = 45;
    float biology = 45;
    float zoology = 35;
    float percent = (math + english + physics + chemistry + biology + zoology) / 6;
    cout << "Percentage : " << percent << endl; // 53.1667
    return 0;
}