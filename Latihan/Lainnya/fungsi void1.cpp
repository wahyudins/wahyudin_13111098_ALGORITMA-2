#include <iostream>
#include <conio.h>
 
void luas(int &lu,int p,int l)
{lu=p*l;}
 
main(){
 
int pj,lb,hsl;
 
cout<<"INI CONTOH FUNGSI VOID\n\n";
cout<<"Panjang = ";cin>>pj;
cout<<"Lebar = ";cin>>lb;
 
luas(hsl,pj,lb);
cout<<"\nluas = "<<hsl;
 
getch();}
