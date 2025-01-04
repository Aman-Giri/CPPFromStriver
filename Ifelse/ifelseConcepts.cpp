#include<iostream>
using namespace std;

int main(){
    int age; 
    cout << "Enter the age: " << endl;
    cin >> age;
    if(age >= 18){
        cout << "You are the adult" << endl;
    }else{ 
        cout << "You are not adult" << endl;
    }
    return 0;

    //note: if else statement can run without else statement also
}