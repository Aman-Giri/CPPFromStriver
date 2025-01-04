#include<iostream>
using namespace std;

int main(){

    //loop 1 
    int i;
   for(i=1;i<=5;i++){
    cout << "Aman " << i << endl;
   }
    cout << "final value of i in first loop is: " << i << endl;
    cout << "*************" << endl;
    //loop 2
    int j;
    for(j=5;j>0;j--){
        cout << "Kumar " << j << endl;
    }
    cout << "final value of i in second loop: " << j << endl;

    return 0;
}