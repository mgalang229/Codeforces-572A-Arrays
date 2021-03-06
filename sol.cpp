#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int na, nb;
	cin >> na >> nb;
	int k, m;
	cin >> k >> m;
	vector<int> a(na);
	for (int i = 0; i < na; i++) {
		cin >> a[i];
	}
	vector<int> b(nb);
	for (int i = 0; i < nb; i++) {
		cin >> b[i];
	}
	// check if the maximum within the first 'k' numbers in array 'a' is STRICTLY
	// less than the minimum number within the last 'm' numbers in array 'b'
	cout << (a[k - 1] < b[nb - m] ? "YES" : "NO") << '\n';
	return 0;
}
