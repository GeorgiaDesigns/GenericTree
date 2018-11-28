
#ifndef ARVORE_N_ARIA_NODE_H
#define ARVORE_N_ARIA_NODE_H

#include <vector>
#include <algorithm>


template <typename T>
class Node {
public:
    void setLeaf(bool);
    bool isLeaf();

    bool isFull();

    void insert(const T &);
    Node<T>* next(const T &);

    Node(int const &); // declara a ordem
private:
    bool leaf;
    bool full;
    int order;
    std::vector<T> info;
    std::vector<T> children;
};


#endif //ARVORE_N_ARIA_NODE_H

#include "Node.cpp"