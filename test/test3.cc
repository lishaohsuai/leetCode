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

// class Solution {
// public:
//     /**
//      * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//      *
//      * 计算最小航行费用
//      * @param input int整型vector<vector<>> 二维网格
//      * @return int整型
//      */
//     const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
//     int minMoney = numeric_limits<int>::max();
//     int n, m;
//     int minSailCost(vector<vector<int> >& v) {
//         v[0][0] = 2;
//         n = v.size();
//         m = v[0].size();
//         dfs(v, 0, 0, 0);
//         if(minMoney != numeric_limits<int>::max()){
//             return minMoney;
//         }
//         return -1;
//     }
//     void dfs(vector<vector<int> >& v, int x, int y, int money) {
//         if(x == n-1 && y == m-1) {
//             minMoney = min(minMoney, money);
//         }
//         for(int i=0; i<4; i++){
//             int nx = x + dir[i][0];
//             int ny = y + dir[i][1];
//             if(nx < 0 || nx >= n || ny < 0 || ny >= m || v[nx][ny] == 2){
//                 continue;
//             }
//             int oldV = v[nx][ny];
//             int t = v[nx][ny] == 0 ? 2 : 1;
//             v[nx][ny] = 2;
//             dfs(v, nx, ny, money + t);
//             v[nx][ny] = oldV;
//         }
//     }
// };

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 计算最小航行费用
     * @param input int整型vector<vector<>> 二维网格
     * @return int整型
     */
    const int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    int minMoney = numeric_limits<int>::max();
    int minSailCost(vector<vector<int> >& v) {
        v[0][0] = 2;
        dfs(v, 0, 0, 0);
        if(minMoney != numeric_limits<int>::max()){
            return minMoney;
        }
        return -1;
    }
    void dfs(vector<vector<int> >& v, int x, int y, int money) {
        int n = v.size();
        int m = v[0].size();
        if(x == n-1 && y == m-1) {
                minMoney = min(minMoney, money);
        }
        for(int i=0; i<4; i++){
            if((x+dir[i][0]) < 0 || (x+dir[i][0]) >= n || (y+dir[i][1]) < 0 || (y + dir[i][1]) >= m || 
            v[x+dir[i][0]][y+dir[i][1]] == 2){
                continue;
            }
//             int nx = x + dir[i][0];
//             int ny = y + dir[i][1];
            x += dir[i][0];
            y += dir[i][1];
            int tmp = 0;
            int oldV = 0;
            if(v[x][y] == 0){
                tmp = 2;
                oldV = 0;
            }else if(v[x][y] == 1) {
                tmp = 1;
                oldV = 1;
            } else{
                cout << "ERROR\n"; 
            }
            v[x][y] = 2;
            dfs(v, x, y, money + tmp);

            v[x][y] = oldV;
            x -= dir[i][0];
            y -= dir[i][1];
        }
    }
};
int main() {
    Solution s;
    vector<vector<int>> v;
    v.resize(4);
    //v.resize(5);
    // [[1,1,1,1,0],[0,1,0,1,0],[1,1,2,1,1],[0,2,0,0,1]]
    v[0] = {1,1,1,1,0};
    v[1] = {0,1,0,1,0};
    v[2] = {1,1,2,1,1};
    v[3] = {0,2,0,0,1};
    cout << s.minSailCost(v) << endl;
}