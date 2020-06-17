#ifndef NODE_H
#define NODE_H

#include "Employee.h"
typedef Employee EMP;
struct Node {
    EMP e;
    Node* next;

    Node();
    Node(EMP);
    Node(EMP, Node* next);
};

#endif

