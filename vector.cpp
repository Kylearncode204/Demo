#include<iostream>
#include <vector>	
using namespace std;
//vector trong C++ nhu 1 mang dong , co the t dong tang kich thuoc 
//vector<kieudulieu> tenvector;
int main(){
	
	vector<int> v;
	//push_back cho phep day 1 pha tu vao trong vector
	v.push_back(100);
	v.push_back(200);
	v.push_back(300);
	v.push_back(100);
	cout<<"phan tu dau tien trong vector :"<<v[0]<<endl;
	cout<<"phan tu cuoi cung cua vector :"<<v[v.size()-1]<<endl;
	
	//size cho biet kich thuoc cua vector
	cout<<v.size()<<endl;
	//truy cap cac vector thong qua chi so 
	
	/*
	Duyet thong qua chi so(index)
	for(int i = 0 ; i<v.size();i++){
		cout<<v[i]<<endl;
	}
	*/
	/*duyet bang for x
	for(int x:y){
		cout<<x<<endl;
	}
	*/
	//v.end la thang dung sau phan tu cuoi cung
/*
duyet bang interator	
for(vector<int>::iterator it = v.begin();it!=v.end();++it){
		cout<<*it<<endl;
	}
*/
/*su dung auto	
for(auto it = v.begin();it!=v.end();++it){
	cout<<*it<<endl;
}
*/
int n; cin>>n;
vector<int> x(n,100);
for(int i = 0 ; i< n ;i++){
cout<<x[i]<<endl;
//vector<int> v;
//vector<int> v(n);
//vector<int> v(n,value);
}


}
