#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int main(){
    vector<double> rainfallVect = {};
    vector<double>::iterator iter;
    double doubleTemp, maxRainFall, minRainFall;

    cout << "input the rainfall for 12 month \n";
    for(int i = 0; i < 12 ; i++){
        cout << i+1 << ": ";
        cin >> doubleTemp;
        rainfallVect.push_back(doubleTemp);
    }

    

    for(iter = rainfallVect.begin(); iter < rainfallVect.end();iter++){
        cout << *iter << '\n';
    }

    iter = max_element(rainfallVect.begin(),rainfallVect.end());
    cout << "max: " << *iter << endl;

    iter = min_element(rainfallVect.begin(),rainfallVect.end());
    cout << "min: " << *iter;
    return 0;
}