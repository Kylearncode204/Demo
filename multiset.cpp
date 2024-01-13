#include<iostream>
#include<set>
using namespace std;
int main(){
	multiset<int> s;
	s.insert(100);
	s.insert(200);
	s.insert(300);
	s.insert(200);
	cout<<s.size()<<endl;
//	for(int x :s){
//		cout<<x<<endl;
//	}
	cout<<s.count(200)<<endl;
}
