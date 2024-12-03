#include<stdio.h>

int main(){
	int n;
	int arr[n];
	
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Danh sach cac phan tu cua mang: \n");
	// In ra gia tri cac phan tu trong mang
	for(int i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	int count = 0;
	int x;
	printf("Nhap gia tri x: ");
	scanf("%d", &x);
	
	for(int i=0; i<n; i++){
		if(x == arr[i]){
			count++;
		}
	}
	printf("So lan xuat hien so %d trong mang la: %d", x, count);
	return 0;
}
