#include <iostream>
#include <conio.h>


using namespace std;

int data = 200; // variable local main
void fungsi_satu (); // prototype fungsi
void fungsi_dua ();
void main (){
	
	    Int data = 200; //variable local main
	    fungsi_satu ();
	    funsi_dua ();
	cout<<"nilai data local main = "<<data<<endl;
	}
	Void fungsi_satu()
	{
	   Int data = 300; // variable local fungsi_Satu
		   Cout<<"nilai data satu = "<<data<<endl;
	}
	Void fungsi_dua()
	{
	   Cout<<"nilai data eksternal = "<<data<<endl;
	}




