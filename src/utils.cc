/*
 * @Author: your name
 * @Date: 2020-11-19 15:47:54
 * @LastEditTime: 2020-11-19 15:53:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /cpp/src/utils.cc
 */
#include "utils.hh"

/**
 * @description: delete the space before the string or after the string
 * @param str string in
 * @return none
 */
void UTILS::trimString(std::string &str){
    size_t start = str.find_first_not_of(" \t\r\n"); // \t表示空四个字符，也称缩进，相当于按一下Tab键
    size_t end = str.find_last_not_of(" \t\r\n");

    if (std::string::npos == start || std::string::npos == end) {
        str = "";
    } else {
        str = str.substr(start, end - start + 1);
    }
}


/**
 * @description: read file a line
 * @param ifs file handle
 *        str out string
 * @return success??
 */
bool UTILS::getStrLine(std::istream &ifs, std::string &str){
    while (true) {
        getline(ifs, str);
        trimString(str);
        if (str.size() != 0) {
            if (str[0] != '#') {
                return true;
            }
        }
        if (ifs.eof() || str.compare("End")) {
            std::cout << "[DEBUG] End of file reached" << std::endl;
            return false;
        }
    }
    return false;
}
