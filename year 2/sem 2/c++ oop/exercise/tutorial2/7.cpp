#include <iostream>
using namespace std;

int main(){
    int numOfITem, intTemp;
    double temp, sum, subTotal, shippingFee,discount;
    string stringTemp;

    sum = 0;
    shippingFee = 0;
    discount = 0;
    subTotal = 0;

    cout << "total number of item: ";
    cin >> numOfITem;

    for(int i = 0; i< numOfITem;i++){
        cout << "price of "<< i+1 <<"th item: RM";
        cin >> temp;
        subTotal += temp;
    }

    cout << "pick your shipping type (1. Saver, 2. Standard, 3. Courier): ";
    cin >> intTemp;

    if(intTemp == 1){
        shippingFee = 4.9;
    }else if (intTemp ==2){
        shippingFee = 6.9;
    }else if(intTemp == 3){
        shippingFee = 10.5;
    }



    cout << "input your voucher code: ";
    cin >> stringTemp;
    if(stringTemp == "0505CARNIVAL" && subTotal >= 50){
        discount = subTotal * 0.05;
    }else if (stringTemp == "SPRINGISHERE" && subTotal >= 150){
        discount = 15;
    }else if (stringTemp == "FREESHIPPING" && subTotal >=300 && shippingFee > 0 && shippingFee < 7){
        shippingFee = 0;
    }

    cout << "subtotal: RM" << subTotal << '\n';

    cout << "total: RM" << subTotal + shippingFee - discount<< '\n';

    cout << "discount: RM" << discount << ", shipping fee: RM" << shippingFee;

}