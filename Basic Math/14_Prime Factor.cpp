#include <bits/stdc++.h>    
using namespace std;
class Solution {
  public:
    vector<int> primeFac(int n) {
        vector<int> ans;
        //1.Factor out prime 2
        if(n%2==0)
        {
            ans.push_back(2);
            while(n%2==0)
            {
                n/=2;
            }
        }
        //2.Factor out odd primes (from 3 up to sqrt(n))
        for(int i=3;i*i<=n;i++)
        {
            if(n%i == 0)
            {
                ans.push_back(i);
                while(n%i == 0) n/=i;
            }
        }
        
        //3. If n is prime itself
        if(n > 1) ans.push_back(n);
        return ans;
    }
};