#include <iostream>
using namespace std;
int factorial(int n);
int main(){
	int n;
	cin >> n;
	int fact = factorial(n);
	cout << fact; 
}

int factorial(int n)
{
	int ans = 1;
	for(int i=n;i>=1;i--)
	{
		ans *= i;
	}
	return ans;
}