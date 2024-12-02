#include<stdio.h>

void main(){


	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);

	int a[n];

	for(int i=0; i<n; i++){

		scanf("%d",&a[i]);
		if(a[i]%2==0){

			a[i]=a[i]*a[i];
		}
		else{

			a[i]=a[i]*a[i]*a[i];
		}


	}

	printf("Elements of array : \n");
	for(int i=0;i<n;i++){

		printf("%d\n",a[i]);
	}
}
