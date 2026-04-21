/*Brute-Force Approach*/
/*
Idea: We can use two separate arrays to store the positive and negative numbers from the input array. Then, we can iterate through both arrays simultaneously and add the elements to the result array in the required order.
*/
/*
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> a;
        vector<int> b;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                a.push_back(nums[i]);
            }
            else b.push_back(nums[i]);
        }
        for(int i=0;i<n/2;i++)
        {
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
        return ans;

    }
};
*/

//Next optimization hint:

// instead of storing positives and negatives separately and then merging,
// you can directly place them in answer using
// one index for positive positions: 0, 2, 4...
// one index for negative positions: 1, 3, 5...

// That becomes the better approach.

/*Optimized Approach
vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pos = 0;
        int neg = 1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos] = nums[i];
                pos+=2;
            }
            else
            {
                ans[neg] = nums[i];
                neg+=2;
            }
        }
        return ans;
    }
*/