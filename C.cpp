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
		for(int i=0;i<n;++i) {
			getline(cin,s);
			cout << "Case "<<++case_count << ": \"" << s;
			auto it = s.rbegin();
			if(s.size() % 2)
					++it;
			for(;it != s.rend(); ++it) {
				cout << *it;
			}
			cout<< '\"' << endl;
		}
	}
    return 0;
}
