#include<stdio.h>

void main(){

	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);

	int a[n];
	int sum=0;
	for(int i=0 ; i<n; i++){

		scanf("%d",&a[i]);
		 sum += a[i]*a[i];
	}
	//int sum=0;
	/*
	for(int i=0; i<n; i++){
	
		sum += a[i]*a[i];
	}*/

	printf("Sum : %d\n",sum);
}
