#include <iostream>
using namespace std;
int main()
{
	int a, b;
	string islem;

	cout << "Hesap makinesi programina hosgeldiniz" << endl;

	cout << "Lutfen yapmak istediginiz islemi seciniz;" << endl;

	cout << "Toplama islemi:+" << endl;

	cout << "Cikarma islemi:-" << endl;

	cout << "Carpma islemi:*" << endl;

	cout << "Bolme islemi:/" << endl;

	cin >> islem;

	if (islem == "+") {

		cout << "Toplama islemini sectiniz,lutfen sayıları giriniz" << endl;

		cout << "Birinci sayi:";
		cin >> a;

		cout << "Ikinci sayi:";
		cin >> b;

		cout << "Toplama islemi sonucu:" << a + b << endl;
	}

	else if (islem == "-") {

		cout << "Cikarma islemini sectiniz,lutfen sayilari giriniz"<< endl;

		cout << "Birinci sayi";
		cin >> a;

		cout << "Ikinci sayi";
		cin >> b;

		cout << "Cıkarma islemi sonucu:" << a - b << endl;
	}
	else if (islem == "*") {

		cout << "Carpma islemini sectiniz,lutfen sayilari giriniz" << endl;

		cout << "Birinci sayi:";
		cin >> a;

		cout << "Ikinci sayi:";
		cin >> b;

		cout << "Carpma islemi sonucu:" << a * b << endl;
	}
	else if (islem == "/") {

		cout << "Bolme islemini sectiniz,lutfen saylari giriniz" << endl;

		cout << "Birinci sayi:";
		cin >> a;

		cout << "Ikinci sayi:";
		cin >> b;

		cout << "Bolme islemi sonucu:" << a / b << endl;
	}
	else {

		cout << "Hatali islem";
	}

	return 0;




}