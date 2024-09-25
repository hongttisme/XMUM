#include <iostream>
using namespace std;

int main(){
    double percentage = 0.6;
    double taxPer100 = 0.75;
    double propertyActualValue;
    double assessmentValue;


    cout << "Enter the actual value of the property: ";
    cin >> propertyActualValue;

    assessmentValue = propertyActualValue * percentage;

    cout << "The assessment value is: RM" << assessmentValue << endl;
    cout << "The property tax is: RM" << assessmentValue * taxPer100 / 100 << endl;





    return 0;
}