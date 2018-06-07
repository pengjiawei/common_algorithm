//
// Created by pengjiawei on 2018/5/12.
//

#ifndef ALGORITHM_STACK_ALGORI_H
#define ALGORITHM_STACK_ALGORI_H

#include <stack>

template<typename ElemT>
class DBStack_Queue {
public:
    void push(ElemT elem) {
        stack1.push(elem);
    }

    ElemT front() {
        if (!stack2.empty()){
            ElemT elem = stack2.top();
            stack2.pop();
            return elem;
        }
        while (!stack1.empty()) {
            ElemT tmp = stack1.top();
            stack1.pop();
            stack2.push(tmp);
        }
        ElemT elem = stack2.top();
        stack2.pop();
        return elem;
    }
    size_t size(){
        return stack1.size() + stack2.size();
    }
private:
    std::stack<ElemT> stack1, stack2;
};

#endif //ALGORITHM_STACK_ALGORI_H
