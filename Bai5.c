#include<stdio.h>

int main(){
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; 

    for(int i = 0; i < n; i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Danh sach cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    int num;
    int new_size = 0;
    printf("Nhap gia tri can xoa: ");
    scanf("%d", &num);
    
    for(int i=0; i<n; i++){
    	if(arr[i] != num){
    		arr[new_size] = arr[i];
    		new_size++;
		}
	}
	
	n = new_size;
	
	printf("Mang sau khi xoa la: \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
    return 0;
}

