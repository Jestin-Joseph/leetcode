#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string res = "11";
        for(int i = 3; i <= n; i++){
            string nexRes = "";
            
            res = res+"&";
            int count = 1;

            for(int j = 1; j < res.length(); j++){
                if(res[j] != res[j-1]){
                    nexRes = nexRes + to_string(count); // add the counter to temp
                    nexRes = nexRes + res[j-1]; // add the data of the counter
                    count = 1;
                } else {
                    count++;
                }
            }

            res = nexRes;
        }

        
        return res;
    }
};

int main() {
    Solution sol;

    int n = 4;
    string result = sol.countAndSay(n);

    cout << "result: " << result << endl;

}