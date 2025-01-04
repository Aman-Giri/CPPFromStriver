#include<iostream>
using namespace std;

int doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;

    return 0;
}

int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

// Definition: A copy of the actual value is passed to the function. Changes made inside the function do not affect the original value.
// Behavior:
// Modifications made to the parameter inside the function have no effect on the argument outside the function.
// The original value remains unchanged.