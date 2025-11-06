#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    while(n)
    {
        int last_digit = n % 10;
        if(last_digit % 2 == 1) count++;
        n = n / 10;
    }
    cout<<count<<endl;
    return 0;
}