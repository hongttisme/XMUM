#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

struct rateRange{
    double lower;
    double upper;
};


class HeartRates{
    private:
    string firstName;
    string lastName;
    int birthYear;
    public:
    HeartRates(string f, string l, int y){
        firstName = f;
        lastName = l;
        birthYear = y;
    }

    void setFirstName(string s){
        firstName = s;
    }

    void setLastName(string s){
        lastName = s;
    }

    void setBirthYear(int x){
        birthYear = x;
    }

    string getFirstName(){
        return firstName;
    }

    string getLastName(){
        return lastName;
    }

    int getBirthYear(){
        return birthYear;
    }

    int getAge(){
        return 2024 - birthYear;
    }

    int getMaximumHeartRate(){
        return 220 - getAge();
    }

    rateRange getTargetHeartRate(){
        rateRange target;
        
        target.lower = getMaximumHeartRate() * 0.5;
        target.upper = getMaximumHeartRate() * 0.85;
        return target;
    }
    
};

int main(){
    string f,l;
    int y;
    cout << "input you information\n";
    cout << "first name: ";
    cin >> f;
    cout << "last name: ";
    cin >> l;
    cout << "birth year: ";
    cin >> y;
    HeartRates heartRates1(f,l,y);
    cout << "\n\n\n";

    cout << "first name: " << heartRates1.getFirstName() << "\n";
    cout << "last name : " << heartRates1.getLastName() << "\n";
    cout << "birth year: " << heartRates1.getBirthYear() << "\n";
    cout << "age       : " << heartRates1.getAge() << "\n";
    cout << "Max rate  : " << heartRates1.getMaximumHeartRate() << "\n";
    cout << "rate range: " << heartRates1.getTargetHeartRate().lower  << "-" << heartRates1.getTargetHeartRate().upper << "\n";


    return 0;
} 
