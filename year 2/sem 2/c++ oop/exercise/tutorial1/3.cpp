#include <iostream>
using namespace std;

int main(){
    #define pi 3.14
    const float pi2 = 3.14;

    float r = 5.6;

    float volume = (4/3) * pi * r * r * r;
    float volume2 = (4/3) * pi2 * r * r * r;
    cout << volume << endl;
    cout << volume2 << endl;

    return 0;

 




    return 0;
}