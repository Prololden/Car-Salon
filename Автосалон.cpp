#include "���������.h"

void DataInitialization()
{
	//�������� ��������� ����, �.� �����, � ������� �������� ���������
	ofstream _buf("Buffer.txt");

	if (!_buf)
		cout << "�� ������� �������� ����!" << endl;

	_buf.close();
}

void DataEntry()
{
	//���� ������ �������

	//��������� ����������
	string _���������;
	string _�����;
	string _�������;
	int _�������;
	int _���������;
	int _����������;
	int n;

	cout << "������� ���������� ������: ";
	cin >> n;

	//��������� �������� ���� � ���������� � ���� ������
	ofstream record("Buffer.txt", ios::app);

	if (record) {
		record << n << endl;

		for (int i = 0; i < n; i++) {
			cout << "������� ������ �1 (��������� ������): ";
			cin >> _���������;

			cout << "������� ������ �2 (�����): ";
			cin >> _�����;

			cout << "������� ������ �3 (�������): ";
			cin >> _�������;

			cout << "������� ������ �4 (������� ����): ";
			cin >> _�������;

			cout << "������� ������ �5 (��������� ����): ";
			cin >> _���������;

			cout << "������� ������ �6 (���������� �� ������): ";
			cin >> _����������;

			record << _��������� << endl;
			record << _����� << endl;
			record << _������� << endl;
			record << _������� << endl;
			record << _��������� << endl;
			if (i < n - 1)
				record << _���������� << endl;
			else
				record << _����������;

			cout << "_______________________________________" << endl;
		}
	}
	else
		cout << "������ �������� �����!" << endl;

	record.close();
}

void DataReading(string fileName)
{
	//������ ������ �� �����

	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {

			//��������� ����������
			string _���������;
			string _�����;
			string _�������;
			int _�������;
			int _���������;
			int _����������;
			int n;

			//��������� ������ �� �����

			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
				reading >> _���������;

				reading >> _�����;

				reading >> _�������;

				reading >> _�������;

				reading >> _���������;

				reading >> _����������;

				record << _��������� << endl;
				record << _����� << endl;
				record << _������� << endl;
				record << _������� << endl;
				record << _��������� << endl;
				if (i < n - 1)
					record << _���������� << endl;
				else
					record << _����������;
			}
			cout << "������ �������!" << endl;
		}
		cout << "������ �������� �����!" << endl;
	}
	cout << "������ �������� �����!" << endl;

	//�������� �����
	reading.close();
	record.close();

}

void Print()
{
	ifstream reading("Buffer.txt");

	if (reading) {

		//��������� ����������
		string _���������;
		string _�����;
		string _�������;
		int _�������;
		int _���������;
		int _����������;
		int n;

		reading >> n;
		cout << "���������� ������: " << n << endl << endl;

		for (int i = 0; i < n; i++) {
			cout << "������ �� �" << i + 1 << endl;

			reading >> _���������;
			cout << "������ �1 (��������� ������): " << _��������� << endl;

			reading >> _�����;
			cout << "������ �2 (�����): " << _����� << endl;

			reading >> _�������;
			cout << "������ �3 (�������): " << _������� << endl;

			reading >> _�������;
			cout << "������ �4 (������� ����): " << _������� << endl;

			reading >> _���������;
			cout << "������ �5 (��������� ����): " << _��������� << endl;

			reading >> _����������;
			cout << "������ �6 (���������� �� ������): " << _���������� << endl;

			cout << "_______________________________________" << endl;
		}
	}
	else
		cout << "������ �������� �����!" << endl;

	//�������� �����
	reading.close();
}

bool DataCleaning()
{
	//������� ������

	bool clear = false;

	//�������� �����
	fstream _buf("Buffer.txt", ios::out);

	if (!_buf)
		cout << "������ �������� ��������� �����!" << endl;

	//�������
	_buf.clear();

	//�������� ��� ���� ����
	if (_buf.peek() == EOF)
		clear = true;
	else

		_buf.close();

	return clear;
}

void DataChange()
{
	//��������� ������

	//�������� ������ ��� ���
	//������� ����� � ����� ����� ���������� ������ � ����
	//����� �� ������������ � ������� ��� ������

	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//��������� ����������
			string _���������;
			string _�����;
			string _�������;
			int _�������;
			int _���������;
			int _����������;
			int n;
			int _n;

			//��������� �� ��������� ����� � �����
			reading >> n;

			cout << "�������� ����� ����������� �������� ( �� 1 �� " << n << "): ";
			cin >> _n;
			_n--;

			system("cls");

			record << n << endl;

			if (_n >= 0 && _n < n) {

				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _���������;
						record << _��������� << endl;

						reading >> _�����;
						record << _����� << endl;

						reading >> _�������;
						record << _������� << endl;

						reading >> _�������;
						record << _������� << endl;

						reading >> _���������;
						record << _������� << endl;

						reading >> _����������;
						if (i < n - 1)
							record << _���������� << endl;
						else
							record << _����������;
					}
					else {
						cout << "������� ������ �1 (��������� ������): ";
						cin >> _���������;

						cout << "������� ������ �2 (�����): ";
						cin >> _�����;

						cout << "������� ������ �3 (�������): ";
						cin >> _�������;

						cout << "������� ������ �4 (������� ����): ";
						cin >> _�������;

						cout << "������� ������ �5 (��������� ����): ";
						cin >> _���������;

						cout << "������� ������ �6 (���������� �� ������): ";
						cin >> _����������;

						record << _��������� << endl;
						record << _����� << endl;
						record << _������� << endl;
						record << _������� << endl;
						record << _��������� << endl;
						if (i < n - 1)
							record << _���������� << endl;
						else
							record << _����������;

						reading >> _���������;
						reading >> _�����;
						reading >> _�������;
						reading >> _�������;
						reading >> _���������;
						reading >> _����������;
					}
				}
				cout << "������ ��������!" << endl;
			}
			else
				cout << "����� ����� �� �����!" << endl;
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	record.close();
	reading.close();

	remove("Buffer_.txt");
}

void Copy() {
	//����������� � ����� ����
	ifstream reading("Buffer.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//��������� ����������
			string _���������;
			string _�����;
			string _�������;
			int _�������;
			int _���������;
			int _����������;
			int n;

			//��������� �� ��������� ����� � �����
			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
				reading >> _���������;
				record << _��������� << endl;

				reading >> _�����;
				record << _����� << endl;

				reading >> _�������;
				record << _������� << endl;

				reading >> _�������;
				record << _������� << endl;

				reading >> _���������;
				record << _������� << endl;

				reading >> _����������;
				if (i < n - 1)
					record << _���������� << endl;
				else
					record << _����������;
			}
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	record.close();
	reading.close();
}

int AmountOfData()
{
	//������� ���������� ������ �� �����
	ifstream _buf("Buffer.txt");
	int n = 0;

	if (_buf) {
		_buf >> n;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	_buf.close();

	return n = 0;
}

void DeleteData()
{
	//�������� ������

	//���������� ������
	//�������������� � �������� �����
	//����� ����������

	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//��������� ����������
			string _���������;
			string _�����;
			string _�������;
			int _�������;
			int _���������;
			int _����������;
			int n;
			int _n;

			//��������� �� ��������� ����� � �����
			reading >> n;
			int b = n - 1;

			cout << "�������� ����� ����������� �������� ( �� 1 �� " << n << "): ";
			cin >> _n;
			_n--;

			system("cls");

			record << b << endl;

			if (_n >= 0 && _n < n) {

				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _���������;
						record << _��������� << endl;

						reading >> _�����;
						record << _����� << endl;

						reading >> _�������;
						record << _������� << endl;

						reading >> _�������;
						record << _������� << endl;

						reading >> _���������;
						record << _������� << endl;

						reading >> _����������;
						if (i < n - 1)
							record << _���������� << endl;
						else
							record << _����������;
					}
					else {
						reading >> _���������;
						reading >> _�����;
						reading >> _�������;
						reading >> _�������;
						reading >> _���������;
						reading >> _����������;
					}
				}
				cout << "������ �������!" << endl;
			}
			else
				cout << "����� ����� �� �����!" << endl;
		}
		else
			cout << "������ �������� �����!" << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	record.close();
	reading.close();

	remove("Buffer_.txt");
}

void AddData()
{

	//�������� ������

	//��������� ����������
	string _���������;
	string _�����;
	string _�������;
	int _�������;
	int _���������;
	int _����������;
	int n = AmountOfData() + 1;

	//��������� �������� ����
	ofstream record("Buffer.txt", ios::app);
	ofstream record_("Buffer.txt", ios::out | ios::in);

	if (record_) {
		record_ << n << endl;
	}
	else
		cout << "������ �������� ��������� �����!" << endl;

	if (record) {
		record << endl;

		cout << "������� ������ �1 (��������� ������): ";
		cin >> _���������;

		cout << "������� ������ �2 (�����): ";
		cin >> _�����;

		cout << "������� ������ �3 (�������): ";
		cin >> _�������;

		cout << "������� ������ �4 (������� ����): ";
		cin >> _�������;

		cout << "������� ������ �5 (��������� ����): ";
		cin >> _���������;

		cout << "������� ������ �6 (���������� �� ������): ";
		cin >> _����������;

		record << _��������� << endl;
		record << _����� << endl;
		record << _������� << endl;
		record << _������� << endl;
		record << _��������� << endl;
		record << _���������� << endl;
	}
	else
		cout << "������ �������� �����!" << endl;

	record.close();
	record_.close();
}

void SaveData(string fileName)
{
	//���������� ������
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);

	if (reading) {
		if (record) {

			//��������� ����������
			string _���������;
			string _�����;
			string _�������;
			int _�������;
			int _���������;
			int _����������;
			int n;

			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
					reading >> _���������;
					record << _��������� << endl;

					reading >> _�����;
					record << _����� << endl;

					reading >> _�������;
					record << _������� << endl;

					reading >> _�������;
					record << _������� << endl;

					reading >> _���������;
					record << _������� << endl;

					reading >> _����������;
					if (i < n - 1)
						record << _���������� << endl;
					else
						record << _����������;
				}

				cout << "������ ��������� � �����!" << fileName << endl;

			}
		else
			cout << "������ �������� ��������� �����!" << endl;
		}
		else
			cout << "������ �������� �����!" << endl;

		record.close();
		reading.close();
	}
