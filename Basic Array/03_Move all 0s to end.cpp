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