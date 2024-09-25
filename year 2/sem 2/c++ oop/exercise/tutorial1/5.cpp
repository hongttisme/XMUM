#include <iostream>
using namespace std;

int main(){
    float cost = 88.67;
    float tax = 0.0675;
    float tip = 0.20;
    float taxAmount = cost * tax;
    float tipAmount = (cost + taxAmount) * tip;
    float total = cost + taxAmount + tipAmount;

    

    cout << "The meal cost is: " << cost << endl;
    cout << "The tax amount is: " << taxAmount << endl;
    cout << "The tip amount is: " << tipAmount << endl;
    cout << "The total amount is: " << total << endl;


    return 0;
}