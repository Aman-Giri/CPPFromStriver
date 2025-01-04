#include<iostream>
using namespace std;
//functions are the set of code which performs something for you
//functions are used to modularise the code
//functions are used to increase the code readabiity
//functions are used to use the same code multiple times
//void -> which does not return anything
//return
//parameterised
//non parameterised

//function to print the name
void printName(string name){
    cout << "Hey " << name << endl;
}

//Function to print the sum of two numbers
int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

//Function to print the max of two numbers
int maxx(int num1, int num2){
    if(num1 >= num2){
        return num1;
    }else{
        return num2;
    }
}

int main(){
    // string name;
    // cout << "Please enter the name: " << endl;
    // cin >> name;
    // printName(name);

    // string name2;
    // cout << "Please enter the name: " << endl;
    // cin >> name2;
    // printName(name2);

    // int num1,num2;
    // cout << "Enter the numbers" << endl;
    // cin >> num1 >> num2;
    // cout << "The sum is: " << sum(num1,num2) << endl;

    // some inbuilt funtions
    // int num1,num2;
    // cout << "Enter the numbers" << endl;
    // cin >> num1 >> num2;
    // cout << "The maximum is: " << max(num1,num2) << endl;
    // cout << "The minimum is: " << min(num1,num2) << endl;

    //function to find the maximum of two numbers
    int num1,num2;
    cout << "Enter the numbers" << endl;
    cin >> num1 >> num2;
    cout << "The maximum is: " << maxx(num1,num2) << endl;

    return 0; 
}