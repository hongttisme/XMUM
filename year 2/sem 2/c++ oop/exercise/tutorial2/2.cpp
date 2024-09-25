#include <iostream>
using namespace std;

int main(){
    double totalHour;
    double pay = 0;
    cout << "input your total work hour: ";
    cin >> totalHour;
    if(totalHour - 40 <= 0){
        pay = totalHour*120;
    }else{
        pay = 40 * 120;
        pay += (totalHour - 40) * 120 * 1.5;
    }
    cout<< "gross pay: RM" << pay;

    return 0;
}