//
// Created by pengjiawei on 2018/5/25.
//

#ifndef ALGORITHM_OTHER_H
#define ALGORITHM_OTHER_H
//线性同余方程 ax = b (mod m) 即 (ax - b) mod m = 0 。 也就是同余
//伪随机数，线性同余法 x(n + 1) = (a * x(n) + c) % m
//模 m > 0,系数 0 < a < m,增量 0 <= c < m,种子0 <= X(0) < m
//因为是伪随机数，所以并不能很好的用于蒙特卡罗
int random_number(int x,int m){
    int a = 123,c = 59;
    return (a * x + c) % m;
}

#endif //ALGORITHM_OTHER_H
