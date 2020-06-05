#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include "dynamicmassive.h"

using namespace std;

int main(){
    setlocale(0,"");

dynamicmassive<int> a(0); // создаем массив типа int с 0 размером
if (a.isEmpty() == true){
    cout << "массив заполнен" << endl;
}
else if(a.isEmpty() == false) cout << "массив пустой" << endl;
a.push_back(10); // добавл€ем элементы
a.push_back(43);
a.push_back(2);
a.push_back(111);
a.print(); // выводим
if (a.isEmpty() == true){
    cout << "массив заполнен" << endl;
}
else if(a.isEmpty() == false) cout << "массив пустой" << endl;

if (a.isContains(112) == true){
    cout << "Ёлемент присутствует" << endl;
}
else if(a.isContains(112) == false) cout << "элемент отсутствует" << endl;
a.clear(); // отчистка массива
a.print(); // вывод


dynamicmassive<string> b(0);// создаем массив типа string с 0 размером
b.push_back("Hello"); //ввод строки
b.print(); //вывод



dynamicmassive<char> c(0);// создаем массив типа char с 0 размером
c.push_back('w'); //ввод элементов
c.push_back('o');
c.push_back('r');
c.push_back('l');
c.push_back('d');
c.print(); // вывод
c.isContains('g'); // проверка на наличие элемента

}

