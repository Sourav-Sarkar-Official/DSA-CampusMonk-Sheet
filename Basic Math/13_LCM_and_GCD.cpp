#include <bits/stdc++.h>
using namespace std;    
class Solution {
  public:
   int gcd(int a,int b)
   {
       if(b == 0) return a;
        return gcd(b , a%b);
   }
    vector<int> lcmAndGcd(int a, int b) {
    int g = gcd(a,b);
    int l = (a/g)*b;
    return {l,g};
    }
};
int main() {
    Solution sol;
    vector<int> result = sol.lcmAndGcd(4,6);
    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;
    return 0;
}