#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "Stack.h"
#include "LinkedList.h"
#include <iostream>
#include <cmath>
#include <vector>

class Calculator {
    LinkedList history;

    bool isOperator(char c) const { return c == '+' || c == '-' || c == '*' || c == '/'; }
    int precedence(char op) const {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        return 0;
    }

    std::string infixToPostfix(const std::string& expression);
    double evaluatePostfix(const std::string& postfix, double xValue);

public:
    void addToHistory(const std::string& expr) { history.addExpression(expr); }
    void printHistory() const { history.printHistory(); }
    void plotGraph(const std::string& expression, double startX, double endX);
};

#endif
