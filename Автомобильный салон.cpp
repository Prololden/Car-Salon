#include "���������.h"

int _stateMenu;
void Menu() {
	cout << "�������� ��������:" << endl
         << "(0) ����� �� ���������." << endl
	     << "(1) ���� ������." << endl
	     << "(2) ����� ������." << endl
	     << "(3) ��������� ������." << endl
	     << "(4) �������� ������." << endl
	     << "(5) ���������� ������." << endl
	     << "(6) ���������� ������." << endl
		 << "��� �����: ";
	cin >> _stateMenu;
}

	/*
		������:
		*��������� ������
		*�����
		*�������
		*������� ����
		*��������� ����
		*���������� �� ������
	*/

	int main() {
		//������������ ������� �����/������
		SetConsoleCP(1251);//��������� ������� �������� Win-cp 1251 � ����� �����
		SetConsoleOutputCP(1251);//��������� ������� �������� Win-cp 1251 � ����� ������

		DataInitialization();

		Menu();

		int _actions;
		string fileName;

		while (_stateMenu != 0)
		{
			switch (_stateMenu)
			{
			case 1:
				system("cls");//������� �������

				cout << "���� ������� ��� �� �����?: ";
				cin >> _actions;

				system("cls");//������� �������

				if (_actions == 1) {
					//���� �������
					DataEntry();
				}
				else
				{
					//������ �� �����
					cout << "������� �������� ����� ";
					cin >> fileName;

					DataReading(fileName);
				}

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
				//////////////////////////////////////////
			case 2:
				system("cls");//������� �������

				Print();

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
				////////////////////////////////////////
			case 3:
				system("cls");//������� �������

				DataChange();

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
				///////////////////////////////////////
			case 4:
				system("cls");//������� �������

				DeleteData();

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
				//////////////////////////////////////
			case 5:
				system("cls");//������� �������

				AddData();

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
				//////////////////////////////////////
			case 6:
				system("cls");//������� �������

				SaveData(fileName);

				system("pause");//�������� �������
				system("cls");//������� �������
				Menu();
				break;
			}
		}
		system("cls");
		if (DataCleaning())
			cout << "������ �������!" << endl;
		else
			cout << "������ �� �������!" << endl;

		cout << "������ ���������." << endl;
		system("pause");
	}