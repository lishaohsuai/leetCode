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
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
       
        int n = accounts.size();
        int m = accounts[0].size();
        for(int i=0; i<n; i++){
            int aWealth = 0;
            for(int j=0; j<m; j++){
                aWealth += accounts[i][j];
            }
            if(aWealth > maxWealth){
                maxWealth = aWealth;
            }
        }
        return maxWealth;
    }
};