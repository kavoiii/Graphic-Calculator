#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
    std::vector<T> elements;

public:
    void push(const T& value) { elements.push_back(value); }
    T pop() {
        if (elements.empty()) throw std::runtime_error("Stack underflow");
        T top = elements.back();
        elements.pop_back();
        return top;
    }
    T top() const { return elements.back(); }
    bool isEmpty() const { return elements.empty(); }
};

#endif
