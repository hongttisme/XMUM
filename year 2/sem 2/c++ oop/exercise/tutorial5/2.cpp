#include <iostream>



using namespace std;

class Complex{
    private:
    double real;
    double imag  ;
    double cost;
    double totalCost;

    public:
    Complex(){
        real = 0;
        imag = 0;
    }

    Complex(double r, double i){
        real = r;
        imag = i;
    }

    double getReal(){
        return real;
    }
    double getimag(){
        return imag;
    }

    void add(Complex c){
        real += c.getReal();
        imag += c.getimag();
    }
    void subtract(Complex c){
        real -= c.getReal();
        imag -= c.getimag();
    }
    void print(){
        cout<<'\n' << "(" << to_string(real) << ", " << to_string(imag) << ")";
    }
};

int main(){
    
    Complex examples[3] = {
        Complex(),
        Complex(1,3),
        Complex(2,4)
    };

    for(int i = 0 ; i<3 ;i++){
        examples[i].print();
    }

    cout << "\n\n--------------------------------------\n";
    examples[0].add(examples[2]);
    examples[1].subtract(examples[2]);

    for(int i = 0 ; i<3 ;i++){
        examples[i].print();
    }

    return 0;
} 
