#include <iostream>

using namespace std;

int main()
{
    char nama[100][100];
    float nilai[100];
    float P1[100],P2[100],P3[100];
    float rata[1000];
    float no;

    cout<<"Masukkan jumlah mahasiswa: ";
    cin>>no;
   
    //input data
    for (int i=1;i<=no;i++){
    cout<<"Masukkan nama mahasiswa: ";
        cin>>nama[i];
        cout<<"Masukkan nilai P1: ";
        cin>>P1[i];
        cout<<"Masukkan nilai P2: ";
        cin>>P2[i];
        cout<<"Masukkan nilai P3: ";
        cin>>P3[i];
        rata[i]=(P1[i]+P2[i]+P3[i])/3;
       
        cout<<endl;
        }
       
       
    //menampilkan data
    cout<<"tampilkan data"<<endl;
    for (int a=1;a<=no;a++){
        cout<<"no."<<a<<" "<<"nama: "<<nama[a]<<" dengan nilai: "<<rata[a]<<endl;
        }

    return 0;
}
