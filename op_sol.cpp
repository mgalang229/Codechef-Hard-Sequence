#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> v(n, 0);
		// create a vector that will store the index of every number found
		vector<int> store(n, -1);
		// set the first element to 0
		v[0] = 0;
		for (int i = 0; i + 1 < n; i++) {
			// check if the current element already has an index
			if (store[v[i]] == -1) {
				// if it doesn't exist yet previously then set the next value to 0
				v[i + 1] = 0;
			} else {
				// otherwise, store the difference of 'i' and the index of its previous
				// occurrence to the next value
				v[i + 1] = i - store[v[i]];
			}
			// store the index of the current element
			store[v[i]] = i;
		}
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// if the current element matches the last element, then it will be true (1)
			// then, add 1 (true) to the counter
			cnt += (v[i] == v[n - 1]);
		}
		cout << cnt << '\n';
	}
	return 0;
}
