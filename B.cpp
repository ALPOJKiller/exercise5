#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	unsigned n, i = 1;
	while(cin >> n)
	{
		getline(cin,s);
		while(n--)
		{
			getline(cin, s);
			cout << "Case " << i++ << ": ";
			reverse(s.begin(), s.end());
			cout << s << endl;
		}
	}
	return 0;
}
