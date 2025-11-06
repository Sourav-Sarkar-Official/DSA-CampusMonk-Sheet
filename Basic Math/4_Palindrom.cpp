#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int original,reversed =0 ,remainder;
        if(x < 0) return false;
        original = x;
        while(x)
        {
            remainder = x % 10;
            if((reversed > INT_MAX / 10 ) || (reversed < INT_MIN / 10 )) return 0;
            reversed = reversed * 10 + remainder;
            x /= 10; 
        }
        if(original == reversed) return true;
        else return false;
    }
};