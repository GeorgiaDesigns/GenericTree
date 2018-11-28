
#ifndef ARVORE_N_ARIA_APPLETREE_H
#define ARVORE_N_ARIA_APPLETREE_H

#include "Node.h"

template <typename T>
class AppleTree {
public:
    int getOrder();
    void insert(const T &);
    void remove(const T &);

    AppleTree(int const &); // passa uma referencia da ordem

    template<typename U>
    friend std::ostream &operator<<(std::ostream &os, const AppleTree<U> &n);
private:
    int order;
    Node<T> *raiz;
};

#include "AppleTree.cpp"

#endif //ARVORE_N_ARIA_APPLETREE_H
