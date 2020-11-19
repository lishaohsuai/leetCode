/*
 * @Author: your name
 * @Date: 2020-11-19 16:08:30
 * @LastEditTime: 2020-11-19 16:12:56
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/easy/twonumbersum/solutionOne.hh
 */
#include "solution.hh"
#include "vector"
class SolutionOne: public Solution {
public:
    SolutionOne();
    std::vector<int> twoSum(std::vector<int>& nums, int target);
public:
    std::vector<int> nums;
    int target;
};