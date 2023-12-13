//muhammad rafi farhan
//nim.202131145
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
///
char nama[30],nim[15];
int byktugas,tugas,nuts,nuas,kehadiran,total;
char yt;


///
cout<<"===================== ===============\n";
cout<<"=====  PROGRAM  ===== ===============\n";
cout<<"===== MENGHITUNG ==== ===202131145===\n";
cout<<"======  BOBOT ======= === by.RAFI ===\n";
cout<<"=====   NILAI  ====== ===============\n";
cout<<"===================== ===============\n";
//
awal:
	
cout<<"Nama :";cin.getline(nama,30);
cout<<"Nim  :";cin.getline(nim,15);
cout<<"Berapa Banyak Tugas:";cin>>byktugas;

for(int i = 0; i < byktugas;i++) 
{cout << "Tugas :";cin>>tugas;}

cout<<"UTS :";cin>>nuts;
cout<<"UAS :";cin>>nuas;
cout<<"Kehadiran :";cin>>kehadiran;

kehadiran = kehadiran*10/100;
tugas = tugas*20/100;
nuts = nuts*30/100;
nuas = nuas*40/100;
total = kehadiran+tugas+nuts+nuas;
///
cout<<"===== H A S I L =====\n";
if(total>=81)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 4 \n";
cout<<"Grade : A ";}
else if (total>=76)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 3,75 \n";
cout<<"Grade : A-";}
else if (total>=72)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 3,5 \n";
cout<<"Grade : B+ ";}
else if (total>=68)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 3 \n";
cout<<"Grade : B ";}
else if (total>=64)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 2,75 \n";
cout<<"Grade : B- ";}
else if (total>=60)
{ cout<<"Rata Rata Nilai ";cout<<total;cout<<endl;
cout<<"Bobot : 2,5 \n";
cout<<"Grade : C+ ";}
else if (total>=56)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 2 \n";
cout<<"Grade : C ";}
else if (total>=41)
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 1 \n";
cout<<"Grade : D ";}
else
{ cout<<"Rata Rata Nilai :";cout<<total;cout<<endl;
cout<<"Bobot : 0 \n";
cout<<"Grade : E ";}
	
cout<<endl;	
cout<<"=====================\n";
cout<<endl;	
cout<<"Apakah Anda Ingin menginput nilai lagi?"<<endl;
cout<<endl<<endl;
cout<<"(y/t) ?  ";
cin>>yt;
cout<<endl;
if(yt=='Y'||yt=='y'){
goto awal;
}
if(yt=='T'||yt=='t'){
goto akhir;
}
akhir:
cout<<"Terimakasih";


    return 0;
}	

