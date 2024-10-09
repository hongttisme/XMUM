#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>



using namespace std;

class inventory{
    private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

    public:
    inventory(int i, int q, double c){
        setItemNumber(i); 
        setQuantity(q);
        setCost(c);
        setTotalCost();
    }
    void setTotalCost(){
        totalCost = quantity * cost;
    }

    void setItemNumber(int x){
        itemNumber = x;
    }

    void setQuantity(int x){
        quantity = x;
    }

    void setCost(double x){
        cost = x;
    }



    int getItemNumber(){
        return itemNumber;
    }
    int getQuantity(){
        return quantity;
    }
    double getCost(){
        return cost;
    }
    double getTotalCost(){
        return totalCost;
    }
};

int main(){
    
    int itemNumber, quantity;
    double cost;



    
    cout << 1 << "th item \n";
    cout << "item number: ";
    cin >> itemNumber;
    cout << "quantity: ";
    cin >> quantity;
    cout << "cost: ";
    cin >> cost;
    cout << "\n";
    inventory item1(itemNumber,quantity,cost);

    cout << 2 << "th item \n";
    cout << "item number: ";
    cin >> itemNumber;
    cout << "quantity: ";
    cin >> quantity;
    cout << "cost: ";
    cin >> cost;
    cout << "\n";
    inventory item2(itemNumber,quantity,cost);


    cout << 1<< "th item \n";
    cout << "item number: ";
    cout << item1.getItemNumber() << "\n";
    cout << "quantity: ";
    cout << item1.getQuantity() << "\n";
    cout << "cost: ";
    cout << item1.getCost() << "\n";
    cout << "total cost: ";
    cout << item1.getTotalCost() << "\n";
    cout << "\n";
        
    cout << 2<< "th item \n";
    cout << "item number: ";
    cout << item2.getItemNumber() << "\n";
    cout << "quantity: ";
    cout << item2.getQuantity() << "\n";
    cout << "cost: ";
    cout << item2.getCost() << "\n";
    cout << "total cost: ";
    cout << item2.getTotalCost() << "\n";
    cout << "\n";


    return 0;
} 
