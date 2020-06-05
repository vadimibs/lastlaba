#ifndef DYNAMICMASSIVE_H_INCLUDED
#define DYNAMICMASSIVE_H_INCLUDED
#include<iostream>

using namespace std;

template <typename T>
class dynamicmassive
{
private:
int m_size; //размер массива
int m_capacity; //максимальный размер
T * m_arr; //сам массив

public:
dynamicmassive() // конструктор по умолчанию
{
m_size = 0;
m_capacity = 0;
T *m_arr = nullptr;
}
dynamicmassive(int size); // конструктор с параметрами
dynamicmassive(const dynamicmassive<T> & a); // конструктор копирования
~dynamicmassive(); // деструктор
int resize(int size); //метод изменения размера
void push_back(T val); //вввод элемента в конец строки
int size() const; // метод возвращающий размер
T & operator[] (int i); // метод обращения к элементам
void print() const; // вывод
void clear(); // отчистка массива
bool isEmpty () const; // наличие элементов
bool isContains(T el) const; // наличие элемента
};

template<typename T> //проверка наличия элемента
bool dynamicmassive<T>::isContains(T el)const {
//int k=0;
for (int i = 0; i < m_capacity;i++){
if (m_arr[i] == el){
return true;
}
}
return false;
}


template<typename T> // проверка наличия элементов
bool dynamicmassive<T>:: isEmpty() const{
if (m_capacity != 0){
return true;}
else{
return false;
}
}



template<typename T> // отчистка массива
void dynamicmassive<T>:: clear(){
this->m_capacity = 0;
delete [] this->m_arr;
m_arr = new T[this->m_capacity];
}


template<typename T> // добавление элемента в конец массива
void dynamicmassive<T>:: push_back(T val)
{
resize(m_size + 1);
m_arr[m_size - 1] = val;
}

template<typename T> // размер
int dynamicmassive<T>:: size() const
{
return m_size;
}


template<typename T>
T& dynamicmassive<T>::operator[] (int i) // обращение к элементам
{
return m_arr[i];
}


template<typename T> //изменение размера
int dynamicmassive<T>:: resize(int size)
{
if (size > m_capacity)
{
int new_capacity = max(size, m_size * 2);
T * new_arr = new T[new_capacity];
for (int i = 0; i < m_size; ++i)
new_arr[i] = m_arr[i];
delete[] m_arr;
m_arr = new_arr;
m_capacity = new_capacity;
}
m_size = size;
}


template<typename T> // деструктор
dynamicmassive<T>:: ~dynamicmassive()
{
if (m_arr)
delete[] m_arr;
}



template<typename T>
dynamicmassive<T>::dynamicmassive(const dynamicmassive<T> & a) // конструктор копирования
{
m_size = a.m_size;
m_capacity = m_size;
m_arr = NULL;
if (m_size != 0)
m_arr = new T[m_size];
else
m_arr = 0;
for (int i = 0; i < m_size; ++i)
m_arr[i] = a.m_arr[i];
}


template<typename T> //конструктор с параметрами
dynamicmassive<T>::dynamicmassive(int size)
{
m_size = size;
m_capacity = size;
if (size != 0)
m_arr = new T[size];
else
m_arr = 0;
}

template<typename T>
void dynamicmassive<T>::print() const // вывод массива
{
int el;
cout << "элементы массива: " ;
for(int i=0;i<m_capacity;i++)
{
cout << m_arr[i] << " ";
}
cout << endl;
}
#endif // DYNAMICMASSIVE_H_INCLUDED
