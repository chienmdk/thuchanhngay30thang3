#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100
void nhap (float a[],int&n)
{
	do
	{
		printf("\nNhap so phan tu: ");
		scanf("%d",&n);
		if(n<=0 || n > MAX);
		{
			printf("\So phan tu khong hop le.Xin kiem tra lai!");
			}
			}while(n<=0 || n >MAX);
			for(int i = 0; i < n; i++)
			{
				printf("\nNhap a[%d]: ",i);
				scanf("%f", &a[i]);
				}
				}
				void xuat(float a[],int n)
				{
					for(int i = 0; i < 0; i++)
					{
						printf("8.3%",a[i]);
						}
						}
						int demDuong(float a[],int n)
						{
							\*if(n==0)
							return 0;
							int dem = denmDuong(a, n-1);
							if(a[n - 1]>0)
							dem++;
							return dem;*/
							if(n==0)
							return 0;
							if(a[n - 1]>0)
							return 1 + demDuong(a, n - 1);
							return demDuong(a, n - 1);
							}
							int main()
							{
								int n;
								float a[MAX];
								nhap(a, n);
								xuat(a,n);
								int dem = demDuong(a, n);
								printf("\nCo %d so duong",den);
								getch();
								return 0;
								}
