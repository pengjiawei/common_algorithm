//
// Created by pengjiawei on 2018/5/12.
//

#ifndef ALGORITHM_RECURSVIE_H
#define ALGORITHM_RECURSVIE_H

#include <string>
//failed now
void print_string(std::string s, int start) {
    printf("%s,", s.c_str());

    for (int i = start + 1; i < s.length(); ++i) {
        std::string tmp = s;
        char tmp_c = tmp[start];
        tmp[start] = tmp[i];
        tmp[i] = tmp_c;
        printf("%s,", tmp.c_str());
        print_string(s, start + 1);
    }
    printf("\n");
}

//打印字符串的所有排列组合
void print_all_string(std::string s) {
    print_string(s, 0);
}


#endif //ALGORITHM_RECURSVIE_H
