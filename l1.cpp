//Считая, что кубический фут равен 7.481 галлона, написать программу, запрашивающую
//у пользователя число галлонов и выводящую на экран эквивалентный объем в кубических футах.


#include <iostream>

using namespace std;
int main()
{

float gallons, cufeet;
cout << "\nВведите количество в галлонах:";
cin >> gallons;
cufeet = gallons / 7.481;
cout << "Значение в кубических футах:: " << cufeet << endl;
system("chcp 1251");
return 0;
}
