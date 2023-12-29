#include<iostream>
#include<utility>
#include<vector>
using namespace std;
//pair dung de luu tru 2 cap gia tri
//pair<datatype1,datatype2>

int main(){
	pair<int,int> a;/*int la phan tu thu nhat cua pair , int la phan tu lon thu 2 cua pair
	a.first la phan tu thu nhat 
	a.second la phan tu thu 2
	
	*/
	pair<long,int> b=make_pair(1000,34);//ham make_pair de khoi tao cap gia tri cho pair
	//hoac pair<int,int>={774,44};
	cout<<b.first<<endl;
	cout<<b.second<<endl;
	//pair<pair<int,int>,int>>v;pair long nhau dung de luu 3 cap gia tri
	//dung de nhom nhieu cac cap du lieu gom nhieu phan tu 
	tuple<int,int,int> c{3,4,5};
	cout<<get<0>(c)<<endl;
} 	
