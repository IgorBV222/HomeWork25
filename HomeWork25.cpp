#include <iostream>
#include <string>
using namespace std;

//������ 25.2. ���������
//������������� �������� �������� ������ �� ��� ���������
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

//������ 25.3.
//������� ����� ���������� ����������� �������� � ������.
int characters_sym(string phrase) {
	int counter = 0;
	for (int i = 0; i < phrase.length(); i++) {
		if (phrase[i] == ' ' || phrase[i] == '.' || phrase[i] == ',' || phrase[i] == ':' || phrase[i] == ';' || phrase[i] == '!' || phrase[i] == '?')
			counter++;
	}
	return counter;
}


//������ 25.4.
//���� ��������� ��������� ������� � ���������� ������ � ���������� ���������, ������������ � ����� ������� � ��������������� ������ ������.����� ���������� ������ ������.

string substring_str(string str, char sym) {
	string newstr;	
		if (str.rfind(sym) != 0) 
			newstr += str.substr(str.rfind(sym));
	return newstr;
}

int main() {
	setlocale(LC_ALL, "Russian");
	
	//������ 25.1. ���� ������ str. ������������ ������ ������ sym. ��������� ������ ����� ������, ������� ������� �� ������� sym.
	//����� ����� ������ ����� ���������� ���������� ��������� ������� � ����������� ������ str.
	cout << "������ 25.1.\n";
	string str = "Hello world!";
	cout << "����������� �����: " << str << '\n';
	char sym;
	cout << "������� ������, ������������ � �����: ";
	cin >> sym;
	string newstr;
	
	for (int i = 0; i < str.length(); i++)
		if (str[i] == sym)
			newstr += sym;
	cout << "����� ������: " << newstr << "\n\n";


	//������ 25.2. ���������
	cout << "������ 25.2. ���������.\n";
	string str2;
	cout << "������� �����: ";
	cin >> str2;

	if (palindrome(str2)){
		cout << "����� �������� �����������.";
	}
	else{
		cout << "����� �� �������� �����������";
	}
	cout << "\n\n";

	//������ 25.3. �������� �������, ������� ��������� ������. ������� ������� ��� �������, �����, �������, ��������������� � �������������� �����,
	//������� ���� � ���������� ������ � ���������� �� ����� ����������.
	cout << "������ 25.3.\n";
	string str3;
	cout << "������� �����: ";
	getline(cin, str3);

	cout << "���������� ����������� �������� � ������ = " << characters_sym(str3) << "\n\n";

	//������ 25.4. ���� ��������� ��������� ������� � ���������� ������ � ���������� ���������, ������������ � ����� ������� � ��������������� ������ ������.
	//���� ������� � ������ ���, �� ������� ���������� ������ ������.
	cout << "������ 25.4.\n";
	string str4;
	cout << "������� �����: ";
	getline(cin, str4);

	char sym4;
	cout << "������� ������, ������������ � �����: ";
	cin >> sym4;

	cout << substring_str(str4, sym4) << '\n';
	
	return 0;
}
	