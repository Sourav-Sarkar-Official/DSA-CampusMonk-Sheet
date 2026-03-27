/*
Problem - 1 : Maximum Product Subset

You are given an array of N integers which may include positive numbers, negative numbers, and zeros.

Your task is to select any subset of elements (not necessarily contiguous) such that the product of the selected elements is maximized.

Return the maximum possible product.

Important Rules
You can choose any subset of elements.
The subset must contain at least one element.
Elements do not need to be contiguous.
The array may contain:
positive integers
negative integers
zeros
*/

/*Brute Force Approach*/

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Single element case
    if (n == 1) {
        cout << arr[0];
        return 0;
    }

    long long mul = 1;
    int negCount = 0, zeroCount = 0;
    int maxNegative = INT_MIN; // negative closest to zero

    // First pass: count negatives, zeros, and find negative closest to zero
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negCount++;
            maxNegative = max(maxNegative, arr[i]);
        } else if (arr[i] == 0) {
            zeroCount++;
        }
    }

    int taken = 0;
    bool removed = false;

    // Second pass: build product
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) continue;

        // If odd number of negatives, skip only one negative closest to zero
        if (negCount % 2 != 0 && arr[i] == maxNegative && !removed) {
            removed = true;
            continue;
        }

        mul *= arr[i];
        taken++;
    }

    // If nothing was taken, answer should be 0
    // Example: [0, -5] or [0, 0, 0]
    if (taken == 0) {
        cout << 0;
    } else {
        cout << mul;
    }

    return 0;
}
*/