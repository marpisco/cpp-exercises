#include <iostream>
using namespace std;

int main(){
    double height, radius;
    cout << "Enter the radius of the can: ";
    cin >> radius;
    cout << "Enter the height of the can: ";
    cin >> height;
    cout << "The volume of the can is: " << ((3.14*(radius*radius))*height) << endl;
    return 0;
}