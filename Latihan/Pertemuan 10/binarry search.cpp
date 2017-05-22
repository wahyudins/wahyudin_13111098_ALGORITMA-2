#include<iostream>

using namespace std;

int main(){
	int arr[9]={1,2,3,4,5,6,7,8,9};
	int x,i=0,j=8,k=(i+j)/2;
	cin>>x;
	if(x<=k){
		for(i=0;i<=k;i++){
			if(arr[i]==x){
				int data=x;
				cout<<"data anda ada: "<<x;
			}
		}
	}
	if(x>k){
		for(i=k;i<j;i++){
			if(arr[i]==x){
				int adata=x;
				cout<<"data anda: "<<x;
			}
		}
	}

}
