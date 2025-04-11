#include "Calculator.h"

std::string Calculator::infixToPostfix(const std::string& expression) {
    Stack<char> operators;
    std::string postfix;

    for (char c : expression) {
        if (std::isdigit(c) || c == 'x') {
            postfix += c;
        } else if (isOperator(c)) {
            while (!operators.isEmpty() && precedence(operators.top()) >= precedence(c)) {
                postfix += operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.isEmpty()) {
        postfix += operators.pop();
    }

    return postfix;
}

double Calculator::evaluatePostfix(const std::string& postfix, double xValue) {
    Stack<double> values;

    for (char c : postfix) {
        if (std::isdigit(c)) {
            values.push(c - '0');
        } else if (c == 'x') {
            values.push(xValue);
        } else if (isOperator(c)) {
            double b = values.pop();
            double a = values.pop();

            switch (c) {
                case '+': values.push(a + b); break;
                case '-': values.push(a - b); break;
                case '*': values.push(a * b); break;
                case '/': values.push(a / b); break;
            }
        }
    }
    return values.pop();
}

void Calculator::plotGraph(const std::string& expression, double startX, double endX) {
    std::string postfix = infixToPostfix(expression);

    std::cout << "Graph for: " << expression << "\n";
    for (double x = startX; x <= endX; x += 0.5) {
        double y = evaluatePostfix(postfix, x);
        std::cout << "(" << x << ", " << y << ")\n";
    }
}
