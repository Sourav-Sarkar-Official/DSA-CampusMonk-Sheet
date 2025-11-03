/*
This is optimal approach 
to find count of prime numbers less than n 
using Sieve of Eratosthenes algorithm.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        if(n<=2) return 0;
        int prime[n+1]; //Take n+1 size because we need n index
        for(int i=2;i<n;i++) prime[i]=1; //Reason of i<n : Question says prime numbers must be lesser than n

        for(int i=2;i*i<=n;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<=n;j+=i) // Increment is done like 2*2=4 then 4+2=6 and so on
                {
                    prime[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(prime[i]==1) count++;
        }
        return count;

    }
};