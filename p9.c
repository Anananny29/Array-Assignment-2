#include<stdio.h>

void main(){

	int n;
	printf("Enter size of an array : ");
	scanf("%d",&n);

	int a[n];

	for(int i=0;i<n;i++){

		scanf("%d",&a[i]);
	}

	int index;
	
	if(index>n){
	
		printf("Enter valid index\n");
	}
	printf("Enter the index till you want your array to get print : ");
	scanf("%d",&index);

	printf("Array elements :\n");
	for(int j=0; j<=index;j++){

		printf("%d\n",a[j]);


	}

}
