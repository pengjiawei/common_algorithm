//
// Created by pengjiawei on 2018/5/8.
//
#include <list>
#ifndef ALGORITHM_ALGORI_H
#define ALGORITHM_ALGORI_H
//判断某个数是否为平方数，二分法，时间复杂度为log(n)，如果用平方的方式来判断，时间复杂度比二分法要高，为√2
//二分法有几个值得注意的地方，循环的终止条件，边界判定，相同值的处理
bool fun(int a){
    int left = 0,right = a;
    int mid;
    while(left <= right){
        mid = (left + right) / 2;
        if( a > (mid * mid) ){
            left = mid + 1;
//            mid = (left + right) / 2;
        }else if (a < (mid * mid) ){
            right = mid - 1;
//            mid = (right + left) / 2;
        }else if (a == (mid * mid )){
            return true;
        }
    }
}
//求解数列中是否存在两个数的和为指定的数，这是一种解法，时间复杂度为n^2
bool sum_of_two(int* arr, int size,int target){
    for (int i = 0; i < size; ++i) {
        int sub = target - arr[i];
        for (int j = 0; j < size; ++j) {
            if (arr[j] == sub && j != i){
                return true;
            }
        }
    }
    return false;
}
//现在介绍上面那个问题的另一种解法，开始这样开始思考，如果想要降低时间复杂度，那么就拿空间来换时间。常见的空间换时间算法有hash和桶排序等
//我们考虑hash
bool sum_of_two_effec(int* arr,int size,int target){
    bool hash[target] = {false};//创建一个长度为target的bool数组
    for (int i = 0; i < size; ++i) {
        //如果数列里面的元素大于target，直接跳过
        if(arr[i] < target){
            hash[ target - arr[i] ] = true;
        }
        if (hash[arr[i]]){
            return true;
        }
    }
    return false;
}
//如果数组是有序的，这个题还可以用两个指针指向首尾然后开始往中间收
bool sum_of_two_ptr(int* arr,int size,int target){

}
//打印和为target的连续正数序列(至少两个数),例如15，1+2+3+4+5 = 4+5+6 = 7+8 = 15
void sum_of_sequence(int target){
    int small = 1,big = 2;
    int curSum = small + big;
    while(small < (1 + target) / 2 ){
        if (curSum == target)
            printf("sequece %d - %d\n",small,big);
        while(curSum < target && big < (1 +target) / 2 ){
            ++big;
            curSum += big;
            if(curSum == target)
                printf("sequece %d - %d\n",small,big);
        }
        curSum -= small;
        ++small;

    }

}
//获取数列所有子集，这个问题还可以用位运算来解决，打印bit为1对应的元素
void get_subset_of_array(int* arr,bool* flag,int start ,int end){
    if (start < end){
        //递归所有元素，所有元素先设置为true，然后输出一遍
        flag[start] = true;
        get_subset_of_array(arr,flag,start + 1,end);
        //单个元素置为false，不打印它，可以想象为在全集里面"挖空"某个元素吧
        flag[start] = false;
        get_subset_of_array(arr,flag,start + 1,end);
    }else{
        printf("{");
        for (int i = 0; i < end; ++i) {
            if (flag[i])
                printf("%d,",arr[i]);
        }
        printf("}");
    }
}
//一个数组中，只有一个数字是出现一次的，其余的都出现两次，找出这个数字，异或
void find_once(int* arr,int size){
    int result = arr[0];
    for (int i = 1; i < size; ++i) {
        result = result ^ arr[i];
    }
    printf("result = %d\n",result);
}
//找出整数数组中奇偶数，使其奇数在前偶数在后，这个题思路和快排基本类似
void odd(std::vector<int>& a,int size){
    int* p_first = &a[0];
    int* p_last = &a[size - 1];
    while(p_first < p_last){
        while(*p_first % 2 != 0)
            ++p_first;
        while(*p_last % 2 == 0)
            --p_last;
        if(p_first < p_last){
            int tmp = *p_first;
            *p_first = *p_last;
            *p_last = tmp;
        }
    }
}
//合并两个有序数组
std::vector<int> merge_array(std::vector<int> arr1,std::vector<int> arr2){
    int i = 0,j = 0;
    std::vector<int> arr;
    //循环直到某个数组结束
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] <= arr2[j]){
            arr.push_back(arr1[i]);
            ++i;
        } else if(arr1[i] > arr2[j]){
            arr.push_back(arr2[j]);
            ++j;
        }
    }
    //补充一个数组超出另外一个数组的部分
    while(i < arr1.size()){
        arr.push_back(arr1[i]);
        ++i;
    }
    while(j < arr2.size()){
        arr.push_back(arr2[j]);
        ++j;
    }
    return arr;
}
//将前n个字符转到字符串的末尾，分别进行两段反转之后再进行一次整体的反转
void reverse_string(std::string& s,int start,int end){
    while(start < end){
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        ++start;
        --end;
    }
}
void left_reverse_string(std::string& s,int n){
    reverse_string(s,0,n );
    reverse_string(s,n + 1,s.size() - 1);
    reverse_string(s,0,s.size() - 1 );
}

void reverse_print_list(const std::list<int>& L){
    


}

#endif //ALGORITHM_ALGORI_H
