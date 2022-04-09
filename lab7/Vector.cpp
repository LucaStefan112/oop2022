#include "Vector.hpp"
#include <iostream>

template <class T>
Vector<T>::Vector(){
    first = last = new item;
    n = 0;
}

template <class T>
void Vector<T>::Push(T value){
    
    if(n == 0)
        first->value = value;
    else {
        item* p = new item;
        p->value = value;
        last->next = p;
        last = p;
    }
    
    n++;
}

template <class T>
T Vector<T>::Pop(){
    return last->value;
}

template <class T>
void Vector<T>::Remove(int index){
    if(index > n || index < 1)  return;
    
    item* p = first;
    
    if(index == 1){
        delete first;
        first = first->next;
    } else if(index == n){
        delete last;
        last = nullptr;
    } else
        for(int i = 1; i < n - 1; i++){
            if(i + 1 == index){
                item* t = p->next;
                p->next = p->next->next;
                delete t;
                break;
            }
            p = p->next;
        }
    
    n--;
}

template <class T>
void Vector<T>::Insert(int index, T value){
    if(index < 1 || index > n + 1)  return;
    
    item* p = first;
    
    if(index == 1){
        item* t = new item;
        t->value = value;
        t->next = first;
        first = t;
    } else if(index == n){
        item* t = new item;
        t->value = value;
        last->next = t;
        last = t;
    } else
        for(int i = 1; i < n - 1; i++){
            if(i + 1 == index){
                item* t = new item;
                t->value = value;
                t->next = p->next;
                p->next = t;
                break;
            }
            p = p->next;
        }
        
    n++;
}

template<class T>
void Vector<T>::Sort(bool (*f)(T a, T b)){
    T arr[n];
    item* p = first;
    
    for(int i = 0; i < n; i++){
        arr[i] = p->value;
        p = p->next;
    }
    
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if((f == nullptr && arr[i] > arr[j]) || !f(arr[i], arr[j]))
                std::swap(arr[i], arr[j]);
    
    p = first;
    
    for(int i = 0; i < n; i++){
        p->value = arr[i];
        p = p->next;
    }
}

template <class T>
void* Vector<T>::Get(int index){
    if(index < 1 || index > n)  return nullptr;
    
    item* p = new item;
    
    for(int i = 1; i <= n; i++){
        if(i == index)
            return p;
        p = p->next;
    }
}

template <class T>
void Vector<T>::Set(int index, T value){
    if(index < 0 || index > n)  return;
    
    item* p = first;
    
    for(int i = 1; i <= n; i++)
        if(i == index){
            p->value = value;
            return;
        }
    p = p->next;
}

template<class T>
int Vector<T>::Count(){
    return n;
}
