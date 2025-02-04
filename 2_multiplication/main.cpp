#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Bem-vindo ao programa de multiplicacao!" << endl;
    cout << "Welcome to the multiplication program!" << endl;
    cout << "You can multiply three numbers." << endl;
    cout << "Please enter the numbers you want to multiply" << endl;
    cout << "Let's start by entering the first number" << endl;
    cin >> num1;
    cout << "Great, the first number is " << num1 << endl;
    cout << "Now let's write the second number" << endl;
    cin >> num2;
    cout << "Great! The second number you wrote is " << num2 << endl;
    cout << "Now I just need the third number and I will multiply the numbers you wrote." << endl;
    cin >> num3;
    cout << "Great! You entered all the numbers." << endl;
    cout << "The final result is " << (num1 * num2 * num3) << endl;
    cout << "Thank you." << endl;
    return 0;
}