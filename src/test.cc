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
void TEST::solutionOne(){
    SolutionOne s;
    std::vector<int> rlt = s.twoSum(s.nums, s.target);
    std::cout << rlt[0] << " " <<rlt[1] << std::endl;
    // std 0 1
}
