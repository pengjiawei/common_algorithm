//
// Created by pengjiawei on 2018/5/24.
//

#ifndef ALGORITHM_BIT_OPT_H
#define ALGORITHM_BIT_OPT_H

//判断一个整数中有多少个1
int count_one(const int& n){
    int flag = 1;
    int count = 0;
    //思路就是左移一位与原来的数字做与运算
    while(flag){
        int i = n & flag;
        if(i){
            ++count;
        }
        flag  = flag << 1;
    }
}
#endif //ALGORITHM_BIT_OPT_H
