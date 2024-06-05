/*
Nama 		: Antonius Valentino Dharma Kusuma
NPM 		: 4522210109
Kelas 		: G
*/

/*
SI PENJUALAN TOKO DENGAN INPUTAN
- Selection/Seleksi
- Repetation/Pengulangan
- Array
- Function
- String/File
- Insertion Sort - Descending
*/

// TUGAS BESAR PRAKTIKUM ALGORITMA DAN PEMROGRAMAN //

// Library
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void valen_price() // Function
{
	int pilihan1;
	int valen_pilihan2;
	int jmlh_Barang;
	int harga;
	int total;
	int bayar;

	string item;

	cout << endl;
	cout << "Daftar Harga Laptop Di Toko Komputer Valentino" << endl;
	cout << "<<========================================================>>" << endl;
	cout << "1.  Laptop Asus Republic Of Gamers (ROG) 	: Rp 30.000.000" << endl;
	cout << "2.  Laptop Lenovo Legion 5 Pro 			: Rp 35.000.000" << endl;
	cout << "3.  Laptop Lenovo Ideapad Gaming 		: Rp 15.000.000" << endl;
	cout << "4.  Laptop Asus Vivo Book 			: Rp 20.000.000" << endl;
	cout << "5.  Laptop Lenovo Thickpad 			: Rp 25.000.000" << endl;
	cout << "6.  Selesai" << endl;
	cout << "<<========================================================>>" << endl;
	cout << endl;

	do // Repetation/Pengulangan
	{
		cout << "Masukkan Pilihan : ";
		cin >> valen_pilihan2;
		cout << endl;

		switch (valen_pilihan2)
		{
		case 1:
			item = "Laptop Asus Republic Of Gamers (ROG)";
			harga = 30000000;
			cout << "Jumlah Barang : ";
			cin >> jmlh_Barang;
			total = harga * jmlh_Barang;
			cout << jmlh_Barang << " " << item << " = Rp " << harga * jmlh_Barang << endl;
			break;

		case 2:
			item = "Laptop Lenovo Legion 5 Pro";
			harga = 35000000;
			cout << "Jumlah Barang : ";
			cin >> jmlh_Barang;
			total = harga * jmlh_Barang;
			cout << jmlh_Barang << " " << item << " = Rp " << harga * jmlh_Barang << endl;
			break;

		case 3:
			item = "Laptop Lenovo Ideapad Gaming";
			harga = 15000000;
			cout << "Jumlah Barang : ";
			cin >> jmlh_Barang;
			total = harga * jmlh_Barang;
			cout << jmlh_Barang << " " << item << " = Rp " << harga * jmlh_Barang << endl;
			break;

		case 4:
			item = "Laptop Asus Vivo Book";
			harga = 20000000;
			cout << "Jumlah Barang : ";
			cin >> jmlh_Barang;
			total = harga * jmlh_Barang;
			cout << jmlh_Barang << " " << item << " = Rp " << harga * jmlh_Barang << endl;
			break;

		case 5:
			item = "Laptop Lenovo Thickpad";
			harga = 25000000;
			cout << "Jumlah Barang : ";
			cin >> jmlh_Barang;
			total = harga * jmlh_Barang;
			cout << jmlh_Barang << " " << item << " = Rp " << harga * jmlh_Barang << endl;
			break;
		}
	} while (valen_pilihan2 != 6);
	cout << "Terimakasih" << endl;
	cout << endl;
}

void valen1() // Function
{
	int valen_n;
	cout << "Masukkan Banyak Data Harga Laptop : ";
	cin >> valen_n;
	int valen_data[10];

	for (int valen_i = 0; valen_i < valen_n; valen_i++) // Array 1
	{
		cout << "Masukkan data ke-" << valen_i + 1 << ": ";
		cin >> valen_data[valen_i];
	}

	cout << endl;

	// Daftar Harga Sebelum Di Urutkan
	cout << "Daftar Harga Laptop Sebelum Dilakukan Pengurutan" << endl;
	for (int valen_k = 0; valen_k < valen_n; valen_k++) // Array 1
	{
		cout << valen_data[valen_k] << " ";
		cout << endl;
	}
	cout << endl;

	// Proses Insertion Sort Descending And Print Step By Step
	cout << "Proses Insertion List" << endl;
	for (int valen_i = 0; valen_i < valen_n; valen_i++) // Array 2
	{
		int valen_key = valen_data[valen_i];
		int valen_j = valen_i - 1;
		while (valen_j >= 0 && valen_data[valen_j] < valen_key)
		{
			valen_data[valen_j + 1] = valen_data[valen_j];
			valen_j--;
		}
		valen_data[valen_j + 1] = valen_key;
		for (int valen_k = 0; valen_k < valen_n; valen_k++)
		{
			cout << valen_data[valen_k] << " ";
		}
		cout << endl;
	}

	cout << endl;

	// Print Data
	cout << "Hasil Insertion Sort Descending" << endl;
	for (int valen_i = 0; valen_i < valen_n; valen_i++) // Array 1
	{
		cout << valen_data[valen_i] << " ";
	}
	cout << endl;
}

void valen_utama() // Function
{
	string valen_n = "Valentino"; // String
	cout << endl;
	cout << " ================================================================= " << endl;
	cout << "           Selamat Datang Di Toko Komputer Valentino               " << endl;
	cout << " Jl. Prof. DR. Satrio No.Kav 18, Kuningan, Kota Jakarta Selatan    " << endl;
	cout << endl;
	cout << "Nama Penjual : " << valen_n << endl;
	cout << endl;
}

void valen_pilih() // Function
{
Awal:
	int valen;
	cout << " ================================================================ " << endl;
	cout << "                           Menu Pilihan                           " << endl;
	cout << " ================================================================ " << endl;
	cout << " 1. Menampilkan Menu Pengurutan " << endl;
	cout << " 2. Menampilkan Harga " << endl;
	cout << "  Masukan Angka [1/2] : ";
	cin >> valen;
	cout << endl;

	switch (valen) // Selection/Seleksi
	{
	case 1:
		valen1();
		goto Awal;
		break;

	case 2:
		valen_price();
		goto Awal;
		break;

	case 3:
	default:
		cout << " Menu Tidak Tersedia " << endl;
	}
}

int main()
{
	valen_utama();
	valen_pilih();

	cin.get();
}