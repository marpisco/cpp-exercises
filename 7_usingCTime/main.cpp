#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int currentYear, age;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    currentYear = 1900 + ltm->tm_year;
    cout << "Let's calculate your birth year!" << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You were born in " << (currentYear-age) << "!";
    return 0;
}