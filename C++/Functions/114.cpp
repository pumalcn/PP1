#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){
string s; //создание строковой переменной
cin>>s; //ввод строки
sort (s.rbegin(),s.rend()); //сортировка по убыванию
cout<<s[0]; //вывод первого т.е. наибольшего элемента строки
return 0; //завершение работы программы
}

