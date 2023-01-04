#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void admin(){
    string nama_barang[10], kode_barang[10];
    int harga_barang[10], stok_masuk[10], stok_keluar[10];
    int i, j, pilihan_dashboard;
    system("cls");
    cout<<" \t====================================================="<<endl;
    cout<<" \t\tProgram Pencatatan Keluar Masuk Stok "<<endl;
    cout<<" \t=====================================================\n"<<endl;

    cout<<" Dashboard Admin : "<<endl;
    cout<<" 1. Input Barang "<<endl;
    cout<<" 2. Input Stok Barang Masuk"<<endl;
    cout<<" 3. Input Stok Barang Keluar"<<endl;
    cout<<" 4. Keluar \n"<<endl;
    cout<<" Masukan pilihan anda [1-4] : ";cin>>pilihan_dashboard;
    switch(pilihan_dashboard){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }
}
void manajer()
{
    cout<<" \t====================================================="<<endl;
    cout<<" \t\tProgram Pencatatan Keluar Masuk Stok "<<endl;
    cout<<" \t=====================================================\n"<<endl;

    cout<<" Dashboard Admin : "<<endl;
    cout<<" 1. Lihat Laporan"<<endl;
    cout<<" 2. Keluar"<<endl;
}
main()
{
    int pilihan, kode[] = {1234, 1111}, input;
    cout<<" \t====================================================="<<endl;
    cout<<" \t\tProgram Pencatatan Keluar Masuk Stok "<<endl;
    cout<<" \t=====================================================\n"<<endl;
    login :
        cout<<" Pilih Masuk Sebagai "<<endl;
        cout<<" 1. Admin "<<endl;
        cout<<" 2. Manajer "<<endl;
        cout<<" Masukan pilihan : ";cin>>pilihan;
    switch(pilihan) {
    case 1:
        system("cls");
        cout<<" \tProgram Pencatatan Keluar Masuk Stok \n"<<endl;
        cout<<" Anda masuk sebagai admin "<<endl;
        cout<<" Masukan kode admin : ";cin>>input;
        if(input == kode[0]){
            cout<<" Berhasil Masuk sebagai admin ";
            admin();
        } else {
            cout<<" Kode yang anda masukan salah "<<endl;
            system("pause");
            system("cls");
            goto login;
        }
        break;
    case 2:
        system("cls");
        cout<<" \tProgram Pencatatan Keluar Masuk Stok \n"<<endl;
        cout<<" Anda masuk sebagai manajer "<<endl;
        cout<<" Masukan kode admin : ";cin>>input;
        if(input == kode[1]){
            cout<<" Berhasil Masuk sebagai manajer ";
        } else {
            cout<<" Kode yang anda masukan salah "<<endl;
            system("pause");
            system("cls");
            goto login;
        }
        break;
    default:
        cout<<"Pilihan yang anda masukan tidak ada"<<endl;
        break;
    }
}
