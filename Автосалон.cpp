#include "Автосалон.h"

void DataInitialization()
{
	//создадим временный файл, т.е буфер, в котором хранится иформация
	ofstream _buf("Buffer.txt");

	if (!_buf)
		cout << "Вы создали буферный файл!" << endl;

	_buf.close();
}

void DataEntry()
{
	//ввод данных вручную

	//временные переменные
	string _Категория;
	string _Марка;
	string _Артикул;
	int _Оптовая;
	int _Розничная;
	int _Количество;
	int n;

	cout << "Введите количество данных: ";
	cin >> n;

	//открываем буферный файл и записываем в него данные
	ofstream record("Buffer.txt", ios::app);

	if (record) {
		record << n << endl;

		for (int i = 0; i < n; i++) {
			cout << "Введите данные №1 (Категория товара): ";
			cin >> _Категория;

			cout << "Введите данные №2 (Марка): ";
			cin >> _Марка;

			cout << "Введите данные №3 (Артикул): ";
			cin >> _Артикул;

			cout << "Введите данные №4 (Оптовая цена): ";
			cin >> _Оптовая;

			cout << "Введите данные №5 (Розничная цена): ";
			cin >> _Розничная;

			cout << "Введите данные №6 (Количество на складе): ";
			cin >> _Количество;

			record << _Категория << endl;
			record << _Марка << endl;
			record << _Артикул << endl;
			record << _Оптовая << endl;
			record << _Розничная << endl;
			if (i < n - 1)
				record << _Количество << endl;
			else
				record << _Количество;

			cout << "_______________________________________" << endl;
		}
	}
	else
		cout << "Ошибка открытия файла!" << endl;

	record.close();
}

void DataReading(string fileName)
{
	//чтение данных из файла

	ifstream reading(fileName);
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {

			//временные переменные
			string _Категория;
			string _Марка;
			string _Артикул;
			int _Оптовая;
			int _Розничная;
			int _Количество;
			int n;

			//считываем данные из файла

			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
				reading >> _Категория;

				reading >> _Марка;

				reading >> _Артикул;

				reading >> _Оптовая;

				reading >> _Розничная;

				reading >> _Количество;

				record << _Категория << endl;
				record << _Марка << endl;
				record << _Артикул << endl;
				record << _Оптовая << endl;
				record << _Розничная << endl;
				if (i < n - 1)
					record << _Количество << endl;
				else
					record << _Количество;
			}
			cout << "Данные считаны!" << endl;
		}
		cout << "Ошибка открытия файла!" << endl;
	}
	cout << "Ошибка открытия файла!" << endl;

	//закрытие файла
	reading.close();
	record.close();

}

void Print()
{
	ifstream reading("Buffer.txt");

	if (reading) {

		//временные переменные
		string _Категория;
		string _Марка;
		string _Артикул;
		int _Оптовая;
		int _Розничная;
		int _Количество;
		int n;

		reading >> n;
		cout << "Количество данных: " << n << endl << endl;

		for (int i = 0; i < n; i++) {
			cout << "Данные об №" << i + 1 << endl;

			reading >> _Категория;
			cout << "Данные №1 (Категория товара): " << _Категория << endl;

			reading >> _Марка;
			cout << "Данные №2 (Марка): " << _Марка << endl;

			reading >> _Артикул;
			cout << "Данные №3 (Артикул): " << _Артикул << endl;

			reading >> _Оптовая;
			cout << "Данные №4 (Оптовая цена): " << _Оптовая << endl;

			reading >> _Розничная;
			cout << "Данные №5 (Розничная цена): " << _Розничная << endl;

			reading >> _Количество;
			cout << "Данные №6 (Количество на складе): " << _Количество << endl;

			cout << "_______________________________________" << endl;
		}
	}
	else
		cout << "Ошибка открытия файла!" << endl;

	//закрытие файла
	reading.close();
}

bool DataCleaning()
{
	//очистка буфера

	bool clear = false;

	//открытие файла
	fstream _buf("Buffer.txt", ios::out);

	if (!_buf)
		cout << "Ошибка открытия буферного файла!" << endl;

	//очищаем
	_buf.clear();

	//проверка что файл чист
	if (_buf.peek() == EOF)
		clear = true;
	else

		_buf.close();

	return clear;
}

void DataChange()
{
	//изменение данных

	//сохраним данные ещё раз
	//очистим буфер и снова начнём записывать данные в него
	//дойдём до необходимого и изменим его данные

	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//временные переменные
			string _Категория;
			string _Марка;
			string _Артикул;
			int _Оптовая;
			int _Розничная;
			int _Количество;
			int n;
			int _n;

			//считываем из буферного файла в новый
			reading >> n;

			cout << "Выберите номер изменяемого элемента ( от 1 до " << n << "): ";
			cin >> _n;
			_n--;

			system("cls");

			record << n << endl;

			if (_n >= 0 && _n < n) {

				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _Категория;
						record << _Категория << endl;

						reading >> _Марка;
						record << _Марка << endl;

						reading >> _Артикул;
						record << _Артикул << endl;

						reading >> _Оптовая;
						record << _Оптовая << endl;

						reading >> _Розничная;
						record << _Оптовая << endl;

						reading >> _Количество;
						if (i < n - 1)
							record << _Количество << endl;
						else
							record << _Количество;
					}
					else {
						cout << "Введите данные №1 (Категория товара): ";
						cin >> _Категория;

						cout << "Введите данные №2 (Марка): ";
						cin >> _Марка;

						cout << "Введите данные №3 (Артикул): ";
						cin >> _Артикул;

						cout << "Введите данные №4 (Оптовая цена): ";
						cin >> _Оптовая;

						cout << "Введите данные №5 (Розничная цена): ";
						cin >> _Розничная;

						cout << "Введите данные №6 (Количество на складе): ";
						cin >> _Количество;

						record << _Категория << endl;
						record << _Марка << endl;
						record << _Артикул << endl;
						record << _Оптовая << endl;
						record << _Розничная << endl;
						if (i < n - 1)
							record << _Количество << endl;
						else
							record << _Количество;

						reading >> _Категория;
						reading >> _Марка;
						reading >> _Артикул;
						reading >> _Оптовая;
						reading >> _Розничная;
						reading >> _Количество;
					}
				}
				cout << "Данные изменены!" << endl;
			}
			else
				cout << "Номер введён не верно!" << endl;
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	record.close();
	reading.close();

	remove("Buffer_.txt");
}

void Copy() {
	//копирование в новый файл
	ifstream reading("Buffer.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//временные переменные
			string _Категория;
			string _Марка;
			string _Артикул;
			int _Оптовая;
			int _Розничная;
			int _Количество;
			int n;

			//считываем из буферного файла в новый
			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
				reading >> _Категория;
				record << _Категория << endl;

				reading >> _Марка;
				record << _Марка << endl;

				reading >> _Артикул;
				record << _Артикул << endl;

				reading >> _Оптовая;
				record << _Оптовая << endl;

				reading >> _Розничная;
				record << _Оптовая << endl;

				reading >> _Количество;
				if (i < n - 1)
					record << _Количество << endl;
				else
					record << _Количество;
			}
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	record.close();
	reading.close();
}

int AmountOfData()
{
	//выводит количество данных из файла
	ifstream _buf("Buffer.txt");
	int n = 0;

	if (_buf) {
		_buf >> n;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	_buf.close();

	return n = 0;
}

void DeleteData()
{
	//удаление данных

	//запоминаем данные
	//перезаписываем в исходный буфер
	//кроме удаляемого

	Copy();

	ifstream reading("Buffer_.txt");
	ofstream record("Buffer.txt", ios::out);

	if (reading) {
		if (record) {
			//временные переменные
			string _Категория;
			string _Марка;
			string _Артикул;
			int _Оптовая;
			int _Розничная;
			int _Количество;
			int n;
			int _n;

			//считываем из буферного файла в новый
			reading >> n;
			int b = n - 1;

			cout << "Выберите номер изменяемого элемента ( от 1 до " << n << "): ";
			cin >> _n;
			_n--;

			system("cls");

			record << b << endl;

			if (_n >= 0 && _n < n) {

				for (int i = 0; i < n; i++) {
					if (i != _n) {
						reading >> _Категория;
						record << _Категория << endl;

						reading >> _Марка;
						record << _Марка << endl;

						reading >> _Артикул;
						record << _Артикул << endl;

						reading >> _Оптовая;
						record << _Оптовая << endl;

						reading >> _Розничная;
						record << _Оптовая << endl;

						reading >> _Количество;
						if (i < n - 1)
							record << _Количество << endl;
						else
							record << _Количество;
					}
					else {
						reading >> _Категория;
						reading >> _Марка;
						reading >> _Артикул;
						reading >> _Оптовая;
						reading >> _Розничная;
						reading >> _Количество;
					}
				}
				cout << "Данные удалены!" << endl;
			}
			else
				cout << "Номер введён не верно!" << endl;
		}
		else
			cout << "Ошибка открытия файла!" << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	record.close();
	reading.close();

	remove("Buffer_.txt");
}

void AddData()
{

	//добавить данные

	//временные переменные
	string _Категория;
	string _Марка;
	string _Артикул;
	int _Оптовая;
	int _Розничная;
	int _Количество;
	int n = AmountOfData() + 1;

	//открываем буферный файл
	ofstream record("Buffer.txt", ios::app);
	ofstream record_("Buffer.txt", ios::out | ios::in);

	if (record_) {
		record_ << n << endl;
	}
	else
		cout << "Ошибка открытия буферного файла!" << endl;

	if (record) {
		record << endl;

		cout << "Введите данные №1 (Категория товара): ";
		cin >> _Категория;

		cout << "Введите данные №2 (Марка): ";
		cin >> _Марка;

		cout << "Введите данные №3 (Артикул): ";
		cin >> _Артикул;

		cout << "Введите данные №4 (Оптовая цена): ";
		cin >> _Оптовая;

		cout << "Введите данные №5 (Розничная цена): ";
		cin >> _Розничная;

		cout << "Введите данные №6 (Количество на складе): ";
		cin >> _Количество;

		record << _Категория << endl;
		record << _Марка << endl;
		record << _Артикул << endl;
		record << _Оптовая << endl;
		record << _Розничная << endl;
		record << _Количество << endl;
	}
	else
		cout << "Ошибка открытия файла!" << endl;

	record.close();
	record_.close();
}

void SaveData(string fileName)
{
	//сохранение данных
	ifstream reading("Buffer.txt");
	ofstream record(fileName, ios::out);

	if (reading) {
		if (record) {

			//временные переменные
			string _Категория;
			string _Марка;
			string _Артикул;
			int _Оптовая;
			int _Розничная;
			int _Количество;
			int n;

			reading >> n;
			record << n << endl;

			for (int i = 0; i < n; i++) {
					reading >> _Категория;
					record << _Категория << endl;

					reading >> _Марка;
					record << _Марка << endl;

					reading >> _Артикул;
					record << _Артикул << endl;

					reading >> _Оптовая;
					record << _Оптовая << endl;

					reading >> _Розничная;
					record << _Оптовая << endl;

					reading >> _Количество;
					if (i < n - 1)
						record << _Количество << endl;
					else
						record << _Количество;
				}

				cout << "Данные сохранены в файле!" << fileName << endl;

			}
		else
			cout << "Ошибка открытия буферного файла!" << endl;
		}
		else
			cout << "Ошибка открытия файла!" << endl;

		record.close();
		reading.close();
	}
