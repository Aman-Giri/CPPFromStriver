#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    cout << "Total size of the array: " << sizeof(arr) << endl; // Total Size=Number of Elements×Size of Each Element
    arr[0][0] = 23;
    cout << "The element is at first row and first column is: " << arr[0][0] << endl;
    cout << "Total number of the elements: " << sizeof(arr)/sizeof(arr[0][0]) << endl;
    cout << "Element which is not declared in the 2d array: " << arr[1][3] << endl;
    return 0;
}