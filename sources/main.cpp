#include <iostream>
#include "Stack1.h"
#include "Stack2.h"


int main() {
    // Stack 1
    std::cout << "STACK1<INT> ST1:\n";
    Stack1<int> st1;
    for (int i = 0; i < 10; i++) {
        st1.push(i);
    }
    for (int i = 0; i < 10; i++) {
        std::cout << st1.head() << std::endl;
        st1.pop();
    }

    // Stack 2
    std::cout << "\nSTACK2<INT> ST2:\n";
    Stack2<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push_emplace(3, 4, 5);
    for (int i = 0; i < 5; i++) {
        std::cout << st2.head() << std::endl;
        st2.pop();
    }

    // Moving st1 to st3
    std::cout << "\nSTACK1<INT> ST3 = ST1, ST3:\n";
    for (int i = 0; i < 10; i++) {
        st1.push(i);
    }
    Stack1<int> st3 = std::move(st1);
    for (int i = 0; i < 10; i++) {
        std::cout << st3.head() << std::endl;
        st3.pop();
    }

}
