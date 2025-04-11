#include "Calculator.h"

int main() {
    Calculator calc;
    std::string expression;

    std::cout << "Enter expression in terms of x (e.g., 2*x+3): ";
    std::cin >> expression;

    calc.addToHistory(expression);

    double startX = -10, endX = 10;
    calc.plotGraph(expression, startX, endX);

    std::cout << "History of expressions:\n";
    calc.printHistory();

    return 0;
}
