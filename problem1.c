#include <stdio.h>

int main(){
    int input,size;
    printf("size of arr: ");
    scanf("%d",&size);
    int arr[size],n_arr[size];
    for(int i =0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    int j = size-1;
    for(int i = 0; i< size ; i++){
        n_arr[i] = arr[j];
        j--;
    }

    for(int i = 0; i<size;i++){
        printf("%d ", n_arr[i]);
    }
}
