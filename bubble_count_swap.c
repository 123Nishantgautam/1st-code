#include<stdio.h>
int main(){
    int arr[20];
    int n,i,j,temp,swap = 0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("No. of swaps is %d\n: ",swap);
    printf("After sorting: ");
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}