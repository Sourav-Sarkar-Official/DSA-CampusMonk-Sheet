/*Brute Force - Two Pointer Approach*/
/*
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        vector<int> ans;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                if(ans.empty() || ans.back() != nums1[i]) {
                    ans.push_back(nums1[i]);
                }
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};
// TC: O(n log n + m log m)
// SC: O(k) [k is number of common elements]
*/
/*Optimized - Hash Set Approach
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Always store smaller array in set (optimization)
        if (nums1.size() > nums2.size()) {
            return intersection(nums2, nums1);
        }
        unordered_set<int> st(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int i : nums2) {
            if (st.find(i) != st.end()) { // Find the element in set
                ans.push_back(i);         // If found insert into ans
                st.erase(i); // remove that element from set to avoid
                             // duplication
            }
        }
        return ans;
    }
};
TC: O(n + m) [n and m are sizes of two arrays][Avg case]
[It takes O(n*m) in worst case when all elements are same and hash collisions occur]
SC: O(min(n, m)) [size of set is at most the size of smaller array]
*/