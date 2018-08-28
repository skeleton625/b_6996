#include <iostream>
using namespace std;

int t, c;
int a1[26], a2[26];
char n1[101], n2[101];
int main() {
	cin >> t;
	while (t--) {
		cin >> n1 >> n2;
		for (int i = 0; n1[i]; i++) a1[n1[i] - 'a']++;
		for (int i = 0; n2[i]; i++) a2[n2[i] - 'a']++;
		for (int i = 0; i < 26; i++) {
			if (a1[i] == a2[i]) c++;
			a1[i] = a2[i] = 0;
		}
		cout << n1 << " & " << n2;
		if (c == 26) cout << " are anagrams." << endl;
		else cout << " are NOT anagrams." << endl;
		c = 0;
	}
	return 0;
}