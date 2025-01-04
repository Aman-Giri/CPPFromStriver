#include<iostream>
using namespace std;

int main(){
    string s = "Striver";
    cout << s[0] << endl;
    cout << s[1] << endl;
    int len = s.size();
    cout << "The size of the string s is: " << len << endl;
    cout << s[len-1] << endl;
    s[len-1] = 'z';
    cout << s << endl;
    return 0;
}