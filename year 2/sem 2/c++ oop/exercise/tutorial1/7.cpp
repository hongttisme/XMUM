#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Swap two numbers:" << '\n';
    cout << "------------------" << '\n';
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "After swapping, the 1st number is: " << a << '\n';
    cout << "After swapping, the 2nd number is: " << b << '\n';








    return 0;
}