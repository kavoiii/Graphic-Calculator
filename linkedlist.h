#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include <iostream>

struct Node {
    std::string expression;
    Node* next;
    Node(const std::string& expr) : expression(expr), next(nullptr) {}
};

class LinkedList {
    Node* head;

public:
    LinkedList() : head(nullptr) {}
    void addExpression(const std::string& expr) {
        Node* newNode = new Node(expr);
        newNode->next = head;
        head = newNode;
    }
    // Method to print all saved expressions
    void printHistory() const {
        Node* temp = head;
        while (temp) {
            std::cout << temp->expression << std::endl;
            temp = temp->next;
        }
    }
};

#endif
