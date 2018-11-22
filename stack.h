//
// Created by danai on 11/22/18.
//

#ifndef AAD_3_LAB15_3_STACK_H
#define AAD_3_LAB15_3_STACK_H

#include <climits>
#include <iostream>
using namespace std;


struct stack_el {
    int value;
    stack_el* next;
};

class stack {
private:
    stack_el* ptr;
public:
    stack() {
        ptr = nullptr;
    }
    explicit stack(int v) {
        auto el = new stack_el;
        el->value = v;
        el->next = nullptr;
        ptr = el;
    }
    void print() {
        if(ptr == nullptr) cout << "stack is empty" << endl;
        else {
            int i = 0;
            stack_el* next_ptr = ptr;
            while(next_ptr != nullptr) {
                cout << i << " : " << next_ptr->value << endl;
                i++;
                next_ptr = next_ptr->next;
            }
        }

    }
    void push(int v) {
        auto el = new stack_el;
        el->value = v;
        el->next = ptr;
        ptr = el;
    }
    int pop() {
        int res = ptr->value;
        auto next = ptr->next;
        delete(ptr);
        ptr = next;
        return res;
    }
    int min() {
        if(ptr == nullptr) {
            cout << "stack is empty" << endl;
            return 0;
        }
        else {
            int min = INT_MAX;
            stack_el* next_ptr = ptr;
            while(next_ptr != nullptr) {
                if(next_ptr->value < min) min = next_ptr->value;
                next_ptr = next_ptr->next;
            }
            //cout << "max el: " << max << endl;
            return min;
        }


    }
};


#endif //AAD_3_LAB15_3_STACK_H
