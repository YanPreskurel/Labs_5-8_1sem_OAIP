//������������ 7, ������ 9. ���������: ��������� �.�.

/*����� �� ����� ���������� ���� (�������� ����� ������) ����� 
� ���, ��� ������ ������� ������������ ������ ���������� ������� 
��������� �����-������ ������. ������, ����������� (��� ��������) �� 
���������, ������ � ������� ��������� �� ��������� b � �������� ���� 
�������� ����� �� 0 �� b - 1. ������� �������, ���� �����, ��� ����� 
�������� � ������ ������ ����. ��������, ������ �������� ������� 
��������� ����� ����������� ������� ���������, ��� ������ ������� ���� 
0, 1, 2 ���� ����� 1, 2 � 3. ���� ��������������� ��������, � ��� ��������� 
����� n � ��� ������� ���������? ��������, ����� 7 � ���� ������� 
������������ ��� 21, ��� ��� 7 = 2?3+1, � ����� 22 ������������ ��� 211, ��� 
��� 22 = 2 ? 9 + 1 ? 3 + 1. */

#include <iostream>
#include <string>

using namespace std;

string func(int n)
{
    string s = "";
    while (n >= 3)
    {
        s.push_back((n % 3) + 48);
        n /= 3;
    }
    s.push_back(n + 48);
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    setlocale(LC_ALL, "rus");

    int n;

    cout << "������� �����: ";
    cin >> n;

    string s = func(n);
    int pos = s.find("10");

    while (pos + 1) 
    {
        s.replace(pos, 2, "03");
        pos = s.find("10");
    }

    int pos1 = s.find("20");

    while (pos1 + 1) 
    {
        s.replace(pos1, 2, "13");
        pos1 = s.find("20");
    }

    int pos2 = s.find("30");

    while (pos2 + 1) 
    {
        s.replace(pos2, 2, "23");
        pos2 = s.find("30");
    }

    while (s[0] == '0')
        s.erase(0, 1);

    cout << "\n\n���� ����� � ����� 3-��� ������� ���������: " << s << endl;

    return 0;
}