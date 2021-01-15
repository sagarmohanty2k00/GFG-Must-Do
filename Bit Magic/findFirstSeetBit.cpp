// Easy Accuracy: 52.49% Submissions: 14680 Points: 2
// Given an integer an N. The task is to return the position of first set bit found from the right side in the binary representation of the number.
// Note: If there is no set bit in the integer N, then return 0 from the function.  

// Example 1:

// Input: N = 18
// Output: 2
// Explanation: Binary representation of 
// 18 is 010010,the first set bit from the 
// right side is at position 2.
// Example 2:

// Input: N = 12 
// Output: 3 
// Explanation: Binary representation 
// of  12 is 1100, the first set bit 
// from the right side is at position 3.
// Your Task:
// The task is to complete the function getFirstSetBit() that takes an integer n as a parameter and returns the position of first set bit.

// Expected Time Complexity: O(log N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 0 <= N <= 106


#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;


int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	int ans = 0;
	int v = n;
	while(v != 0){
		ans++;
		if(v&1){
			break;
		}
	}

	cout << ans;
}



