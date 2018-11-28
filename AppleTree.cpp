template<typename T>
AppleTree<T>::AppleTree(int const &order) {
    raiz = nullptr;
    order = this->order;
}

template<typename T>
int AppleTree<T>::getOrder() {
    return order;
}

template<typename T>
void AppleTree<T>::insert(const T &) {

}

template<typename T>
void AppleTree<T>::remove(const T &) {

}

template<typename U>
friend std::ostream &operator<<(std::ostream &os, const AppleTree<U> &n){

}