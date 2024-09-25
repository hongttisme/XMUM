#include <iostream>
using namespace std;

int main(){
    double a, b, c, D;
    cout << "equation: ax^2 + bx + c\n";
    cout <<"a: ";
    cin >> a;
    cout <<"b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    D = b*b - 4 * a* c;
    if (D>0)cout<< "The equation has two roots.";
    else if (D == 0)cout << "The equation has one root.";
    else if (D < 0)cout << "The equation has no real roots.";

    return 0;
}