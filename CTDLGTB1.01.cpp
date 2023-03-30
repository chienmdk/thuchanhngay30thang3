#include<iostream>
using namespace std;

void nhap(int a[], int n) {
	 for (int i = 0; i < n; i++) {
		 cout << "Nhap vao phan tu a[" << i << "] : ";
		 cin >> a[i];
	 }
}

void xuat(int a[], int n) {
 for (int i = 0; i < n; i++)
 cout << a[i] << "  ";
}

int tinhtongsochan(int a[], int n){
	int s=0;
	for (int i; i <= n; i++)
	{
		if(n==0)
			return -1;
		else{
			if(a[i] % 2 == 0){
				return tinhchan(a,n) + s + a[i];
			}
			else 
				return 0;

		}
	}
}
int main(){
	 int a[1000];
	 int n;

	 cout << "Nhap n: ";
	 cin >> n;

	 nhap(a, n);
	 xuat(a,n);
	 int s = tinhchan(a, n);
   	system("tong s: ");
	 cout << s << endl;
	 return 0;
}
