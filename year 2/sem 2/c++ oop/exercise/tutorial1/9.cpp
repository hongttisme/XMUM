#include <iostream>
using namespace std;

int main(){
    double rainfalls[12];
    double total = 0;
    double average;

    for(int i = 0; i < 12; i++){
        cout << "Enter the rainfall for month " << i + 1 << ": ";
        cin >> rainfalls[i];
        total += rainfalls[i];

    }

    average = total / 12;

    cout << "The total rainfall for the year is: " << total << endl;
    cout << "The average rainfall for the year is: " << average << endl;





}
