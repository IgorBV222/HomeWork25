#include <iostream>
#include <string>
using namespace std;

//Задача 25.2. Палиндром
//Независимость регистра работает только на анг раскладке
bool palindrome(string word) {
	
	for (int i = 0; i < word.length(); i++) {
		word[i] = tolower(word[i]);
	}

	for (int i = 0; i < word.length() / 2; i++) {

		if (word[i] != word[word.length() - i - 1]) {
			return false;
		}
	}
	return true;
}

//Задача 25.3.
//Считает общее количество небуквенных символов в строке.
int characters_sym(string phrase) {
	int counter = 0;
	for (int i = 0; i < phrase.length(); i++) {
		if (phrase[i] == ' ' || phrase[i] == '.' || phrase[i] == ',' || phrase[i] == ':' || phrase[i] == ';' || phrase[i] == '!' || phrase[i] == '?')
			counter++;
	}
	return counter;
}


//Задача 25.4.
//Ищет последнее вхождение символа в переданную строку и возвращает подстроку, начинающуюся с этого символа и заканчивающуюся концом строки.Иначе возвращает пустую строку.

string substring_str(string str, char sym) {
	string newstr;	
		if (str.rfind(sym) != 0) 
			newstr += str.substr(str.rfind(sym));
	return newstr;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//Задача 25.1. Дана строка str. Пользователь вводит символ sym. Программа создаёт новую строку, которая состоит из символа sym.
	//Длина новой строки равна количеству совпадений введённого символа в изначальной строке str.
	cout << "Задача 25.1.\n";
	string str = "Hello world!";
	cout << "Изначальная стока: " << str << '\n';
	char sym;
	cout << "Введите символ, содержащийся в троке: ";
	cin >> sym;
	string newstr;
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			newstr += sym;
	cout << "Новая строка: " << newstr << "\n\n";


	//Задача 25.2. Палиндром
	cout << "Задача 25.2. Палиндром.\n";
	string str2;
	cout << "Введите слово: ";
	cin >> str2;

	if (palindrome(str2)){
		cout << "Слово является палиндромом.";
	}
	else{
		cout << "Слово не является палиндромом";
	}
	cout << "\n\n";

	//Задача 25.3. Создайте функцию, которая принимает строку. Функция считает все пробелы, точки, запятые, восклицательные и вопросительные знаки,
	//которые есть в переданной строке и возвращает их общее количество.
	cout << "Задача 25.3.\n";
	string str3;
	cout << "Введите фразу: ";
	getline(cin, str3);

	cout << "Количество небуквенных символов в строке = " << characters_sym(str3) << "\n\n";

	//Задача 25.4. Ищем последнее вхождение символа в переданную строку и возвращает подстроку, начинающуюся с этого символа и заканчивающуюся концом строки.
	//Если символа в строке нет, то функция возвращает пустую строку.
	cout << "Задача 25.4.\n";
	string str4;
	cout << "Введите фразу: ";
	getline(cin, str4);

	char sym4;
	cout << "Введите символ, содержащийся в троке: ";
	cin >> sym4;

	cout << substring_str(str4, sym4) << '\n';
	
	return 0;
}
	