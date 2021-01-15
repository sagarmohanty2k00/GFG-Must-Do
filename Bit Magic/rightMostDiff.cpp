// Easy Accuracy: 59.13% Submissions: 10512 Points: 2
// Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers.

// Example 1: 

// Input: M = 11, N = 9
// Output: 2
// Explanation: Binary representation of the given 
// numbers are: 1011 and 1001, 
// 2nd bit from right is different.
// Example 2:

// Input: M = 52, N = 4
// Output: 5
// Explanation: Binary representation of the given 
// numbers are: 110100â€¬ and 0100, 
// 5th-bit from right is different.
// User Task:
// The task is to complete the function posOfRightMostDiffBit() which takes two arguments m and n and returns the position of first different bits in m and n. If both m and n are the same then return -1 in this case.

// Expected Time Complexity: O(max(log m, log n)).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= M <= 103
// 1 <= N <= 103



#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int m; cin >> m;
	int n; cin >> n;

	int ans = 0;
	int v = n^m;

	while(v != 0){
		ans++;
		if(v&1){
			break;
		}

		v = v >> 1;
	}

	cout << ans;
}



