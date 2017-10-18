#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
vector<string> ignore_strings{"THE", "A", "AN", "OF", "FOR", "AND"};
int main() {
  string s;
  unsigned case_count = 0;
  while (getline(cin, s)) {
    for_each(s.begin(), s.end(), [](char &ch) {
      if (ch == '-')
        ch = ' ';
    });
    istringstream ss(s);
    string temp;
    vector<string> v;
    while (ss >> temp) {
      string caplized = temp;
      for_each(caplized.begin(), caplized.end(), [](char &ch) {
        if (islower(ch))
          ch = toupper(ch);
      });
      if (find(ignore_strings.begin(), ignore_strings.end(), caplized) ==
          ignore_strings.end())
        v.push_back(temp);
    }
    cout << "Case " << ++case_count << ": ";
    for (auto s : v) {
      cout << s.front();
    }
    cout << endl;
  }
  return 0;
}
