template<typename T>
Node<T>::Node(int order) {
    this->order = order;

    // seta dinamicamente os vetores (disponibiliza sem ter local de memória ainda)
    this->info.reserve(order-1);  // disponibiliza os lugares, sem necessariamente criar o espaço na memória
    this->children.resize(order); // realmente cria o espaço na memória já, só com reserve dá errado

    isFull = false;
    isLeaf = false;  // só para deixar padrão e muda dps no método
}

template<typename T>
bool Node<T>::isFull() {
    return full;
}

template<typename T>
bool Node<T>::isLeaf() {
    return leaf;
}

template<typename T>
void Node<T>::setLeaf(bool state) {
    leaf = state;
}

template<typename T>
void Node<T>::insert(const T & data) {
    info.push_back(data);
    std::sort(info.begin(), info.end());

    if(info.size() = order-1){
        isFull = true;
    }
}

template<typename T>
Node<T> * Node<T>::next(const T & data)
    if(data<info.at(0)){
        return children.at(0);
    for (int i = 1; i<info.size(); i++){
        if(data<info.at(i) && data>info.at(i-1))
            return children.at(i);
    }
    return children.at(children.size - 1);

}