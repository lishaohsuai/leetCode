/*
 * @Author: your name
 * @Date: 2020-11-19 15:09:13
 * @LastEditTime: 2020-11-19 16:02:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/solution.cc
 */
#include "solution.hh"
/**
 * @description: read single data
 * @param testExampleFile filename
 * @return read success??
 */
bool Solution::readSingleData(std::string testExampleFile){
    std::ifstream iff = std::ifstream(testExampleFile.c_str(), std::ios::in);
    if(!iff.good()){
        std::cout << "[ERROR] could not open file " << testExampleFile << " for reading!" << std::endl;
        iff.close();
        return false;
    }
    std::cout << "[Congratulation] best us!" << std::endl;
    iff.close();
    return true;
}

/**
 * @description: write single data
 * @param testExampleAnswerFile filename
 * @return write success??
 */
bool Solution::writeSingleData(std::string testExampleAnswerFile){
    std::ofstream off = std::ofstream(testExampleAnswerFile.c_str(), std::ios::out);
    if(!off.good()){
        std::cout << "[ERROR] Could not open file " << testExampleAnswerFile << " for write! " << std::endl;
        off.close();
        return false;
    }
    off << "[Congratulation] best us" << std::endl;
    off.close();
    return true;
}


/**
 * @description: use file check to check result and test
 * @param {*}
 * @return {*}
 */
bool Solution::checkSingleResultData(std::string stdResult, std::string testResult){
    std::ifstream isff = std::ifstream(stdResult.c_str(), std::ios::in);
    if(!isff.good()){
        std::cout << "[ERROR] could not open file " << stdResult << " for reading!" << std::endl;
        isff.close();
        return false;
    }
    std::ifstream itff = std::ifstream(testResult.c_str(), std::ios::in);
    if(!itff.good()){
        std::cout << "[ERROR] could not open file " << testResult << " for reading!" << std::endl;
        itff.close();
        return false;
    }
    bool check = true;
    while(check){
        std::string stdString;
        std::string testString;
        bool readCheckStd = UTILS::getStrLine(isff, stdString);
        bool readCheckTest = UTILS::getStrLine(itff, testString);
        if(readCheckStd!=readCheckTest) {
            check = false;
            break;
        }
        if(stdString != testString){
            check = false;
            break;
        }
        if(readCheckStd == false && readCheckTest == false){
            break;
        }
    }
    std::cout << "[Congratulation] best us!" << std::endl;
    isff.close();
    itff.close();
    return true;
}