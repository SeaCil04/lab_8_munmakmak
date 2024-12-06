#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int age,height,boun;
    string name;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
        if(height < 100){
            name = "Chopper";
        }else if(height < 180){
            name = "Usopp";
        }else{
            cout << "Enter your bounty: ";
            cin >> boun;
            if(boun <= 11 * pow(10,8)){
                name = "Sanji";
            }else{
                name = "Zoro";
            }
        }
    }else if(age <= 60){
        cout << "Enter your bounty: ";
        cin >> boun;
        if(boun > 5 * pow(10,8)){
            name = "Jinbe";
        }else{
            name = "Franky";
        }
    }else{
        name = "Brook";
    }
    cout << "Your character = " << name;
}

