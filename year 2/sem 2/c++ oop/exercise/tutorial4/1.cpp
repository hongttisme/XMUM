#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

class Employee{
    private:
    string name;
    int idNumber;
    string department;
    string position;

    public:
    Employee(string n, int i, string d, string p){
        setName(n);
        setId(i);
        setDepartment(d);
        setPosition(p);
    }

    void setName(string s){
        name = s;
    }
    void setId(int x){
        idNumber = x;
    }
    void setDepartment(string s){
        department = s;
    }
    void setPosition(string s){
        position = s;
    }

    string getName(){
        return name;
    }
    int getId(){
        return idNumber;
    }
    string getDepartment(){
        return department;
    }
    string getPosition(){
        return position;
    }
};

int main(){
    Employee employee1("Susan Meyers",47899,"Accounting","Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers",81774 , "Manufacturing","Engineer" );





    cout << "name: " << employee1.getName() << "\n";
    cout << "idNumber: " << employee1.getId() << "\n";
    cout << "department: " << employee1.getDepartment() << "\n";
    cout << "position: " << employee1.getPosition() << "\n\n";

    cout << "name: " << employee2.getName() << "\n";
    cout << "idNumber: " << employee2.getId() << "\n";
    cout << "department: " << employee2.getDepartment() << "\n";
    cout << "position: " << employee2.getPosition() << "\n\n";

    cout << "name: " << employee2.getName() << "\n";
    cout << "idNumber: " << employee2.getId() << "\n";
    cout << "department: " << employee2.getDepartment() << "\n";
    cout << "position: " << employee2.getPosition() << "\n\n";
        



    return 0;
} 
