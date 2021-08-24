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

const int maxn = 1e5 + 10;

int main() {
    vector<int> v;
    int m;
    
    while(cin >> m) {
        v.push_back(m);
    }
    if(v.size() == 0) {
        cout << 0 << endl;
        return 0;
    }else if(v.size() == 1) {
        cout << 1 << endl;
        return 0;
    }else if(v.size() == 2) {
        if(v[0] == v[1]) cout << 2 << endl;
        else cout << 3 << endl;
        return 0;
    }
    vector<int> v1(v.size(), 0);
    int cnt = 0;
    for(int i=0; i < v.size(); i++) {
        if(i == 0) {
            if(v[0] < v[v.size() - 1] && v[0] < v[1]){
                v1[0] = 1;
                cnt++;
            }
        }else if(i == v.size() - 1) {
            if(v[v.size() - 1] < v[0] && v[v.size() - 1] < v[v.size() - 2]) {
                v1[v.size() - 1] = 1;
                cnt++;
            }
        } else{
            if(v[i] < v[i-1] && v[i] < v[i+1]) {
                v1[i] = 1;
                cnt++;
            }
        }
    }
    if(cnt == 0) { // 没有出现谷点
        cout << v.size() << endl;
    }else{
        
    }

    //cout << ans << endl;
    // cout  << endl;
}