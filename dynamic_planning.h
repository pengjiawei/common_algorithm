//
// Created by pengjiawei on 2018/4/27.
//

#ifndef ALGORITHM_DYNAMIC_PLANNING_H
#define ALGORITHM_DYNAMIC_PLANNING_H

#include <cstdio>
#include <queue>
#include <map>


//local[i + 1] max( local[i] + array[i],array[i] );
//global[i + 1] max ( global[i],local[i + 1] )
void dynamic_planning(int* array,int size){
    int local[size] = {0};
    int global[size] = {0};
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        local[i + 1] = std::max(array[i],local[i] + array[i]);
        global[i + 1] = std::max(local[i + 1],global[i]);
        if(global[i + 1] > sum){
            sum = global[i + 1];
            printf("i = %d,sum = %d\n",i,sum);
        }
    }
    printf("sum = %d\n",sum);
}
//求数列中，步长为一的最长连续递增数列
void increment_array(int* array,int size){
    //记录子序列结束位置的索引和子序列的大小
    int subsequence_size = 0,subsequence_index = 0;
    int step_size = 1;
    int i = 0;
    std::queue<int> my_queue;

    my_queue.push(array[i]);
    while ( i < size){
        if(array[i] + step_size != array[i + 1]){
            if (my_queue.size() > subsequence_size){
                subsequence_size = my_queue.size();
                subsequence_index = i;
            }
            while (!my_queue.empty()){
                my_queue.pop();
            }
        }
        my_queue.push(array[i + 1]);
        ++i;
    }
    printf("result\n");
    for (int j = subsequence_index - subsequence_size + 1; j <= subsequence_index; ++j) {
        printf("%d,",array[j]);
    }
}
#endif //ALGORITHM_DYNAMIC_PLANNING_H
