#include<iostream>
#include<set> 
using namespace std;
//set la tap hop   no giup lua vao cac tap hop ma cac phan tu do khong trung lap, set khong the luu cac phan tu ma no giog nhau
 //ham insert,find,count
//O(logn)
int main(){
/*
	a.insert(100);
	a.insert(2);
	a.insert(3);
	a.insert(100);
	cout<<a.size()<<endl;
	*/
	set<int> a;
	for(int i = 0 ; i<7;i++){
		a.insert(i);
	}
	cout<<a.size()<<endl;
	//ham count
/*	if(a.count(8)!=0){
		cout<<"gay";
	}
	else cout<<"no gay";
	*/
	//ham find
	
	if(a.find(3)!=a.end()){
		cout<<"gay";
	}
	else cout<<"no gay";
//Erase la ham xoa
    a.erase(5);
    cout<<a.size()<<endl;
    //hoac a.erase(a.find(5));
   
    //duyet qua set
    for(int x:a){
    	cout<<x<<"";
    	
	}
	cout<<endl;
	cout<<*a.begin()<<endl;
	cout<<*a.rbegin()<<endl;
	for(auto x:a){
		cout<<x<<endl;
	}
} 
