#include <iostream>



using namespace std;

class NumDays{
    private:
    void hoursToDays(){
        workDays = workHours/8;
    }
    double workHours;
    double workDays;


    public:
    NumDays(double h){
        workHours = h;
        hoursToDays();
    }

    double getHour(){
        return workHours;
    }

    double getDays(){
        return workDays;
    }


};

int main(){

    NumDays examples[3] = {
        NumDays(8),
        NumDays(12),
        NumDays(18),
    };

    for(int i=0;i<3;i++){
        cout << "Working Hours : "<< examples[i].getHour() <<endl;
        cout << "Working Days  : "<< examples[i].getDays() <<endl<<endl;

    }
    return 0;
} 
