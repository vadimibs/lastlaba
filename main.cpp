#include <iostream>
#include <string>
#include <iostream>
#include <string>
#include "dynamicmassive.h"

using namespace std;

int main(){
    setlocale(0,"");

dynamicmassive<int> a(0); // ������� ������ ���� int � 0 ��������
if (a.isEmpty() == true){
    cout << "������ ��������" << endl;
}
else if(a.isEmpty() == false) cout << "������ ������" << endl;
a.push_back(10); // ��������� ��������
a.push_back(43);
a.push_back(2);
a.push_back(111);
a.print(); // �������
if (a.isEmpty() == true){
    cout << "������ ��������" << endl;
}
else if(a.isEmpty() == false) cout << "������ ������" << endl;

if (a.isContains(112) == true){
    cout << "������� ������������" << endl;
}
else if(a.isContains(112) == false) cout << "������� �����������" << endl;
a.clear(); // �������� �������
a.print(); // �����


dynamicmassive<string> b(0);// ������� ������ ���� string � 0 ��������
b.push_back("Hello"); //���� ������
b.print(); //�����



dynamicmassive<char> c(0);// ������� ������ ���� char � 0 ��������
c.push_back('w'); //���� ���������
c.push_back('o');
c.push_back('r');
c.push_back('l');
c.push_back('d');
c.print(); // �����
c.isContains('g'); // �������� �� ������� ��������

}

