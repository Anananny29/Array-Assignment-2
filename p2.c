#include<stdio.h>

void main (){

	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);

	char a[n];

	getchar();
	for(int i=0;i<n; i++){

		scanf("%c",&a[i]);
		getchar();
	}

	printf("ASCII values of characters you entered: \n");

	for(int i=0; i<n; i++){

		printf("%d\n",a[i]);
	}
}
