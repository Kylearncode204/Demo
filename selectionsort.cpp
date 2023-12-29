#include<iostream>
#include<math.h>
using namespace std;
/*thuat toan selection sort la 1 thuat toan sap xep co ban , y tuong la chon 1 doi tuong nho nhat(hoac lon nhat , tuy vao chieu 
sao xep theo y muon) tu pha con lai cua mang va dat no o dau mang(hoac cuoi mang)*/
void sesort(int a[], int n){
	for(int i = 0 ; i<n-1;i++){
		//gia su so nho nhat la min
		int min = i ; 
		//tim thay phan tu nho nhat trong mang
		for(int j = i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
			if(min != i){
		int tmp= a[i];
		a[i]=a[min];
		a[min]=tmp;
	}
	}
	//doi cho phan tu nho nhat tu dau tien chua duoc sap xep

} 
void hien(int a[], int size){
	for(int i = 0 ; i< size;i++){
		cout<<a[i]<<endl;
	}
	cout<<endl;
}
int main(){
	int a[6]={21,3,42,35,326,5};
	int size= sizeof(a)/sizeof(a[0]);
	cout<<"ham chua sap sep \n";
	hien(a,size);
	
	sesort(a,size);
	
	cout<<"ham da sap xep  \n";
	hien(a,size);
	
	
}
