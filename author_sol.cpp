#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	string m;
	cin >> t >> m;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < (int) s.size(); j++) {
			if (s[j] == '_') {
				// if the current character is an underscore, then change it to space
				s[j] = ' ';
			} else if (islower(s[j])) {
				// if it's a lowercase character, then find the equivalent by
				// subtracting the integer equivalent of it with 'a'
				s[j] = m[s[j] - 'a'];
			} else if (isupper(s[j])) {
				// if it's an uppercase character, then find the equivalent by
				// subtracting the integer equivalent of it with 'A'
				s[j] = toupper(m[s[j] - 'A']);
			}
			// ignore the other punctuation symbols
		}
		cout << s << '\n';
	}
	return 0;
}
