#include <bits/stdc++.h>
using namespace std;

int main() {
	// if A appears even number of times -> put half at front, half at back
	// if B appears even number of times -> put half at front, half at back
	vector<int> freq(26);
	string s;
	cin >> s;
	int n = s.length();
	for (char c : s) {
		freq[c-'A']++; // we subtract ASCII values
		// so we change char A..Z into value 0..25
	}
	string half;
	char mid = '?';
	for (int c = 0; c < 26; c++) {
		if (freq[c] % 2 == 1) {
			if (n % 2 == 0 || mid != '?') {
				cout << "NO SOLUTION\n";
				return 0;
			}
			else {
				mid = 'A' + c;
			}
			freq[c]--;
		}
		half += string(freq[c] / 2, 'A' + c);
	}
	cout << half;
	if (mid != '?') {
		cout << mid;
	}
	reverse(half.begin(), half.end());
	cout << half << "\n";
}