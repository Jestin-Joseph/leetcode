#include <iostream>
#include <regex>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        regex b(p);
        // bool a = regex_match(s, b);

        // cout << "a: " << a << endl;
        return regex_match(s, b);;
    }
};

int main(){
    Solution sol;

    string s = "ab";
    string p = ".*";

    bool result = sol.isMatch(s, p);
    cout << "result: " << result << endl;
}