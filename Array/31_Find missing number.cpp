/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int totalsum = 0,actualsum = 0;
       for(int i=0;i<n;i++)
       {
        actualsum += nums[i];
       }
       totalsum = n * (n+1) / 2;
       return totalsum - actualsum;
    }
};
*/
//TC: O(N) SC: O(1)
//Remember the formula of sum of first n natural numbers is n*(n+1)/2. We can find the total sum of first n natural numbers and then subtract the actual sum of the given array to find the missing number.