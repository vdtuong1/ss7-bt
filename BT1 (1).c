#include<stdio.h>
int main(){
	int n=0;
	do{
		++n;
		if(n%3==0&&n%5!=0){
			printf("Fizz\n");
		}else if(n%5==0&&n%3!=0){
			printf("Buzz\n");
		}else if(n%3==0&&n%5==0){
			printf("FizzBuzz\n");
		}else printf("%d\n",n);
	}while(n<=99);
}
