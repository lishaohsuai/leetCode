#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1405 {
public:
    string longestDiverseString(int a, int b, int c) {
        vector<pair<int, char>> v;
        v.push_back(make_pair(a, 'a'));
        v.push_back(make_pair(b, 'b'));
        v.push_back(make_pair(c, 'c'));
        string ans;
        while(v[0].first || v[1].first || v[2].first) {
            sort(v.rbegin(), v.rend());
            if(ans.empty() || ans.back()!=v[0].second) {
                if(v[0].first-- > 0) ans = ans + v[0].second;
                if(v[0].first-- > 0) ans = ans + v[0].second;
            }
            else{
                if(v[1].first-- > 0) ans = ans + v[1].second;
                else break;
            }
        }
        return ans;
    }
};