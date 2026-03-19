/*
Given an array of n integers, find the second most frequent element in it. If there are
multiple elements that appear a maximum number of times, find the smallest Of them. If
second most frequent element does not exist return -1.
Examples:
Input: arr = [1, 2, 2, 3, 3, 3]
Output: 2
Explanation: The number 2 appears the second most (2 times) and number 3 appears the
most(3 times).
Input: arr = (4, 4, 5, 5, 6, 7]
Output: 6
Explanation: Both 6 and 7 appear second most times, but 6 is smaller.
*/

/*
#include<bits/stdc++.h>
using namespace std;
int smax_occur(int arr[],int n)
{
    map<int,int> freq;
    //Count frequency
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    //Edge case for all same elements [1,1,1,1,1]
    if(freq.size() == 1) return -1;
    //Get max frequency
    int max_freq = 0;
    for(auto it:freq)
    {
        if(it.second > max_freq)
        {
            max_freq = it.second;
        }
    }

    //Get second max freq
    int Smax_freq = 0;
    for(auto it:freq)
    {
        if(it.second > Smax_freq && it.second < max_freq)
        {
            Smax_freq = it.second;
        }
    }
    //Check if second_max exist or not like [1,1,2,2]
    if(Smax_freq == 0) return -1;
    //Return the answer
    int ans = INT_MAX;
    for(auto it:freq)
    {
        if(it.second == Smax_freq)
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
    int ans = smax_occur(arr,n);
    cout << ans;
    return 0;
}
*/