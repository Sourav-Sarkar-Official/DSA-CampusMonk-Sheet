#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        /*Using two pointer*/
        int i = 0,j=arr.size()-1;
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
        
    }
};

// Time Complexity: O(N) and Space Complexity: O(1)