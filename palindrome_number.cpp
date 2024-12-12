#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        long reverseNum = 0;
        int num = x;
        while(num> 0){
            reverseNum = (reverseNum * 10) + (num% 10);
            num/= 10;
        }

        cout << "rev" << reverseNum << endl;
        cout << "act" << x << endl;
        if(reverseNum == x){
            return true;
        } else {
            return false;
        }
        
    }
};

int main(){
    Solution sol;
    int number = 221;
    bool result = sol.isPalindrome(number);
    
    cout << "result: " << result << endl;
}