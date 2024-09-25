#include <iostream>
#include <cmath>

using namespace std;


int main(){
    double loan, rate, N;
    cout << "Loan Amount: RM";
    cin >> loan;
    cout << "Monthly Interest Rate: ";
    cin >> rate;
    cout << "Number of Payments: ";
    cin >> N;
    
    double payment = (loan * rate * pow(1 + rate, N)) / (pow(1 + rate, N) - 1);
    cout << "Monthly Payment: RM" << payment << endl;
    cout << "Amount Paid Back: RM" << payment * N << endl;
    cout << "Interest Paid: RM" << payment * N - loan << endl;


}