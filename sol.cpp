#include <bits/stdc++.h>
using namespace std;

/*

20 5 7 3

7 3 3 3 3 (total: 19)
= 1

binary search

*/

bool check(int x, int k, int n, int a, int b) {
	return (a * 1LL * x + b * 1LL * (n - x)) < k;
}

void test_case(int tc) {
	int k, n, a, b;
	cin >> k >> n >> a >> b;
	int low = 0, high = n, ans = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
		if (check(mid, k, n, a, b)) {
			ans = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T = 1;
	cin >> T;
	for (int tc = 1; tc <= T; tc++) {
		test_case(tc);
	}
}
