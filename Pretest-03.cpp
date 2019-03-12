/*
Nama : irfan satrio nugroho
NPM : 140810180003
tanggal buat : 12/03/2019
Program : Pretest 03
*/

#include <iostream>
using namespace std;

struct r_mhs
{
	char NPM[14];
	char nama [40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n)
{
	cout<<"Masukan Banyak MHS : ";
	cin>>n;
};
void inputMhs (Mhs mhs[], int& n)
{
	for (int i=0;i<n;i++)
 	{
        cout << "Masukkan data Mahasiswa : " << i+1 << endl;
        cout << "NPM        : "; cin >> Mhs[i].NPM;
        cout << "Nama       : "; cin >> Mhs[i].Nama;
        cout << "Ipk 		: "; cin >> Mhs[i].ipk;	
        cout << endl;
    }
};
void cetakMhs (larikMhs& mhs, int n)
{
	
};
void sortNPM(larikMhs& mhs, int n);

main ()
{
	int n, 
	banyakData (n);
	inputMhs (mhs, n);
	system("cls");
	cout<<"DAFTAR MAHASISWA\n";
}
