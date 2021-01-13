#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1404 {
public:
    int numSteps(string s) {
        int n = s.size();
        int count = 0;
        while(!(s.size() == 1 && s[0]=='1')){
            if(s[s.size()-1] == '1'){
                // 模拟加法
                for(int i = s.size() - 1; i>=0; i--){
                    if(s[i] == '1'){
                        s[i] = '0';
                        if(i == 0){
                            s.insert(0, 1, '1');
                        }
                    }else{
                        s[i] = '1';
                        break;
                    }
                }
            }else{
                // 模拟除法
                s.pop_back();
            }
            count++;
        }
        return count;
    }
};