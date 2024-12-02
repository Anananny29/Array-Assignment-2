#include<stdio.h>

void main(){

	int n;

	printf("Enter array size : ");
	scanf("%d",&n);
	if(n<=0){
	
		printf("Re-enter Valid size : ");
		scanf("%d",&n);
	}

	int a[n];
	printf("Enter array elements : \n");
	for(int i=0; i<n;i++){
	
		scanf("%d",&a[i]);
	}

	printf("Array elements in reverse order are : \n");
	for(int i=n-1; i>=0; i--){
	
		printf("%d\n",a[i]);
	}
}
