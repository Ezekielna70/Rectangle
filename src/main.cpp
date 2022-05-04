//#include <bits/stdc++.h>
#include <iostream>
#include "include/rectangle.hpp"

using namespace std;

//Nama          : Ezekiel Walfred Ebenezer P N
//NRP           : 5024211038
//Departemen    : Teknik Komputer
//Kelas         : Kelas Proglan B


void check(){
    cout << "Tekan Enter Untuk Melanjutkan ke Langkah Selanjutnya";
    cin.ignore();
    system("CLS||CLEAR");
}


int main()
{
    system("CLS||CLEAR");

    cout << "Operator Overloading\n\n";

    float panjang, lebar, tengahx, tengahy;
    cout <<"Masukkan informasi tentang persegi pertama\n";
    cout <<"Panjang             : ";cin>>panjang;
    cout <<"Lebar             : ";cin>>lebar;
    cout <<"Titik tengah X    : "; cin>>tengahx;
    cout <<"Titik tengah Y    : "; cin>>tengahy;

    if(panjang < lebar){
        float cek1;
        cek1 = panjang;
        panjang = lebar;
        lebar = cek1;
    }

   
    PersegiPanjang first(tengahx, tengahy, panjang, lebar);
    system("CLS||CLEAR");
    cout << "Operator Overloading\n\n";
    cout <<"Masukkan informasi tentang persegi kedua\n";
    cout <<"Panjang             : ";cin>>panjang;
    cout <<"Lebar             : ";cin>>lebar;
    cout <<"Titik tengah X    : "; cin>>tengahx;
    cout <<"Titik tengah Y    : "; cin>>tengahy;

    if(panjang < lebar){
        float cek;
        cek = panjang;
        panjang = lebar;
        lebar = cek;
    }
        
    PersegiPanjang second(tengahx, tengahy, panjang, lebar);
    system("CLS||CLEAR");
    

    // cout <<"1. +";
    // cout <<"\n2. -";
    // cout <<"\n3. ++";
    // cout <<"\n4. --";
    // cout <<"\n5. []";
    // cout <<"\n6. ==";
    // cout <<"\n7. Melihat Hasil";

    PersegiPanjang hasil(0,0,0,0);
    int index;
    
    bool z = true;
    while(z)
    {
        system("CLS||Clear");
        cout << "\nApa yang ingin dilakukan kepada kedua persegi\n\n";
        cout <<"1. +";
        cout <<"\n2. -";
        cout <<"\n3. ++";
        cout <<"\n4. --";
        cout <<"\n5. []";
        cout <<"\n6. ==";
        cout <<"\n7. Melihat Hasil";
        cout << "\nOperator yang dipilih(angka): ";
        cin >> index;
        switch (index)
        {
        case 1:
            if(first==second)
                hasil= first + second;
            
            else
                cout << "\nKedua Segi Empat Tidak Beririrsan\n";
            break;
        case 2:
            if(first==second)
                hasil= first - second;
            
            else 
                cout << "\nKedua Segi Empat Tidak Beririrsan\n";
            break;
        case 3:
        {
            int ayam=0;
            cout << "\nPersegi ke-Berapa yang Ingin Diubah(1 atau 2): "; cin >> ayam;
            if(ayam==1){
                ++first;
                hasil=first;
            }
            else if(ayam==2) {
                ++second;
                hasil=second;
            }
            break;
        }
        case 4:
        {
            int ayam1=0;
            cout << "\nPersegi ke-Berapa yang Ingin Diubah(1 atau 2): "; cin >> ayam1;
            if(ayam1==1){
                ++first;
                hasil=first;
            }
            else if(ayam1==2) {
                ++second;
                hasil=second;
            }
            break;
        }
        case 5:
        {
            int ayam2=0;
            cout << "\nPersegi ke-Berapa yang Ingin Ditunjukkan(1 atau 2)?: "; cin >> ayam2;
            switch (ayam2)
            {
            case 1:
                int input1;
                cout << "\nData apa yang ingin ditunjukkan: \n1. X max\n2. X Min\n3. Y max\n4. Y min\n\nPilih Angka: "; cin >> input1;
                cout << "Data: " << first[input1];
                break;
            
            case 2:
                int input;
                cout << "\nData apa yang ingin ditunjukkan: \n1. X max\n2. X Min\n3. Y max\n4. Y min\n\n Pilih Angka: "; cin >> input;
                cout << "Data: " << second[input];
                break;
            }
            break;
        }
            
        case 6:
            if(first==second)
                cout << "\nKedua Persegi Panjang Beririsan\n\n";
            
            else
                cout << "\nKedua Segi Empat Tidak Beririrsan\n\n";

            //check();
            //system("CLS||Clear");
            break;

        case 7:
            system("CLS||CLEAR");
            hasil.output();
            z = false;
            break;
        
        default:
            cout << "Pilihan yang dipilih tidak valid\n";
            check();
            continue;
            break;
        }
    }

}

