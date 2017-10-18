#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s1,s2;
	unsigned case_count = 0;
	while(getline(cin,s1)) {
		getline(cin,s2);
		auto result = s2.find(s1);
		cout << "Case " << ++case_count << ": ";
		if(result == string::npos) 
				cout << -1;
		else
				cout << result;
		cout<< endl;
	}
    return 0;
}
