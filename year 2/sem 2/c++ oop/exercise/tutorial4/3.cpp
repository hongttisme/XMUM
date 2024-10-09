#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

class Account{
    private:
    int blance;


    public:
    Account(int x){
        if(x <= 0){
            cout << "the initial balance was invalid" << "\n";
            blance = 0;
        }else{
            blance = x;
        }
    }

    void credit(int x){
        blance += x;
    }

    void debit(int x){
        if(x > blance){
            cout << "Debit amount exceeded account balance." << "\n";
        }else{
            blance -= x;
        }
    }

    int getBalance(){
        return blance;
    }
    
};

int main(){
    Account acount1(100);
    Account acount2(-29);

    cout << acount1.getBalance() << "\n";
    cout << acount2.getBalance() << "\n";

    acount1.credit(20);
    cout << acount1.getBalance() << "\n";

    acount1.debit(200);
    cout << acount1.getBalance() << "\n";
    acount1.debit(10);
    cout << acount1.getBalance() << "\n";



    return 0;
} 
