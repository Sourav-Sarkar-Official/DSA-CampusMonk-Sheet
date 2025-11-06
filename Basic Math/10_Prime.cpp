#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPrime(int n) {
        // Numbers less than or equal to 1 are not prime
        if(n<=1) return false;
        for(int i=2;i*i<=n;i++)
        {
            //If we find any number i that divides n exactly, n is not a prime number
            if(n % i == 0) 
            {
                return false; //Not prime
            }
        }
        // If the loop finishes without returning false, n is prime
            return true; //Prime 
    }
};
