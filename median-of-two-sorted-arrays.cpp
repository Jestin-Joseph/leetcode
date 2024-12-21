#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        vector <int> combined;
        int i = 0;
        int len = max(nums1.size(), nums2.size());

        while(i < len){
            if(i < nums1.size()){
                combined.push_back(nums1[i]);
            }

            if(i < nums2.size()){
                combined.push_back(nums2[i]);
            }

            i++;
        }

        sort(combined.begin(), combined.end());

        int n = combined.size();
        double median;
        if(n%2 == 1){
            median = combined[n/2];
        } else {
            median = (static_cast<double>(combined[n / 2 - 1]) + static_cast<double>(combined[n / 2])) / 2.0;
        }
        return median;
    }
};

int main()
{
    Solution sol;

    vector<int> a = {1, 2};
    vector<int> b = {3, 4};
    // vector<int> a = {2,2,4,4};
    // vector<int> b = {2,2,2,4,4};
    double result = sol.findMedianSortedArrays(a, b);

    cout << "result: " << result << endl;
}