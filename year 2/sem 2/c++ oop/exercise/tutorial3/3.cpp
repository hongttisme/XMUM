#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>





using namespace std;

int main(){
    int input;
    vector<int> nums;
    vector<int>::iterator iter;


    for(int i = 0; i < 20; i++){
        cout << i +1 << ": ";
        cin >> input;
        
        sort(nums.begin(), nums.end());
        if(!binary_search(nums.begin(), nums.end(), input)){
            nums.push_back(input);
        }

    }
    for(iter=nums.begin(); iter<nums.end(); iter++){
    cout<< *iter << " ";
    }

    
    return 0;
} 
