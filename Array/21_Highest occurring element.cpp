/* Highest occurring element in an array:
Given an array of n integers, find the most frequent element in it i.e., the element that
occurs the maximum number Of times. If there are multiple elements that appear a
maximum number of times, find the smallest Of them.
Examples:
Input: arr = [1, 2, 2, 3, 3, 3]
Output: 3
Explanation: The number 3 appears the most (3 times). It is the most frequent element.
Input: arr = [4, 4, 5, 5, 6]
Output: 4
Explanation: Both 4 and 5 appear twice, but 4 is smaller. so, 4 is the most frequent element.

Solution:
#include<bits/stdc++.h>
using namespace std;
int max_occur(int arr[],int n)
{
    map<int,int> freq;
    //Count frequency
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    //Get max frequency
    int max_freq = 0;
    for(auto it:freq)
    {
        if(it.second > max_freq)
        {
            max_freq = it.second;
        }
    }
    int ans = INT_MAX;
    for(auto it:freq)
    {
        if(it.second == max_freq)
        {
            ans = min(ans,it.first);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int ans = max_occur(arr,n);
    cout << ans;
    return 0;
}

*/

/*
LC : 3005. Count Elements With Maximum Frequency
You are given an array nums consisting of positive integers.

Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

The frequency of an element is the number of occurrences of that element in the array.

Example 1:

Input: nums = [1,2,2,3,1,4]
Output: 4
Explanation: The elements 1 and 2 have a frequency of 2 which is the maximum frequency in the array.
So the number of elements in the array with maximum frequency is 4.

Example 2:

Input: nums = [1,2,3,4,5]
Output: 5
Explanation: All elements of the array have a frequency of 1 which is the maximum.
So the number of elements in the array with maximum frequency is 5.

Constraints:

1 <= nums.length <= 100
1 <= nums[i] <= 100
Soltution:
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> freq;
        int n = nums.size();
        //Count the frequency
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        //Calculate maximum frequency
        int maxfreq = 0;
        for(auto it:freq)
        {
            if(it.second > maxfreq) maxfreq = it.second;
        }
        //Check for which elements has the max frequency
        int ans = 0;
        for(auto it:freq)
        {
            if(it.second == maxfreq) ans += it.second;
        }
        return ans;

    }
};
*/
