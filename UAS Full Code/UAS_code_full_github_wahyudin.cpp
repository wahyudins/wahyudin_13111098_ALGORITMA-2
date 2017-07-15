#include <iostream> 



using namespace std;


//pertemuan 3 Fungsi
void tambah(int a, int b) { 
cout << a + b << endl; 
} 

//pertemuan 4 record
typedef struct{
		string hari;
		string bulan;
		string tahun;
	} tanggal;
	
//Pertemuan 6 Record vs Array
typedef struct{
	string nim;
	string nama;
	string ipk;
} mahasiswa;

//Pertemuan 13 Recursif Faktorial
long rekursiffaktorial(int f){
		if(f==0){
			return 1;
		}else{
			return f*rekursiffaktorial(f-1);//penghenti
		}
	}



main() { 

//pertemuan 3 Fungsi
//dipanggil dan menambahkan parameter
cout<<"pertemuan 3 fungsi"<<endl;
tambah(10, 12); 
tambah(100, 200); 
cout<<"\n"<<endl;

//pertemuan 4 Array
cout<<"pertemuan 4 Array"<<endl;
string name[3];
cout<<"masukan nama anda"<<endl;
cin>>name[0];
cin>>name[1];
cin>>name[2];
cout<<"nama anda 1 : "<<name[0]<<endl;
cout<<"nama anda 2 : "<<name[1]<<endl;
cout<<"nama anda 3 : "<<name[2]<<endl;
cout<<"\n"<<endl;

//Pertemuan 5 Record
cout<<"pertemuan 5 Record"<<endl;
tanggal A;
cout<<" masukan hari bulan tahun :"<<endl;
cin>>A.hari;
cin>>A.bulan;
cin>>A.tahun;		
cout<<A.hari<<endl;
cout<<A.bulan<<endl;
cout<<A.tahun<<endl;
cout<<"\n"<<endl;

//Pertemuan 6 Recor vs Array
cout<<"pertemuan 6 Record vs Array"<<endl;
int a=1;
int N;
cin>>N;
mahasiswa mhs[N];
for(int i; i<N; i++){
	cout<<"data ke : "<<i+1<<endl;
	cin>>mhs[i].nim;
	cin>>mhs[i].nama;
	cin>>mhs[i].ipk;
}
cout<<"=========================="<<endl;
cout<<"| NIM   |  NAMA  |  IPK  |"<<endl;
cout<<"=========================="<<endl;
for(int i=0; i<N; i++){
cout<<"| "+mhs[i].nim<<" |"+mhs[i].nama<<" |"+mhs[i].ipk<<"  |"<<endl;
}
cout<<"\n"<<endl;

//Pertemuan 7 Matrix Array 
cout<<"pertemuan 7 Matrix Array"<<endl;
int M[3][3];	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"masukan baris "<<i<<" kolom "<<j<<"\n";
			cout<<"==> ";
			cin>> M[i][j]; 
		}
	}
	for(int a=0; a<3; a++){
		for(int b=0; b<3; a++){
			cout<<"hasil baris "<<a<<"kolom "<<b<<" ="<< M[a][b] << "\n";
		}
	}
	cout<<"creted by wahyudin";
	cout<<"\n"<<endl;
	
	
//Pertemuan 9 Mencari data di Array	
cout<<"pertemuan 9 Mencari data di Array"<<endl;
	int as,b=0,c,d=0,e,i=0,f;
	cout<<"masukan jumlah array: "<<endl;
	cin>>as;
	int arr[as];
		cout<<"masukan data : "<<endl;
	for(i;i<as;i++){
		cin>>arr[i];
		
	}
	
	cout<<"cari data anda: "<<endl;
	cin>>f;
	for(i=0;i<as;i++){
		if(arr[i]==f){
			b=b+1;
			c=f;
		}
		else{
			d=d+1;
			e=arr[i];
		}
	}
	
	cout<<"============================="<<endl;
	cout<<"jumlah yang ditemukan   : "<<b<<endl;
	cout<<"data anda yang ditemukan: "<<c<<endl;
	cout<<"\n"<<endl;
	cout<<"jumlah yang beda    : "<<d<<endl;
	cout<<"data anda yang beda : "<<e<<endl;
	cout<<"============================="<<endl;
	cout<<"\n"<<endl;


//Pertemuan 10 Searcing Array (Binary Search)
cout<<"pertemuan 10 Searcing Array (Binary Search)"<<endl;	
	int arrs[9]={9,8,7,6,5,4,3,2,1};
	int x,ii=0,j=9,k=(ii+j)/2;
	cin>>x;
	if(x>k){
		for(i=0;i<=k;i++){
			if(arrs[i]==x){
				int data=x;
				cout<<"data anda ada: "<<x;
			}
		}
	}
	if(x<=k){
		for(i=k;i<j;i++){
			if(arr[i]==x){
				int adata=x;
				cout<<"data anda: "<<x;
			}
		}
	}
	if(x>j || x<=0){
		cout<<"salah";
	}
	cout<<"creted by wahyudin";
	cout<<"\n"<<endl;
	
//Pertemuan 14 Recursif Factorial
cout<<"pertemuan 10 Recursif Factorial"<<endl;
	int xx;
	int n=4;
	cout<<n<<"!="<<rekursiffaktorial(n)<<endl;
	n=9;
	cout<<n<<"!="<<rekursiffaktorial(n)<<endl;
	
	cout<<"masukan angka yang akan di faktorial : "<<endl;
	cin>>x;
	cout<<xx<<"!="<<rekursiffaktorial(xx)<<endl;
	cout<<"creted by wahyudin";
	cout<<"\n"<<endl;
	
	
	return 0;
	

}


