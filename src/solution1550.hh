#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1406 {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        for(int i=0; i < n - 3; i++){
            if((arr[i] & 1) & (arr[i+1] & 1) & (arr[i+2] & 1)){
                return true;
            }
        }
        return false;
    }
};