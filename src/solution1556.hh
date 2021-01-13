#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1556 {
public:
        string thousandSeparator(int n) {
        char str[100];
        sprintf(str,"%d", n);
        char strCopy[100];
        int j = strlen(str);
        int k = 0;
        for(int i=0; str[i]!='\0';i++){
            if((j-i) % 3 == 0 && i!=0){
                strCopy[k] = '.';
                k++;
            }
            
            strCopy[k] = str[i];
            k++;

        }
        strCopy[k] = '\0';
        printf("oldString %s\n", str);
        string rlt(strCopy);
        return rlt;
    } 
};