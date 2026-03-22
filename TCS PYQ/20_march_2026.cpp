/*
Problem: Gym Membership Cost Calculator
A gym offers membership plans for fixed durations with the following prices:
Plans are like 1 month = 2000, 3 months = 5000, 6 months = 8000, 9 months = 11000, 12 months = 12000. We had to take input n (months) and print cost.

Example:

Input: 6

Output: 8000

Input: 2

Output: Error
*/

/*
Brute Force Approach: Using if-else statements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n == 1) cout << 2000;
    else if(n == 3) cout << 5000;
    else if(n == 6) cout << 8000;
    else if(n == 9) cout << 11000;
    else if(n == 12) cout << 12000;
    else cout << "Error";
    return 0;
}
*/

/*
Optimal Approach: Using switch statement
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch(n)
    {
        case 1:  cout << 2000; break;
        case 3:  cout << 5000; break;
        case 6:  cout << 8000; break;
        case 9:  cout << 11000; break;
        case 12: cout << 12000; break;
        default: cout << "Error";
    }

    return 0;
}
*/
