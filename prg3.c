#include<stdio.h>

void add(int a){
	if(a%3==0 && a%5==0){
		printf("it is success");
	}
	else{
		printf("not success");
	}	
}



int main(){
	
	int i;
		
	printf("enter a number:-");
	scanf("%d",&i);
	
	add(i);
	return 0;
}
