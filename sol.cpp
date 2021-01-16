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
		// view the image in this repository for better understanding
		// create a vector with size n + 1, because we will use 1-based index
		// fill it with zeroes
		vector<int> v(n + 1, 0);
		// run a loop until n - 1 because the next the value of the sequence
		// will be decided from the current value and conditions
		for (int i = 1; i <= n - 1; i++) {
			// create an 'id' variable to store the index of the latest 
			// occurrence of the current value
			int id = 0;
			for (int j = 1; j <= i - 1; j++) {
				// if there is an element that matches the current element,
				// store the index until the loop ends
				// doing this method will surely take the latest occurrence of the
				// current element (assuming that it exists)
				if (v[i] == v[j]) {
					id = j;
				}
			}
			if (id == 0) {
				// if there is no other occurrence of the current element,
				// then set the next value to zero
				v[i + 1] = 0;
			} else {
				// otherwise, assign the difference of the current element's index and the
				// index of its previous occurrence to next valuee
				v[i + 1] = i - id;
			}
		}
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			// count the number of occurrences of the last element including itself
			if (v[n] == v[i]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
