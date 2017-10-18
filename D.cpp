#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    unsigned case_count = 0;
    while(getline(cin,s)) {
        for(auto it=s.begin();it < s.end() - 1;++it) {
            if(*it < 0 || *it > 127) {
                swap(*it,*(it+1));
                ++ it;
            }
        }
        reverse(s.begin(),s.end());
        cout << "Case "<< ++case_count << ": \"" << s << "\"" << endl;

    }
    return 0;
}

