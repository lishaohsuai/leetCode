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
    string stoneGameIII(vector<int>& a) {
        int n = a.size();
        // 主要用了倒序的思想，因为正序对于求解的不法确定性太多了
        // 定义f[n] 表示在第n次开始拿先手可以比后手多拿多少分
        vector<int> f;
        f.resize(n+1);
        f[n] = 0; // 原本长度是n-1的长度，扩充一个的长度表示在最最开始先手和后手持平当然你也可以
                  // 扩充三堆的样子，也就是后面判断条件的该改变
        for(int i=n-1; i>=0; i--){
            f[i] = -1e9;
            int s = 0;
            for(int j = i; j<(i+3) && j < n; j++){
                s += a[j];
                f[i] = max(f[i], s - f[j+1]);
            }
        }
        if(f[0] > 0){
            return "Alice";
        }else if(f[0] == 0){
            return "Tie";
        }else{
            return "Bob";
        }
    }
};