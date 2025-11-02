#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int original = n;
        string s = to_string(n);
        int pow = s.size();
        int sum = 0;

        for (char c : s)
        {
            int digit = c - '0';
            int powered = 1;

            // Taking power operation for each individual element
            for (int i = 0; i < pow; i++)
            {
                powered *= digit;
            }
            // Sum of all powered elements
            sum += powered;
        }
        return sum == original;
    }
};