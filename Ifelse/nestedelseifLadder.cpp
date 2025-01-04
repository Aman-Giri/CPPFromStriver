#include<iostream>
using namespace std;

int main(){
    int age; 
    cout << "Enter the age: " << endl;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for the job" << endl;
    }else if(age <= 57){
        cout << "eligible but retiurement soon" << endl;
        if(age > 55){
            cout << "but retirementSoon" << endl;
        }
    }else{
        cout << "Retirement time" << endl;
    }
    return 0;
}