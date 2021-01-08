#include <vector>
#include <queue>
#include <string>
using namespace std;
#define ll long long
#define mod (long long)(1e9+7)
class Solution1573 {
public:
    int numWays(string s) {
        // step 1. count the number of the 1
        long int numberOne = 0;
        for(long int i=0; i<s.length(); i++){
            if(s[i] == '1'){
                numberOne++;
            }
        }
        // step 2. check the numberOne can be subdivided 3?
        if(numberOne % 3 != 0){
            return 0;
        }
        if(numberOne == 0){
            double n = s.length() - 1;
            return (long int)((n / 2) * (n-1))  %mod  ;
        }
        long int onePiece = numberOne / 3;
        // step 3. get the numberZero between first piece and third piece
        long int numberZero1 = 0; long int numberZero2 = 0;
        long int index = 0;
        long int status = -1;
        for(long int i=0; i<s.length(); i++){
            if(index == onePiece){
                status = 0;
            }
            if(status == -1){
                if(s[i] == '1'){
                    index++;
                }
            }
            if(status == 0){
                if(s[i] == '1'){
                    status = 1;
                    break;
                }else if(s[i] == '0'){
                    numberZero1++;
                }
            }
        }
        index = 0;
        status = -1;
        for(long int i=s.length() - 1; i>=0; i--){
            if(index == onePiece){
                status = 0;
            }
            if(status == -1){
                if(s[i] == '1'){
                    index++;
                }
            }
            if(status == 0){
                if(s[i] == '1'){
                    status = 1;
                    break;
                }else if(s[i] == '0'){
                    numberZero2++;
                }
            }
        }
        // step 4. get the number
        return ((numberZero1+1) %mod * (numberZero2+1) %mod)%mod; 
    }
};