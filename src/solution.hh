/*
 * @Author: your name
 * @Date: 2020-11-19 15:09:07
 * @LastEditTime: 2020-11-19 16:02:13
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/solution.hh
 */
#ifndef __SOLUTION_HH__
#define __SOLUTION_HH__
#include <string>
#include <fstream>
#include <iostream>
#include "utils.hh"
class Solution{
public:
    virtual bool readSingleData(std::string testExampleFile);
    virtual bool writeSingleData(std::string testExampleAnswerFile);
    virtual bool checkSingleResultData(std::string stdResult, std::string testResult);
};
#endif
