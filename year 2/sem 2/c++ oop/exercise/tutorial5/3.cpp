#include <iostream>

using namespace std;

class Circle{
    private:
    double radius;
    double area;
    double diameter;
    double circumference;
    const double pi = 3.14159;

    void calcArea(){
        area = radius * radius * pi;
    }

    void calcDiameter(){
        diameter = radius * 2;
    }

    void calcCircumference(){
        circumference = 2*radius*pi;
    }


    public:
    Circle(){
        radius = 0;
    }
    Circle(double r){
        radius = r;
    }
    void setRadius(double r){
        radius = r;
    }
    double getRadius(){
        return radius;
    }
    double getArea(){
        calcArea();
        return area;
    }
    double getDiameter(){
        calcDiameter();
        return diameter;
    }
    double getCirumference(){
        calcCircumference();
        return circumference;
    }
    
};

int main(){
    Circle examples[2] = {
        Circle(3.5),
        Circle(5.2)
    };

    for(int i =0; i< 2; i++){
        cout << "Circle " << to_string(i+1) << endl;
        cout << "Area: " << to_string(examples[i].getArea()) << endl;
        cout << "Diameter: " << to_string(examples[i].getDiameter()) << endl;
        cout << "Circumference: " << to_string(examples[i].getCirumference()) << endl << endl;

    }

    return 0;
} 
