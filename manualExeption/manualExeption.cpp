#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "selamat belajar di prodi TI UMY " << endl;
		throw 0, 5; //melemparkan sebuah integer maka
		cout << "peryataan tidak akan dieksekusi" << endl;
	}

	catch (int a) {
		//blok ini akan di eksekusi
		cout << " penegcualian akan di eksekusi" << endl;

