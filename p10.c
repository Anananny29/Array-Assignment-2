#include<stdio.h>

void main(){

	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);

	int a[n];

	for(int i=0;i<n;i++){

		scanf("%d",&a[i]);
	}

	printf("Array Elements in reverse alternate order : \n");
	for(int i=n-1;i>=0;i-=2){
		printf("%d\n",a[i]);

	}
}
