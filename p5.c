#include<stdio.h>

void main(){

	int n;
	printf("Enter size of aaray : \n");
	scanf("%d",&n);

	int a[n];

	printf("Enter ages of children : \n");

	for(int i=0; i<n; i++){
        	
			scanf("%d",&a[i]);
		
			if(a[i]>5){
		
				printf("age should not be greater than 5. Re-enter the age\n");
				scanf("%d",&a[i]);
			}	
	
	}
	 printf("----------\n");

	
	printf("Ages of all children : \n");
	for(int i=0; i<n; i++){

		printf("%d\n",a[i]);
	}
}
