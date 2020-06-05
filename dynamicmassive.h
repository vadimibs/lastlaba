#ifndef DYNAMICMASSIVE_H_INCLUDED
#define DYNAMICMASSIVE_H_INCLUDED
#include<iostream>

using namespace std;

template <typename T>
class dynamicmassive
{
private:
int m_size; //������ �������
int m_capacity; //������������ ������
T * m_arr; //��� ������

public:
dynamicmassive() // ����������� �� ���������
{
m_size = 0;
m_capacity = 0;
T *m_arr = nullptr;
}
dynamicmassive(int size); // ����������� � �����������
dynamicmassive(const dynamicmassive<T> & a); // ����������� �����������
~dynamicmassive(); // ����������
int resize(int size); //����� ��������� �������
void push_back(T val); //����� �������� � ����� ������
int size() const; // ����� ������������ ������
T & operator[] (int i); // ����� ��������� � ���������
void print() const; // �����
void clear(); // �������� �������
bool isEmpty () const; // ������� ���������
bool isContains(T el) const; // ������� ��������
};

template<typename T> //�������� ������� ��������
bool dynamicmassive<T>::isContains(T el)const {
//int k=0;
for (int i = 0; i < m_capacity;i++){
if (m_arr[i] == el){
return true;
}
}
return false;
}


template<typename T> // �������� ������� ���������
bool dynamicmassive<T>:: isEmpty() const{
if (m_capacity != 0){
return true;}
else{
return false;
}
}



template<typename T> // �������� �������
void dynamicmassive<T>:: clear(){
this->m_capacity = 0;
delete [] this->m_arr;
m_arr = new T[this->m_capacity];
}


template<typename T> // ���������� �������� � ����� �������
void dynamicmassive<T>:: push_back(T val)
{
resize(m_size + 1);
m_arr[m_size - 1] = val;
}

template<typename T> // ������
int dynamicmassive<T>:: size() const
{
return m_size;
}


template<typename T>
T& dynamicmassive<T>::operator[] (int i) // ��������� � ���������
{
return m_arr[i];
}


template<typename T> //��������� �������
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


template<typename T> // ����������
dynamicmassive<T>:: ~dynamicmassive()
{
if (m_arr)
delete[] m_arr;
}



template<typename T>
dynamicmassive<T>::dynamicmassive(const dynamicmassive<T> & a) // ����������� �����������
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


template<typename T> //����������� � �����������
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
void dynamicmassive<T>::print() const // ����� �������
{
int el;
cout << "�������� �������: " ;
for(int i=0;i<m_capacity;i++)
{
cout << m_arr[i] << " ";
}
cout << endl;
}
#endif // DYNAMICMASSIVE_H_INCLUDED
