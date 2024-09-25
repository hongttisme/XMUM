#include <iostream>
using namespace std;

int main(){
    
    double sum = 0;
    for(int i = 1; i < 101;i++){
        if(i%7 == 0){
            sum += i;
        }
    }
    cout << sum ;
    return 0;
}