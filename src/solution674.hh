#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution674 {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int count_max = 1;
        int n = nums.size();
        if(n==0){
            return 0;
        }
        bool check = false;
        for(int i=0; i<n-1; i++){
            if(nums[i] < nums[i+1]){
                check = true;
                count++;
            }else{
                check = false;
                count = 1;
            }
            if(check){
                count_max = max(count, count_max);
            }
        }
        return count_max;
    }
};