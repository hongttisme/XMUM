#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>





using namespace std;

int main(){
    long input;
    vector<long> pws = {5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,5552012,5050552,7825877,1250255,1005231,6545231,3852085,7576651,7881200,4581002};
    sort(pws.begin(), pws.end());
    cout << "enter the pw: ";
    cin >> input;
    

    if(binary_search(pws.begin(), pws.end(), input)){
        cout << "valid";
    } 
    else cout << "invalid";
    
    return 0;
} 
