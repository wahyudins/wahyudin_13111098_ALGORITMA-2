#include<iostream>

using namespace std;

int main(){
	int arr[9]={9,8,7,6,5,4,3,2,1};
	int x,i=0,j=9,k=(i+j)/2;
	cin>>x;
	if(x>k){
		for(i=0;i<=k;i++){
			if(arr[i]==x){
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
}
