#include <iostream>
using namespace std;
int main(){
    float price = 95;
    float governmentTax = 0.04;
    float serviceTax = 0.02;
    float totalSalesTax = price * (governmentTax + serviceTax);
    cout << totalSalesTax;
    return 0;
}