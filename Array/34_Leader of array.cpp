/*
Brute Force Approach:
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            bool isLeader = true;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>arr[i])
                {
                isLeader = false;
                    break;
                }
            }
            if(isLeader)ans.push_back(arr[i]);
        }
        return ans;
        
    }
};
TC: O(N^2) SC: O(K) where K is the number of leaders in the array
*/

/*Optimal Solution - Traverse from right to left

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int max_right = arr[n-1];
        ans.push_back(max_right);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]>=max_right)
            {
                ans.push_back(arr[i]);
                max_right = arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
TC: O(N) SC: O(K) where K is the number of leaders in the array
*/