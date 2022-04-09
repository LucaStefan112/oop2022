#include <iostream>

float operator "" _Kelvin(unsigned long long int x){
    return float (x - 273.15);
}

float operator ""_Fahrenheit(unsigned long long int x){
    return float ((x - 32) / 1.8);
}

using namespace std;

template<class T>
struct item{
    T value = 0;
    item<T>* next = nullptr;
    
    item<T>* operator=(item<T>* a){
        return a;
    }
};

template <class T>
class Vector{
    
    item<T>* first = nullptr;
    item<T>* last = nullptr;
    int n = 0;
    
public:
    
    Vector();
    
    void Push(T value);
    T Pop();
    void Remove(int index);
    void Insert(int index, T value);
    void Sort(bool (*f)(T a, T b) = nullptr);
    void* Get(int index);
    void Set(int index, T value);
    int Count();
};

template <class T>
Vector<T>::Vector(){
    
    first = last = new item<T>;
    n = 0;
}

template <class T>
void Vector<T>::Push(T value){
    
    if(n == 0)
        first->value = value;
    else {
        item<T>* p = new item<T>;
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
    
    item<T>* p = first;
    
    if(index == 1){
        delete first;
        first = first->next;
    } else if(index == n){
        delete last;
        last = nullptr;
    } else
        for(int i = 1; i < n - 1; i++){
            if(i + 1 == index){
                item<T>* t = p->next;
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
    
    item<T>* p = first;
    
    if(index == 1){
        item<T>* t = new item<T>;
        t->value = value;
        t->next = first;
        first = t;
    } else if(index == n){
        item<T>* t = new item<T>;
        t->value = value;
        last->next = t;
        last = t;
    } else
        for(int i = 1; i < n - 1; i++){
            if(i + 1 == index){
                item<T>* t = new item<T>;
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
    item<T>* p = first;
    
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
    
    item<T>* p = new item<T>;
    
    for(int i = 1; i <= n; i++){
        if(i == index)
            return p;
        p = p->next;
    }
}

template <class T>
void Vector<T>::Set(int index, T value){
    if(index < 0 || index > n)  return;
    
    item<T>* p = first;
    
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

int main() {

    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    
    cout << a << ' ' << b << '\n' ;
    
    Vector<int> c;
    
    c.Push(121);
    cout<<c.Pop();
    c.Push(39);
    cout<<c.Pop();
    
    return 0;
}
