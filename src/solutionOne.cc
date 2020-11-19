/*
 * @Author: your name
 * @Date: 2020-11-19 16:08:37
 * @LastEditTime: 2020-11-19 16:20:48
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/easy/twonumbersum/solutionOne.cc
 */
#include "solutionOne.hh"
SolutionOne::SolutionOne(){
    nums = {2, 7, 11, 15};
    target = 9;
}

std::vector<int> SolutionOne::twoSum(std::vector<int>& nums, int target){
    std::vector<int> rlt;

    for(int i=0; i<nums.size(); i++){
        for(int j=0; j<nums.size(); j++){
            if(i!=j){
                if(nums[i] + nums[j] == target){
                    rlt.push_back(i);
                    rlt.push_back(j);    
                    goto TAG;
                }
            }
        }
    }
TAG:
    return rlt;
}