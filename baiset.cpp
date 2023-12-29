#include<iostream>
#include<set>
using namespace std;
int main(){
	// int n ; cin>>n;
	// set<int> a;
	// for(int i=0;i<n;i++){
	// 	int x; cin>>x;
	// 	a.insert(x);
	// }
	// cout<<a.size()<<endl;
	//multilset dung de luu cac tap hop co the trung nhau
	multiset<int> a;
	a.insert(299);
	a.insert(22);
	cout<<a.size()<<endl;
}
