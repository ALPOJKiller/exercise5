#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	unsigned n;
	unsigned case_count = 0;
	while(cin >> n) {
		string s;
		getline(cin,s);
		for(size_t i=0;i<n;++i) {
			getline(cin,s);
			string reversed(s);
			reverse(reversed.begin(),reversed.end());
			cout << "Case " << ++case_count <<": " << ( s==reversed ? "Yes" : "No") << endl;
		}
	}
    return 0;
}
