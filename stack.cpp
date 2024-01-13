#include<iostream>
#include<stack> 
/*stack(hay ngan xep) la 1 cau truc du lieu triu tuong ,Stack hoat dong theo kieu LIFO(Last in first out)
nghia la phan tu cuoi cung nhap vao la phan tu dau tien roi khoi danh sach*/
using namespace std;
//khai bao stack kieu int

int main(){
	stack<int> a;
a.push(10);
a.push(20);
a.push(40);
//in ra phan tu tren dinh stack
cout<<"In ra cai dau di dcm :"<<a.top()<<endl;
//loai bo phan tu dinh cua stack
a.pop();
//in ra phan tu dinh moi cua stack
cout<<"In ra cai moi :"<<a.top()<<endl;
//kiem tra xem ngan xep co rong khong
if(a.empty()){
	cout<<"empty"<<endl;
}
else cout<<"no empty"<<endl;
}
