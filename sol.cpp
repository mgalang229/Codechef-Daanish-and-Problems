#include <bits/stdc++.h>

using namespace std;

long long max(long long a, long long b) {
	return (a > b ? a : b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		vector<long long> a(10);
		for (int i = 0; i < 10; i++) {
			cin >> a[i];
		}
		long long k;
		cin >> k;
		// solution: subtract 'k' to values in index 'i' if k > 0
		// start from the end of the list
		for (int i = 9; i >= 0; i--) {
			if (k > 0) {
				long long temp = a[i];
				a[i] = max(0, a[i] - k);
				k -= temp;
			}
		}
		int pos = 0;
		// print the index of the most difficult problem that still has a value
		for (int i = 9; i >= 0; i--) {
			if (a[i] > 0) {
				pos = i + 1;
				break;
			}
		}
		cout << pos << '\n';
	}
	return 0;
}
