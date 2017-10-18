#include <iostream>
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
		unsigned count = 0;
		while(ss >> temp) {
			++ count;
		}
		cout << "Case " << ++ case_count << ": " << count << endl;
	}
    return 0;
}
