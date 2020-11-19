/*
 * @Author: your name
 * @Date: 2020-11-19 15:47:48
 * @LastEditTime: 2020-11-19 15:54:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/utils.hh
 */
#ifndef __UTILS_HH__
#define __UTILS_HH__
#include <string>
#include <fstream>
#include <iostream>
namespace UTILS{
    void trimString(std::string &str);
    bool getStrLine(std::istream &ifs, std::string &str);
}
#endif