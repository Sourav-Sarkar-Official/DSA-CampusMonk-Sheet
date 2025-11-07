#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = arr[0];
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>max) max = arr[i];
        }
        int second_max = -1;
        for(int i=0;i<arr.size();i++)
        {
            if((arr[i]>second_max) && (arr[i] != max)) second_max = arr[i];
        }
        return second_max;
    }
};
/*
Time Complexity: O(N) + O(N) = O(2N) => O(N)
Space Complexity: O(1)
*/