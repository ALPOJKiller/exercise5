#include <iostream>
#include <string>
using namespace std;
string str[16] = {
		"□□□□","□□□■", "□□■□", "□□■■",
		"□■□□","□■□■", "□■■□", "□■■■",
        "■□□□","■□□■", "■□■□", "■□■■",
        "■■□□","■■□■", "■■■□", "■■■■"
};
int main() {
		unsigned case_count = 0;
		unsigned input = 0;
		for(unsigned i = 0;cin >> hex >> input; ++i) {
			if(i % 32 == 0) {
				cout << "Case " << ++ case_count <<":\n";
			}
			cout << str[input/16] << str[input%16];
			if(i % 2)
					cout << endl;
		}
		return 0;
}
