#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkPerfectNumber(int num) {
        /*1 is a perfect divisor for all number that's why 
        we perform sum = 0 + 1 = 1 before and start the loop from 2 position*/
        int original = num,sum = 1;
        if(num <= 1) return false;
        for(int i=2;i*i<num;i++)
        {
            if(num % i == 0) 
            {
                sum += i;
                if(num/i != i) sum += num/i;
            }
        }
        return sum == original;
    }
};

/*
Time complexity: O(sqrt(n)) 
Space complexity: O(1)
*/