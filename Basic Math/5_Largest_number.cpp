#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,remainder;
    cout << "Enter a number: ";
    cin >> n;
    int largest = INT_MIN;
    while(n){
        remainder = n % 10;
        if (remainder > largest) largest = remainder;
        n /= 10;
    }
    cout << "The largest digit is : " << largest;
}