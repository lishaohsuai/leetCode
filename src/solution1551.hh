#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1551 {
public:
    int minOperations(int n) {
        return n * n / 4;
    }
};