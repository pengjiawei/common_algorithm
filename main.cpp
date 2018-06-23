#include <iostream>
#include "dynamic_planning.h"
#include "array_algori.h"
#include "stack_algori.h"
#include "recursvie.h"
#include "other.h"
int main() {
    int array[] = {2,4,5,6,1,2,3,9};
    dynamic_planning(array, sizeof(array) / sizeof(int) );
    std::cout << "Hello, World!" << std::endl;

    increment_array(array, sizeof(array) / sizeof(int) );

    std::cout << fun(15) <<std::endl;

    std::cout <<sum_of_two(array, sizeof(array) / sizeof(int) ,44)<<std::endl;

    std::cout <<sum_of_two_effec(array, sizeof(array) / sizeof(int) ,7)<<std::endl;

    int subset[] = {1,2,3};
    bool flag[sizeof(subset) / sizeof(int)] = {0};
    get_subset_of_array(subset,flag,0,sizeof(subset) / sizeof(int));

    printf("\n");
    DBStack_Queue<int> db;
    db.push(1);
    printf("data = %d\n",db.front());
    db.push(2);
    db.push(3);
    db.push(4);
    printf("data = %d\n",db.front());
    while(db.size() != 0){
        printf("data = %d\n",db.front());
    }

    printf("\n");

    std::string s("abc");
    print_all_string(s);

    std::vector<int> vec_a = {1,2,3,4,5};
    odd(vec_a,5);
    for (int i = 0; i < 5; ++i) {
        printf("%d,",vec_a[i]);
    }
    printf("\n");
    std::vector<int> i1 = {1,3,5,7};
    std::vector<int> i2 = {2,4,6,8,9,10};
    std::vector<int> i3 = merge_array(i1,i2);
    for (int j = 0; j < i3.size(); ++j) {
        printf("%d,",i3[j]);
    }


    printf("\n");
    int x = 23;
    for (int k = 0; k < 10; ++k) {
        printf("%d,",x);
        x = random_number(x,65536);
    }

    printf("\n");
    int one_arr[] = {4,5,5,2,7,9,7,2,9};
    find_once(one_arr, sizeof(one_arr) / sizeof(int));

    sum_of_sequence(9);
    //
    std::string str = "abcdefg";
    left_reverse_string(str,1);
    printf("str = %s\n",str.c_str());

    printf("minimal k\n");
    int arr_k[] = {1,6,3,8,5,0,9};
    std::set<int> set;
    minimal_k(arr_k,7,3,set);
    for (auto &&item : set) {
        printf("%d,",item);
    }
    return 0;
}