//�� �������� ������ �� 1 ���� ���������� ������ $1.487, �� ����� � $0.172,
// �� �������� ����� � $0.584, � �� �������� ���� � $0.00955. �������� ���������,
// ������� ����������� �������� ����� � ��������, � ����� �������
// ������������� ����� � ������ �������.

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
