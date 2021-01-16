#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1672 {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> tmp(n);
        tmp[0] = nums[0];
        for(int i=1; i<n; i++){
            tmp[i] += tmp[i-1] + nums[i];
        }
        return tmp;
    }
};