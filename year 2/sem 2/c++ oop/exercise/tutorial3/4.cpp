#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;

int main(){
    vector<int> count = {0,0,0,0,0,0,0,0,0,0,0};
    vector<int>::iterator iter;

    int dice1, dice2;
    for(int i = 0; i < 36000; i++){
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    count.at(dice1 + dice2 - 2) += 1;
    }

    for(int j = 0; j<12-1;j++){
        cout << j+2<<": "<< count.at(j) << endl;
    }
    
    return 0;
} 
