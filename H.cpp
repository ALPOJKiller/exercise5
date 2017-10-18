#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s;
	unsigned case_count = 0;
	while(getline(cin,s)) {
		istringstream ss(s);
		string temp;
		vector<string> v;
		while(ss >> temp) {
			v.push_back(temp);
		}
		cout << "Case " << ++ case_count << ":";
		if(v.size() == 0)
				cout << ' ';
		for(auto it = v.rbegin();it != v.rend();++it) {
			cout << ' ' << *it;
		}
		cout << endl;
	}
    return 0;
}
