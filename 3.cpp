#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

char get[1];
int a=0,i;
const string laki = "L";
const string perempuan = "P";

struct KTP
{
    char nik[50], nama[50], tempat[50], tanggal[5], bulan[20],kelamin[50], alamat[50], agama[50],pekerjaan[50];
    int  tahun;
};
KTP data[10];

void Input ()
{
	cout << "---------------------------------" <<endl;
    cout << "Masukan Banyak Inputan Data : "; cin >> a;
    for (i=0;i<a;i++)
    {
        cin.getline (get,1);
        cout << "NIK\t\t\t: "; cin.getline(data[i].nik,50);
        cout << "Nama\t\t\t: "; cin.getline(data[i].nama,50);
        cout << "Tempat Lahir\t\t: "; cin.getline(data[i].tempat,50);
        cout << "Tanggal\t\t\t: "; cin.getline(data[i].tanggal,5);
        cout << "Bulan\t\t\t: "; cin.getline(data[i].bulan,20);
        cout << "Tahun\t\t\t: "; cin >> data[i].tahun;
        cin.getline (get,1);
        cout << "Jenis Kelamin(L/P)\t: "; cin.getline (data[i].kelamin,50);
        cout << "Alamat\t\t\t: "; cin.getline (data[i].alamat,50);
        cout << "Agama\t\t\t: "; cin.getline (data[i].agama,50);
        cout << "Pekerjaan\t\t :"; cin.getline (data[i].pekerjaan,50);
    }
    system("cls");
}

void Find ()
{
    int thn,c,d=0;
    cout << "Masukan Tahun Kelahiran";
    cin >> thn;
    for (c=0;c<a;c++)
    {
        if (data[c].tahun==thn)
        {
            cout << "NIK\t\t: "<<data[c].nik<<endl;
            cout << "Nama\t\t: "<<data[c].nama<<endl;
            cout << "TTL\t\t: "<<data[c].tempat<<", "<<data[c].tanggal<<"-"<<data[c].bulan<<"-"<<data[c].tahun<<endl;
            cout << "Jenis Kelamin\t\t: "<<data[c].kelamin<<endl;
            cout << "Alamat\t\t: "<<data[c].alamat<<endl;
            cout << "Agama\t\t: "<<data[c].agama<<endl;
            cout << "Pekerjaan\t\t: "<<data[c].pekerjaan<<endl;
            d++;
        }

        else if (c+1==a && d==0)
        {
            cout << "DATA TIDAK DITEMUKAN!!";
        }
    }
    getch(); system("cls");

}

void Show ()
{
    int x,e,f=0;

    cout << "Tampilkan Data KTP Berdasarkan Jenis Kelamin"<<endl;
    cout << "1. Perempuan"<<endl;
    cout << "2. Laki-Laki"<<endl;
    cout << "Masukan Pilihan : ";
    cin >> x;

    if (x==1)
    {
        for (e=0;e<a;e++)
        {
            if (data[e].kelamin == perempuan)
            {
                cout << "NIK\t\t: "<<data[e].nik<<endl;
                cout << "Nama\t\t: "<<data[e].nama<<endl;
                cout << "TTL\t\t: "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin\t\t: "<<data[e].kelamin<<endl;
                cout << "Alamat\t\t: "<<data[e].alamat<<endl;
                cout << "Agama\t\t: "<<data[e].agama<<endl;
                cout << "Pekerjaan\t\t: "<<data[e].pekerjaan<<endl;
                f++;
            }
        }
    }


    if (x==2)
    {
        for (e=0;e<a;e++)
        {

            if (data[e].kelamin == laki)
            {
                cout << "NIK\t\t: "<<data[e].nik<<endl;
                cout << "Nama\t\t: "<<data[e].nama<<endl;
                cout << "TTL\t\t: "<<data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun<<endl;
                cout << "Jenis Kelamin\t\t: "<<data[e].kelamin<<endl;
                cout << "Alamat\t\t: "<<data[e].alamat<<endl;
                cout << "Agama\t\t: "<<data[e].agama<<endl;
                cout << "Pekerjaan\t\t: "<<data[e].pekerjaan<<endl;
                f++;
            }
        }
    }

    if (f==0)
        {
            cout << "DATA TIDAK DITEMUKAN!!";
        }
        getch(); system("cls");


}

void Edit ()
{
    int j;
    cout << "Edit Data KTP ke "; cin >> j;
    j=j-1;
    cin.getline (get,1);
    cout << "NIK\t\t: "; cin.getline(data[j].nik,50);
    cout << "Nama\t\t: "; cin.getline(data[j].nama,50);
    cout << "Tempat Lahir\t\t: "; cin.getline(data[j].tempat,50);
    cout << "Tanggal\t\t: "; cin.getline(data[j].tanggal,50);
    cout << "Bulan\t\t: "; cin.getline (data[j].bulan,50);
    cout << "Tahun\t\t: "; cin >> data[j].tahun;
    cin.getline (get,1);
    cout << "Jenis Kelamin\t\t: "; cin.getline (data[j].kelamin,50);
    cout << "Alamat\t\t: "; cin.getline (data[j].alamat,50);
    cout << "Agama\t\t: "; cin.getline (data[j].agama,50);
    cout << "Pekerjaan\t\t :"; cin.getline (data[j].pekerjaan,50);

    Show(); getch(); system("cls");

}

int main()
{
    int *b = new int;
    while (*b!=99)
    {
    	 system ("color f6");
    	cout << "\t\t\t\t\t-------------------------------------" << endl;
    	cout << "\t\t\t\t\t|\tI PUTU MAHARDIKA            |" << endl;
    	cout << "\t\t\t\t\t|\t18050623008                 |" << endl;
        cout << "\t\t\t\t\t|\tD3 Manajemen Informatika    |" << endl;
    	cout << "\t\t\t\t\t-------------------------------------" << endl;
    	cout <<endl;
        cout << "---------------------------------"<<endl;
	    cout << "1. Daftar baru \t\t\t|"<<endl;
        cout << "2. Mencari Data \t\t|"<<endl;
        cout << "3. Menampilkan Data\t\t|"<<endl;
        cout << "4. Edit Data \t\t\t|"<<endl;
        cout << "99.Keluar \t\t\t|"<<endl;
        cout << "---------------------------------"<<endl;
        cout << "Masukan Pilihan :"; cin >> *b;

        if (*b==1)
        {
            Input();
        }

        else if (*b==2)
        {
            Find();
        }

        else if (*b==3)
        {
            Show();
        }
        else if (*b==4)
        {
            Edit();
        }
        else if (*b==99)
        {
            return 0;
        }
        else
        {
            cout << "PILIHAN ANDA TIDAK DITEMUKAN!!";
        }
    }

}
