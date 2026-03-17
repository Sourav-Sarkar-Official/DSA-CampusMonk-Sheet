// Given an array of integers, count the number of odd elements in the array.
#include <bits/stdc++.h>
using namespace std;
int count_odd(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0) count++;
    }
    return count;
}
int main(){
    int arr[] = {1,3,5,7,2,4,9,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = count_odd(arr,n);
    cout << ans;
}