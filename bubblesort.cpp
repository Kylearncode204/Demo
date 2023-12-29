#include<iostream>
using namespace std;
/*thuat toan bubblesort la di so sanh lan luot cac cap phan tu lien ke trong mang va doi cho chung khi khong theo thu tu
thuat toan nay chi phu hop voi nhung mang nho khong yeu cau duoc */

void bubblesort(int a[],int n){//ham nhan 1 mang so nguyen va so phan tu trong mang n
//su dung 2 vong lap nhau de duyet qua tung phan tu mang
for(int i = 0 ; i < n-1 ; i++){//sau moi lan lap phan tu lon nhat hay nho nhat dung dau mang thi se n -1  
	for(int j = 0;j<n-i-1;j++){//sau moi lan lap thi phan tu cuoi cung se dung dung vi tri 
		
		if(a[j]>a[j+1]){
		
			int tmp =a[j];
			a[j]=a[j+1];
			a[j+1]= tmp;
			
		}
	}
	
}	
} 
void xuat(int a[],int size){
	for(int i = 0 ; i< size ; i++){
		cout<<a[i]<<endl;
		cout<<" ";
	}
}
int main(){
	int a[9]={9,8,7,6,3,2,4,1,5};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<"truov khi sap xep :\n";
	xuat(a,n);
	bubblesort(a,n);
	cout<<"sau khi sap xep :\n";
	xuat(a,n);
	return 0;
}
/*import pygame,sys
pygame.init()# khoi tao game 
# tao cua so game 
#TAO TIEU De  va icon game

pygame.display.set_caption('game lon')
icon=pygame.image.load(r'asset/5a371a5a34df47.5239089615135606662166.png')
pygame.display.set_icon(icon)
#them backgroud 
bak=pygame.image.load(r'asset/khamphatruongdaihocdacsancuathainguyen.webp')
pygame.display.set_icon(icon)
screen=pygame.display.set_mode((640,345))
#vong lap xu li game
running = True
while running:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            running = False
            screen.blit(bak,(0,0))
            pygame.display.update()
            */
