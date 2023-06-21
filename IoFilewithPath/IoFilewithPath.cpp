#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "masukan Nama file : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= menulis file, \'q\' untuk keluar" << endl;

	//unlimeted loop untuk menulis
	while (true) {
		cout << "- ";
		//mendaoatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup  file nya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//memnunjuk ke sebuah file
	infile.open(NamaFile + ".txt", ios::in);

	cout << endl << ">= membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak menemukan file maka akan melakukan ini
	else cout << "unable to open file";
	return 0;
}
