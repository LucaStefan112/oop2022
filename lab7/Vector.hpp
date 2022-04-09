#ifndef Vector_hpp
#define Vector_hpp

template <class T>
class Vector{
    struct item{
        T value = 0;
        item* next = nullptr;
    };
    
    item* first = nullptr, last = nullptr;
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

#endif
