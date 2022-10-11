#include <iostream>

using namespace std;

void busTicket(){
    int locations;
    float adultPrice;
    float childPrice;
    float Numadult;
    float Numchild;
    float GST = 0.06;

    cout << "Please enter the option that you want to choose and number of children and adult" << endl;
    cin >> locations;
    cin >> Numchild;
    cin >> Numadult;

    if (locations == 1){
        childPrice = 56;
        adultPrice = 30;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }else if (locations == 2){
        childPrice = 50;
        adultPrice = 20;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }else if (locations == 3){
        childPrice = 45;
        adultPrice = 18;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }else if (locations == 4){
        childPrice = 40;
        adultPrice = 15;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }else if (locations == 5){
        childPrice = 35;
        adultPrice = 12;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }else if (locations == 6){
        childPrice = 31;
        adultPrice = 10;
        float total = ((Numchild * childPrice) + (Numadult * adultPrice) * GST);
        cout << "Your total is: RM" << total << endl;
    }
}

int main(){
    busTicket();
}