#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int reversed = 0,original,remainder;
        original = x;
        while(x)
        {
            remainder = x % 10;
            if((reversed > INT_MAX / 10 ) || (reversed < INT_MIN / 10 )) return 0;
            reversed = reversed * 10 + remainder;
            x /= 10;
        }
        return reversed;
    }
};