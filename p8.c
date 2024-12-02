#include<stdio.h>
void main(){

	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);

	char a[n];

	getchar();

	for(int i=0; i<n ; i++){

		scanf("%c",&a[i]);
		getchar();

	}

	printf("Alternate elements of array :\n");
	for(int i=0; i<n; i+=2){

		printf("%c\n",a[i]);
	}
}
