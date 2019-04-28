#include <iostream>
using namespace std;


struct data{
char nim[20],nm[20],kls[20];};
data bts[100];
int l,m,n,P;
void inputdata()
{    cout<<"\nMasukan Data Yang Akan diinput : ";cin>>m;
   P=0;
   for(n=0;n<m;n++){
   P=P+1;
   cout<<"\nInput Data ke-"<<P<<endl;
   cout<<"Nama \t: ";cin>>bts[l].nm;
   cout<<"NIM  \t: ";cin>>bts[l].nim;
   cout<<"Kelas\t: ";cin>>bts[l].kls;
   l++;}}



void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t\t||\tKelas\t||\n";
 j=0;
 for(i=0;i<l;i++)
 {j=j+1;
  cout<<"===============================================================================\n";
  cout<<"||\t"<<j<<"\t||";
  cout<<bts[i].nim<<"     \t||";
  cout<<bts[i].nm<<"\t\t\t||";
  cout<<bts[i].kls<<" \t\t||";cout<<endl;
  }
  cout<<"=============================================================================== ";}

void hapusdata()
{int x,y;
 cout<<"Pengen Hapus data ke-";cin>>x;
 y=x-1;
 l--;
 for(int i=y;i<l;i++)
 {bts[i]=bts[i+1];}
 ;
 cout<<"\n\n\n\n\n\n******************** Data ke-"<<x<<" Terhapus**********************";
;
}

void editdata(){
int a,b;
cout<<"Masukan Data yang akan diedit : ";cin>>b;
a=b-1;
cout<<"Nama : ";cin>>bts[a].nm;
cout<<"NIM  : ";cin>>bts[a].nim;
cout<<"Kelas: ";cin>>bts[a].kls;
lihatdata();
}


int main()
{     int plh;
 char w;

  awal:
  cout<<"\nPILIH MENU ANDA ";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan Anda : ";
  cin>>plh;
  if(plh==1)
   {inputdata();goto awal;}
  if(plh==2)
   {hapusdata();goto awal;}
  if(plh==3)
   {lihatdata();goto awal;}
  if(plh==4)
   {editdata();goto awal;}
  if(plh==5)
   {
    cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Ya]                         [Tdk]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {
     cout<<"\n\n\n\n\n******************************* PROGRAM DATA SELESAI *******************************";}
    if(w=='n'||w=='N')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";goto awal;}
}

