//Ќа биржевых торгах за 1 фунт стерлингов давали $1.487, за франк Ч $0.172,
// за немецкую марку Ч $0.584, а за €понскую йену Ч $0.00955. Ќапишите программу,
// котора€ запрашивает денежную сумму в долларах, а затем выводит
// эквивалентные суммы в других валютах.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float S;
	cout << "Enter S:" << endl;
	cin >> S;
	cout 	<< setw(6) << "Funt" << setw(8) << S*1.487 << endl
			<< setw(6) << "Frank" << setw(8) << S*0.172 << endl
			<< setw(6) << "Mark" << setw(8) << S*0.584 << endl
			<< setw(6) << "Yean" << setw(8) << S*0.0955 << endl;
}
