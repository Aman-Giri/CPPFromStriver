#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter the numbers in array: " << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[3] << endl;
    arr[3] += 10;
    cout << arr[3];
    return 0;

    //Ensures that elements are stored next to each other in memory, allowing for fast access and iteration.
    //Inflexibility if the required size changes during execution.

}