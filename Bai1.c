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
	
	int max = arr[0];
	
	for(int i=1; i<n; i++){
		if(arr[0] < arr[i]){
			max = arr[i];
		}
	}
	
	printf("Phan tu lon nhat trong mang la: %d", max);
	return 0;
}
