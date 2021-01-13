#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
#include <stack>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1406 {
public:
    int minInsertions(string s) {
        stack<char> leftBrackets;
        int n = s.size();
        int count = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                leftBrackets.push(s[i]);
            }
            int rightBracketsNum = 0;
            if(s[i] == ')'){
                if((i+1) < n && s[i+1] == ')'){
                    if(leftBrackets.size()){
                        leftBrackets.pop();
                    }else{
                        count++;
                    }
                    i++;
                }else{
                    count++;
                    if(leftBrackets.size()){
                        leftBrackets.pop();
                    }else{
                        count++;
                    }
                }
            }
        }
        count += leftBrackets.size() * 2;
        return count;
    }
};