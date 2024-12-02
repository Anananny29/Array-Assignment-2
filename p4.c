#include<stdio.h>

void main(){

	int n;
	printf("Enter Number of Students : ");
	scanf("%d",&n);

	int a[n];

	printf("Enter Student IDs: \n");
	for(int i=0; i<n;i++){

		scanf("%d",&a[i]);
	}

	int id;
	printf("Enter id to search : ");
	scanf("%d",&id);
	 int flag = 0;
	for(int i=0; i<n; i++){
		if(id == a[i]){

			printf("Id %d found at index %d\n",id,i);
			break;
		}
		
	}	

}

