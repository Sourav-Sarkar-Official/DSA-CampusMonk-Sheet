/*
If we take another array to rearrange the elements, then we can easily solve this problem. But that will require O(N) extra space. We can solve this problem in O(1) extra space by using the two-pointer approach.
*/
/*Another array approach*/

/*
#include<iostream>
using namespace std;
void movezero(int arr[],int n)
{
    int newarr[n];
    int j = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            newarr[j++]=arr[i];
        }
    }
    //Append zeros
    while(j<n)
    {
        newarr[j++] = 0;
    }
    
}
int main()
{
    int arr[] = {5,0,2,9,0,4};
    int n = sizeof(arr[])/sizeof(arr[0]);
    int ans = movezero(arr,n);
    cout<<ans;
    return 0;
}
TC: O(N) SC: O(N)
*/
/*Two-pointer approach*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size(),j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0){
             swap(arr[i],arr[j]);
             j++;
            }    
        }
    }
};
/*TC: O(N) SC:O(1)*/