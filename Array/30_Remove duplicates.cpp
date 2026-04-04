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
/*Optimal Solution - In Place*/
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        int i = 1;//next position for unique elements
        for(int j=1;j<n;j++)
        {
            if(nums[j] != nums[i-1])
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};
TC: O(N) SC: O(1)
*/
