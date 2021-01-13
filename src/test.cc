/*
 * @Author: your name
 * @Date: 2020-11-19 16:33:40
 * @LastEditTime: 2020-11-19 16:37:05
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/test.cc
 */
#include "test.hh"
#include "solutionOne.hh"
#include "solution1605.hh"
#include "solution1573.hh"
#include "solution1556.hh"
#include "solution1406.hh"
#include "solution1405.hh"
using namespace std;
namespace TEST{
    void solutionOne(){
        SolutionOne s;
        vector<int> rlt = s.twoSum(s.nums, s.target);
        cout << rlt[0] << " " <<rlt[1] << endl;
        // std 0 1
    }

    void solutionFindValidMatrixGivenRowandColumnSums(){
        Solution1605 s;
        vector<int> rowSum = {5,7,10};
        vector<int> colSum = {8,6,8};
        vector<vector<int>> rlt = s.restoreMatrix(rowSum, colSum);
        for(int i=0; i<rlt.size(); i++){
            for(int j=0; j<rlt[0].size(); j++){
                if(j == 0)
                    cout << rlt[i][j];
                else
                    cout << "," <<rlt[i][j];
            }
            cout << endl;
        }
    }

    void solutionNumberOfWaysToSplitaString(){
        Solution1573 s;
        string ss = "010010000000001000";
        cout << s.numWays(ss);
    }

    void solutionThousandSeparator(){
        Solution1556 s;
        int n = 987;
        cout << s.thousandSeparator(n) << endl;
    }

    void solutionStoneGame3(){
        Solution1406 s;
        vector<int> values = {1,2,3,7};
        cout << s.stoneGameIII(values) << "\n";
    
    }

    void solutionLongestHappyString(){
        Solution1405 s;
        cout << s.longestDiverseString(1,1,7) << "\n";
    }
};
