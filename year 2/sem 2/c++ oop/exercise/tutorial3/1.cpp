#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

int main(){
    int num;
    double a, sum;
    vector<double> scores;
    vector<double>::iterator iter;

    sum = 0;

    cout << "how many score you want to input: "<< endl;
    cin >> num;

    for(int i = 0; i < num ; i++){
        cout << i+1 << ": ";
        cin >> a;
        scores.push_back(a);
        sum += a;
    }

    sort(scores.rbegin(), scores.rend());
    for(iter=scores.begin(); iter<scores.end(); iter++){
    cout<< *iter << " ";
    }
    cout << endl;
    cout << sum/num ;

    return 0;
} 
