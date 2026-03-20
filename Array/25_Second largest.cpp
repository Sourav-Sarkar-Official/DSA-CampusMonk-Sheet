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

//Optimal Solution - One Pass

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int largest = -1 , second_largest = -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>largest)
            {
                second_largest = largest;
                largest = arr[i];
            }
            else if(arr[i]<largest && arr[i]>second_largest)
            {
                second_largest = arr[i];
            }
        }
        return second_largest;
        
    }
};

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/
