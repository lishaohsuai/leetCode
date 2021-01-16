#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
#include <map>
#include <unordered_map>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
#define minNumber (-1e9)

class Solution1535 {
public:
    int getWinner(vector<int>& arr, int k) {
        int i=0, t = 0;
        while(t < k && i < arr.size() - 1){
            if(arr[i] > arr[i+1]){
                arr[i+1] = arr[i];
                ++t;
            }else{
                t = 1;
            }
            ++i;
        }
        return arr[i];
    }
};