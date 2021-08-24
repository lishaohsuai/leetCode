#include <iostream>
#include <ctime>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <limits>
#include <stack>
#include <list>
#include <queue>

using LL = long long;
using ULL = unsigned long long;
//using PII = pair<int,int>;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
using namespace std;
// 大于等于k的最小整数

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回Sn的第k位字符
     * @param n int整型 Sn的n
     * @param k int整型 需要返回的字符下标位
     * @return char字符型
     */
    char findKthBit(int n, int k) {
        // 首先计算最少要模拟的次数
        int a1 = 1;
        int cnt = 0;
        while(a1 < k) {
            a1 = a1 + a1 + 1;
            cnt++;
        }
        string sn;
        string s1 = "a";
        int count = 0;
        while(cnt--){
            count++;
            s1 = s1 + (char)('a' + count) + myReVerse(s1);
            
            cout << "[ss] " << s1 << endl; 
        }
        return s1[k-1];
    }
    string myReVerse(string &t) {
        string r;
        for(auto it:t) {
            r += invert(it);
        }
        reverse(r.begin(), r.end());
        return r;
    }
    char invert(char &t) {
        return 'z' - t + 'a';
    }
};

int main() {
    Solution s;
    cout << s.findKthBit(4, 11) << endl;
}