#include <iostream>
using namespace std;

int main(){
    int numOfITem, TempInt;
    double temp, sum, subTotal, shippingFee,discount, dmgProtectFee;
    string stringTemp;

    sum = 0;
    shippingFee = 0;
    discount = 0;
    subTotal = 0;
    dmgProtectFee = 0;

    cout << "total number of item: ";
    cin >> numOfITem;

    for(int i = 0; i< numOfITem;i++){
        cout << "price of "<< i+1 <<"th item: RM";
        cin >> temp;
        subTotal += temp;
    }

    if(subTotal > 250){
        cout << "apply damage protection? (1. yes, 2. no) :";
        cin >> TempInt;
        if(TempInt == 1)dmgProtectFee = subTotal * 0.01;
    }

    cout << "pick your shipping type (1. Saver, 2. Standard, 3. Courier): ";
    cin >> TempInt;

    if(TempInt == 1){
        shippingFee = 4.9;
    }else if (TempInt ==2){
        shippingFee = 6.9;
    }else if(TempInt == 3){
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

    cout << "total: RM" << subTotal + shippingFee - discount + dmgProtectFee<< '\n';

    cout << "discount: RM" << discount << ", shipping fee: RM" << shippingFee << ", damage protect fee: RM" << dmgProtectFee;
    

}