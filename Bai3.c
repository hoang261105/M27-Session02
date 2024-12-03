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
	
	printf("Mang dao nguoc la: \n");
	for(int i=n-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
	return 0;
}
