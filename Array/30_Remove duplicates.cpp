/*Brute Force*/
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        vector<int> temp;
        temp.push_back(nums[0]);
        // Store unique elements
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[i - 1]) {
                temp.push_back(nums[i]);
            }
        }
        // Copy to main array(nums)
        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }
        return temp.size();
    }
};
TC: O(N) SC: O(N)
*/
