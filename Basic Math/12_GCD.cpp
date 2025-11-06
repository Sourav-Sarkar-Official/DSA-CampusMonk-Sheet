#include <bits/stdc++.h>    
using namespace std;
class Solution {
  public:
    int gcd(int a, int b) {
        if(a%b == 0) return b;
        return gcd(b , a%b);
    }
};