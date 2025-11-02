#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void print_divisors(int n)
    {
        vector<int> div;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " ";

                if ((n / i) != i)
                    div.push_back((n / i));
            }
        }
        sort(div.begin(), div.end());
        for (int d : div)
            cout << d << " ";
    }
};