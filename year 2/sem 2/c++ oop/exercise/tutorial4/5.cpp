#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
    int totalSeconds;
public:
    Time(int s){
        totalSeconds = s;
        setTime();
    }
    void setTime(){
        hours = totalSeconds/ (60*60);
        minutes = totalSeconds / 60 - hours * 60;
        seconds = totalSeconds - hours * 60 * 60 - minutes * 60;
    }
    void addTime(Time t){
        totalSeconds += t.getTIme();
        setTime();
    }

    int getTIme(){
        return totalSeconds;
    }

    void display(){
        cout << "\n";
        cout << "total second: " << totalSeconds << "\n";
        cout << "hour: " << hours << "\n";
        cout << "minute: " << minutes << "\n";
        cout << "second: " << seconds << "\n";
        cout << "\n";

    }
};

int main(){
    Time time1(20350);
    Time time2(13902);
    time1.display();
    time2.display();
    time1.addTime(time2);
    time1.display();



    return 0;
} 
