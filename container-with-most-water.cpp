#include <vector>
#include <unordered_set>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int front = 0;
        int back = height.size() - 1;
        int area;
        
        while (front != back){
            int l = min(height[front], height[back]);
            int b = abs(front - back);

            int ar = l * b;

            if(ar > area){
                area = ar;
            }
            
            if(height[front] > height[back]){
                back--;
            } else {
                front++;
            }

        }

        return area;
    }
};


int main() {
    Solution sol;

//    vector<int> height = {1,8,6,2,5,4,8,3,7};
   vector<int> height = {1,1};

    

    int result = sol.maxArea(height);

    cout << "result: " << result << endl;

    return 0;
}