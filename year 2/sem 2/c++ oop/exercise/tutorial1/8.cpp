#include <iostream>
using namespace std;

int main(){
    float prices[5] = {15.95, 24.95, 6.95, 12.95, 3.95};
    float subtotal = 0;
    float tax = 0.075;
    float taxAmount;
    float total;


    for(int i=0; i<5; i++){
        cout << "Price of item " << i+1<<" = RM" << prices[i] << endl;
        subtotal += prices[i];

    }

    taxAmount = subtotal * tax;
    total = subtotal + taxAmount;

    cout << "Subtotal = RM" << subtotal << endl;
    cout << "Tax = RM" << taxAmount << endl;
    cout << "Total = RM" << total << endl;

    return 0;
}