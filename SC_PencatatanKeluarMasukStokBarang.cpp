#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
string nama_barang[10], kode_barang[10], cari_kodebarang;
int harga_barang[10], stok_masuk[10], stok_keluar[10], jumlah;
void judul_program()
{
    cout<<" \t============================================================"<<endl;
    cout<<" \t\tProgram Pencatatan Keluar Masuk Stok Barang "<<endl;
    cout<<" \t\t\t Gudang PT. Indo Komputer "<<endl;
    cout<<" \t============================================================\n"<<endl;
}
int login();
void admin();
void manajer();
main()
{
    int pilihan, kode[] = {1234, 1111}, input;
    login_salah :
        switch(login()) {
        case 1:
            system("cls");
            judul_program();
            cout<<" \tAnda masuk sebagai admin "<<endl;
            cout<<" \tMasukan kode admin : ";cin>>input;
            if(input == kode[0]){
                cout<<" \tBerhasil Masuk sebagai admin....... "<<endl;
                system("pause");
                admin();
            } else {
                cout<<" \tKode yang anda masukan salah "<<endl;
                system("pause");
                system("cls");
                goto login_salah;
            }
            break;
        case 2:
            system("cls");
            judul_program();
            cout<<" \tAnda masuk sebagai manajer"<<endl;
            cout<<" \tMasukan kode manajer : ";cin>>input;
            if(input == kode[1]){
                cout<<" \tBerhasil Masuk sebagai manajer ";
                system("pause");
                manajer();
            } else {
                cout<<" \tKode yang anda masukan salah "<<endl;
                system("pause");
                system("cls");
                goto login_salah;
            }
            break;
        case 3:
            cout<<"\n \tBerhasil keluar dari program........."<<endl;
            break;
        default:
            cout<<"\tPilihan yang anda masukan tidak ada"<<endl;
            system("pause");
            system("cls");
            goto login_salah;
        }
    return 0;
}
int login()
{
    int pilihan;
    system("cls");
    judul_program();
    cout<<" \tPilih Masuk Sebagai "<<endl;
    cout<<" \t1. Admin "<<endl;
    cout<<" \t2. Manajer "<<endl;
    cout<<" \t3. Keluar "<<endl;
    cout<<" \tMasukan pilihan [1|2] : ";cin>>pilihan;
    return pilihan;
}
void admin(){
    int i, j, pilihan_dashboard;
    char kembali = 'Y';

    dashboard_admin :
        system("cls");
        judul_program();
        cout<<" \tDashboard Admin : "<<endl;
        cout<<" \t1. Input Barang "<<endl;
        cout<<" \t2. Input Stok Barang Masuk"<<endl;
        cout<<" \t3. Input Stok Barang Keluar"<<endl;
        cout<<" \t4. Keluar \n"<<endl;
        cout<<" \tMasukan pilihan anda [1-4] : ";cin>>pilihan_dashboard;
    switch(pilihan_dashboard){
    case 1:
        cout<<" \t============================================================"<<endl;
        cout<<" \t\t\tDashboard Admin : 1. Input Barang "<<endl;
        cout<<" \t============================================================\n"<<endl;
        cout<<" \tMasukan jumlah barang : ";cin>>jumlah;
        for(i = 0; i < jumlah; i++){
            cout<<" \tKode barang  ke - "<<i+1<<" = ";cin>>kode_barang[i];
            cout<<" \tNama barang  ke - "<<i+1<<" = ";getline(cin>>ws, nama_barang[i]);
            cout<<" \tHarga barang ke - "<<i+1<<" = ";cin>>harga_barang[i];
            cout<<endl;
        }
        cout<<" \tBarang berhasil diinputkan "<<endl;
        cout<<"\t-----------------------------------------------"<<endl;
        cout<<"\t\t Daftar Barang"<<endl;
        cout<<"\t-----------------------------------------------"<<endl;
        cout<<"\t|NO|Kode Barang\t|Nama Barang\t|Harga\t    |"<<endl;
        for(j = 0; j < jumlah; j++){
            cout<<"\t|"<<j+1<<" |\t"<<kode_barang[j]<<"\t|"<<nama_barang[j]<<" \t|Rp. "<<harga_barang[j]<<"|"<<endl;
        }
        cout<<endl;
        coba_lagi:
        cout<<" \tKembali ke dashboard [Y] : ";cin>>kembali;
        if(kembali == 'y' || kembali == 'Y'){
            goto dashboard_admin;
            system("pause");
            system("cls");
        } else {
            system("pause");
            goto coba_lagi;
        }
    case 2:
        cout<<" \t============================================================"<<endl;
        cout<<" \t\tDashboard Admin : 2. Input Stok Barang Masuk "<<endl;
        cout<<" \t============================================================\n"<<endl;
        cout<<" \t------------------------------------------------------------"<<endl;
        cout<<"\t\t Silahkan Masukan Stok Barang Masuk "<<endl;
        cout<<" \t------------------------------------------------------------"<<endl;
        cout<<"\t|NO|Kode Barang\t|Nama Barang\t|Harga\t      | Stok Masuk |"<<endl;
        for(j = 0; j < jumlah; j++){
            cout<<"\t|"<<j+1<<" |\t"<<kode_barang[j]<<"\t|"<<nama_barang[j]<<" \t|Rp. "<<harga_barang[j]<<"  |";cin>>stok_masuk[j];
        }
        cout<<endl;
        cout<<" \tInput stok barang masuk berhasil!!!"<<endl;
        coba:
        cout<<" \tKembali ke dashboard [Y] : ";cin>>kembali;
        if(kembali == 'y' || kembali == 'Y'){
            goto dashboard_admin;
            system("pause");
            system("cls");
        } else {
            system("pause");
            goto coba;
        }
    case 3:
        cout<<" \t============================================================"<<endl;
        cout<<" \t\tDashboard Admin : 3. Input Stok Barang Keluar "<<endl;
        cout<<" \t============================================================\n"<<endl;
        cout<<"\t-------------------------------------------------------------"<<endl;
        cout<<"\t\t Silahkan Masukan Stok Barang Keluar "<<endl;
        cout<<"\t-------------------------------------------------------------"<<endl;
        cout<<"\t|NO|Kode Barang\t|Nama Barang\t|Harga\t      | Stok Keluar |"<<endl;
        for(j = 0; j < jumlah; j++){
            cout<<"\t|"<<j+1<<" |\t"<<kode_barang[j]<<"\t|"<<nama_barang[j]<<" \t|Rp. "<<harga_barang[j]<<"  |";cin>>stok_keluar[j];
        }
        cout<<endl;
        cout<<"\t Input stok barang keluar berhasil!!!"<<endl;
        coba_keluar:
            cout<<" \tKembali ke dashboard [Y] : ";cin>>kembali;
            if(kembali == 'y' || kembali == 'Y'){
                goto dashboard_admin;
                system("pause");
                system("cls");
            } else {
                system("pause");
                goto coba_keluar;
            }
    case 4:
        main();
        break;
    default:
        cout<<" \tYang anda inputkan salah "<<endl;
        system("pause");
        system("cls");
        goto dashboard_admin;
        break;
    }
}
void manajer()
{
    int i, j, pilihan_dashboard, sisa_stok;
    char kembali = 'Y';
    system("cls");

    dashboard_manajer:
    cout<<" \t========================================================================================================================="<<endl;
    cout<<" \t\t\t\t\t\tProgram Pencatatan Keluar Masuk Stok Barang "<<endl;
    cout<<" \t\t\t\t\t\t\t Gudang PT. Indo Komputer "<<endl;
    cout<<" \t=========================================================================================================================\n"<<endl;
        cout<<" \tDashboard Manajer : "<<endl;
        cout<<" \t1. Lihat Laporan"<<endl;
        cout<<" \t2. Keluar\n"<<endl;
        cout<<" \tMasukan pilihan anda [1-2] : ";cin>>pilihan_dashboard;
    switch(pilihan_dashboard){
        case 1 :
            cout<<" \t========================================================================================================================="<<endl;
            cout<<" \t\t\t\t\tDashboard Manajer:Print Laporan Keluar Masuk Stok Barang "<<endl;
            cout<<" \t=========================================================================================================================\n"<<endl;
            cout<<"\t-------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t\t\t\t Daftar Barang PT. Indo Komputer "<<endl;
            cout<<"\t-------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"\t| NO |Kode Barang\t|Nama Barang\t  |Harga\t |Stok Masuk\t|Stok Keluar\t|Sisa Stok\t|Total Harga\t|"<<endl;
            for(i = 0; i < jumlah; i++){
                sisa_stok = stok_masuk[i] - stok_keluar[i];
                cout<<"\t|"<<i+1<<"   |\t"<<kode_barang[i]<<"\t        |"<<nama_barang[i]<<"\t  |Rp. "<<harga_barang[i]<<"\t |"<<stok_masuk[i]<<"\t\t|"<<stok_keluar[i]<<"\t\t|"<<sisa_stok<<"\t\t|Rp. "<< harga_barang[i] * sisa_stok<<"\t|";
                cout<<endl;
            }
            cout<<" \n\tBerhasil Menampilkan laporan!!!!!"<<endl;
            cout<<" \tKembali ke dashboard [Y] : ";cin>>kembali;
            if(kembali == 'y' || kembali == 'Y'){
                system("pause");
                system("cls");
                goto dashboard_manajer;
            } else {
                system("pause");
                goto dashboard_manajer;
            }
        case 2 :
            main();
            break;
        default :
            goto dashboard_manajer;
            break;
    }
}
