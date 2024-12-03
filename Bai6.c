#include<stdio.h>

int main(){
    int n, m;

    printf("Nhap so phan tu cua mang 1: ");
    scanf("%d", &n);

    int arr1[n];
	int arr2[m]; 
	int arr[n+m];
	int index = 0;

    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Danh sach cac phan tu cua mang 1:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr1[i]);
    }

	printf("Nhap so phan tu cua mang 2: ");
	scanf("%d", &m);
	
	for(int i = 0; i < m; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr2[i]);
    }

    printf("Danh sach cac phan tu cua mang 2:\n");
    for(int i = 0; i < m; i++){
        printf("arr[%d] = %d\n", i, arr2[i]);
    }
    
    for(int i = 0; i < n; i++){
        arr[index] = arr1[i];
        index++;
    }
    
    for(int i = 0; i < m; i++){
        arr[index] = arr2[i];
        index++;
    }
    
    printf("Mang sau khi da noi vao la: \n");
    for(int i=0; i<n+m; i++){
    	printf("%d ", arr[i]);
	}
    return 0;
}

