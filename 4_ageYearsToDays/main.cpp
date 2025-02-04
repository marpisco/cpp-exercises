#include <iostream>
using namespace std;

int main(){
    int years;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age in years: ";
    cin >> years;
    cout << "The age of " << nome << " in days is: " << (years*365) << endl;
    // The fun fact that you can optionally do.
    cout << "Fun fact: Did you that " << nome << " has lived for " << (years*365*24) << " hours?" << endl;
    return 0;
}