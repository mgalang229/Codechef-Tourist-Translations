#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int length_of_conversation;
	string m;
	cin >> length_of_conversation >> m;
	// store the value of 'm' in 'alphabet'
	string alphabet = m;
	// afterwards, sort 'alphabet' in increasing order (lexicographical order)
	sort(alphabet.begin(), alphabet.end());
	for (int i = 0; i < length_of_conversation; i++) {
		string sentence;
		cin >> sentence;
		string ans = "";
		for (int j = 0; j < (int) sentence.size(); j++) {
			// create 'index' variable to store the index of the matched alphabet of 'sentence[j]'
			int index = -1;
			for (int k = 0; k < (int) alphabet.size(); k++) {
				// change the current character being iterated upon to lowercase
				// before comparing it to the letters in the 'alphabet' string
				if (tolower(sentence[j]) == alphabet[k]) {
					// if match is found, then store it in 'index', and break the loop
					index = k;
					break;
				}
			}
			if (sentence[j] == '_') {
				// if the current character is an underscore('_'), then concatenate a space
				ans += " ";
			} else if (index == -1) {
				// if the current character is not found the in 'alphabet' string,
				// then concatenate the character itself
				ans += sentence[j];
			} else {
				// otherwise, check first if the current character is a lowercase and if it's
				// true, then concatenate the character from the 'm' with the 'index' variable
				// as its index. However, if it's a capital letter, then convert it first
				// to capital form before concatenating it
				ans += (sentence[j] >= 'a' && sentence[j] <= 'z' ? m[index] : toupper(m[index]));
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
