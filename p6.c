#include<stdio.h>

void main(){

	int n;
	printf("Enter size of array : ");
	scanf("%d",&n);

	float a[n];

	for(int i=0; i<n;i++){
		scanf("%f",&a[i]);
		if(a[i]>6.0 || a[i]<5.5){
			printf("Height should be greater than 5.5ft and less than 6ft. Re-enter height.\n");
			scanf("%f",&a[i]);

		}
	
	}
	 printf("\n");

	 printf("Height of all students :\n");

	 for(int i=0;i<n;i++){

		 printf("%f\n",a[i]);
	 }
}
