//������������ 7, ������ 7. ���������: ��������� �.�.

/*���������� ����������� ���������, ������� ���������, ������� 
�� ��������� ������������� ����� �� �������� �������. ��������� �� 
������ ��������� �������� ���������, �������, ��������� (� ��� ����� 
������ ������� �� �������). ������������� ������������ ��������� 
��������. ��� ������� �������� ����� ��������� ��������� �� 3 ������� 
�����. ��������� ����� �� ����������� (������� �������� ����� ��� 
�������, ����� ��� �������, ����� ��� ��������).
	������� 3:  7, 29, 149*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

        long long number;

        cout << "������� �����: ";
        cin >> number;

        if (number < 0)
        {
            number *= -1;
        }

        int k = 0;
        for (unsigned long long i = 0; i <= number; i += 7) 
        {
            if (i == number)
                k = 1;
        }
        if (k == 1)
            cout << "\n������� �� 7";
        else
            cout << "\n�� ������� �� 7";

        k = 0;
        for (unsigned long long i = 0; i <= number; i += 29) 
        {
            if (i == number)
                k = 1;
        }
        if (k == 1)
            cout << "\n������� �� 29";
        else
            cout << "\n�� ������� �� 29";

        k = 0;
        for (unsigned long long
            i = 0; i <= number; i += 149)
        {
            if (i == number)
                k = 1;
        }
        if (k == 1)
            cout << "\n������� �� 149";
        else
            cout << "\n�� ������� �� 149" << endl;
    
	return 0;
}