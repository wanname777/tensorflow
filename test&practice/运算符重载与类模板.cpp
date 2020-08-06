#include <iostream>
#include <cassert>
using namespace std;
template <class T>
class Array
{
private:
    T *list;
    int size;

public:
    Array(int sz = 50);
    Array(const Array<T> &a);
    ~Array();
    Array<T> &operator=(const Array<T> &rhs);
    Array<T> operator+(const Array<T> &rhs);
    Array<T> operator-(const Array<T> &rhs);
    friend ostream &operator<<(ostream &out, const Array<T> &rhs)
    {
        for (int i = 0; i < rhs.size; i++)
            out << rhs.list[i] << endl;
        return out;
    }
    T &operator[](int i);
    const T &operator[](int i) const;
    operator T *();
    operator const T *() const;
    int getSize() const;
    void resize(int sz);
};
template <class T>
Array<T>::Array(int sz)
{
    assert(sz >= 0);
    size = sz;
    list = new T[size];
}
template <class T>
Array<T>::~Array()
{
    delete[] list;
}
template <class T>
Array<T>::Array(const Array<T> &a)
{
    size = a.size;
    list = new T[size];
    for (int i = 0; i < size; i++)
    {
        list[i] = a.list[i];
    }
}
template <class T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
    if (&rhs != this)
    {
        if (size != rhs.size)
        {
            delete[] list;
            size = rhs.size;
            list = new T[size];
        }
        for (int i = 0; i < size; i++)
        {
            list[i] = rhs.list[i];
        }
    }
    return *this;
}
template <class T>
Array<T> Array<T>::operator+(const Array<T> &rhs)
{
    assert(size == rhs.size);
    Array<T> temp(size);
    for (int i = 0; i < size; i++)
        temp.list[i] = list[i] + rhs.list[i];
    return temp;
}
template <class T>
Array<T> Array<T>::operator-(const Array<T> &rhs)
{
    assert(size == rhs.size);
    Array<T> temp(size);
    for (int i = 0; i < size; i++)
        temp.list[i] = list[i] - rhs.list[i];
    return temp;
}
// template <class T>
// ostream &operator<<(ostream &out, const Array<T> &rhs)
// {
//     for (int i = 0; i < rhs.size; i++)
//         out << rhs.list[i] << endl;
//     return out;
// }
template <class T>
T &Array<T>::operator[](int n)
{
    assert(n >= 0 && n <= size);
    return list[n];
}
template <class T>
const T &Array<T>::operator[](int n) const
{
    assert(n >= 0 && n <= size);
    return list[n];
}
template <class T>
Array<T>::operator T *()
{
    return list;
}
template <class T>
Array<T>::operator const T *() const
{
    return list;
}
template <class T>
int Array<T>::getSize() const
{
    return size;
}
template <class T>
void Array<T>::resize(int sz)
{
    assert(sz >= 0);
    if (sz == size)
        return;
    T *newlist = new T[sz];
    int n = (sz < size) ? sz : size;
    for (int i = 0; i < n; i++)
        newlist[i] = list[i];
    delete[] list;
    list = newlist;
    size = sz;
}
int main()
{
    Array<int> a1(5);
    Array<int> a2(5);
    Array<int> a3(5);
    Array<int> a4(5);
    Array<int> a5(5);
    cout << a1.getSize() << endl;
    cout << a2.getSize() << endl;
    for (int i = 0; i < 5; i++)
    {
        a1[i] = i;
        a2[i] = 2 * i;
    }
    a3 = a1 + a2;
    a4 = a1 - a2;
    a5 = a1;
    cout << a1 << endl;
    cout << a2 << endl;
    cout << a3 << endl;
    cout << a4 << endl;
    cout << a5 << endl;
    return 0;
}