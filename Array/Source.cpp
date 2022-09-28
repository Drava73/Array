#include<iostream>
#include<time.h>
using namespace std;



template <typename T>
class MyArray
{
     T* arr;
    int Count;
    int size;
    int capacity;
public:
    MyArray();
    MyArray(int);
    MyArray(const MyArray&);
    ~MyArray();
    void Getsize();
    void SetSize(int size, int grow);
    void GetUpperBound();
    bool IsEmpty();
    void FreeExtra();
    void RemoveAll();
    void GetAt(int ob);
    void SetAt(int pos);
    MyArray& operator[](const MyArray&);
    void Add();
    void Append(const MyArray&);
    MyArray& operator=(const MyArray&);
    void GetData();
    void InsertAt(int pos);
    void RemoveAt(int pos);
    

};
template <typename T>
MyArray<T>::MyArray()
{
    Count = 0;
    arr =NULL;
    size = 0;
}
template <typename T>
MyArray<T>::MyArray(int n)
{
    T* temp;
    temp->arr = new int[n];
    temp->size = n;
    for (int i = 0; i < n; i++)
        temp->arr[i] = rand() % 20;
    Count = 0;
    arr =  NULL;
    size = 0;
}
template <typename T>
MyArray<T>::MyArray(const MyArray& N)
{
    T* temp = N.arr;
    while (temp != 0) {
        AddHvost(temp->arr);
        temp = temp->next;

    }
}

template<typename T>
MyArray<T>::~MyArray()
{
    delete[]arr;
    size = 0;
    capacity = 0;
}

template<typename T>
void MyArray<T>::Getsize()
{
    int size = strlen(arr);
}

template<typename T>
void MyArray<T>::SetSize(int s_size, int grow)
{
    grow = 1;
    int gsize = strlen(arr);
    if (s_size + grow > gsize())
        size = s_size + grow;
    else
        size = s_size;
}

template<typename T>
void MyArray<T>::GetUpperBound()
{
    return capacity - 1;
}

template<typename T>
bool MyArray<T>::IsEmpty()
{
    return capacity == 0 ? true : false;
}

template<typename T>
void MyArray<T>::FreeExtra()
{
    if (!IsEmpty())
    {
        T* temp = new T[capacity];
        for (int i = 0; i < capacity; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;

        size = capacity;
    }
}

template<typename T>
void MyArray<T>::RemoveAll()
{
    capacity = 0;
}

template<typename T>
void MyArray<T>::GetAt(int ob)
{
    return arr[ob];
}



int main() {



}