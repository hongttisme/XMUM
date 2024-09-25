#include <iostream>
using namespace std;

int main(){
    double income,tax;
    cout << "Input for the total chargeable income: ";
    cin >> income;

    if(income > 2000000){
        tax = 528400;
        tax += (income - 2000000) * 0.3;
    }else if(income > 600000){
        tax = 136400;
        tax += (income - 600000) * 0.28;
    }else if(income > 400000){
        tax = 84400;
        tax += (income - 400000) * 0.26;
    }else if(income > 100000){
        tax = 9400;
        tax += (income - 100000) * 0.25;
    }else if(income > 70000){
        tax = 3700;
        tax += (income - 70000) * 0.19;
    }else if(income > 50000){
        tax = 1500;
        tax += (income - 50000) * 0.11;
    }else if(income > 35000){
        tax = 600;
        tax += (income - 35000) * 0.06;
    }else if(income > 20000){
        tax = 150;
        tax += (income - 20000) * 0.03;
    }else if(income > 5000){
        tax = 0;
        tax += (income - 5000) * 0.01;
    }else{
        tax = 0;
    }
    cout << "tax: RM" << tax;
    return 0;
}