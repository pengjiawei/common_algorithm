//
// Created by pengjiawei on 2018/5/24.
//

#ifndef ALGORITHM_BIT_OPT_H
#define ALGORITHM_BIT_OPT_H

//判断一个整数中有多少个1
int count_one(const int& n){
    int flag = 1;
    int count = 0;
    //思路就是用数字与1做与运算，没做一次运算就左移1，结果中有多少个1则代表原数中有多少个1
    while(flag){
        int i = n & flag;
        if(i){
            ++count;
        }
        flag  = flag << 1;
    }
}
#endif //ALGORITHM_BIT_OPT_H
