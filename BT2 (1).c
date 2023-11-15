#include<stdio.h>
int main(){
	int n,a,b,c,sum;
	n=100;
	do{
		a=n%10;
		b=(n/10)%10;
		c=(n/100)%10;
		sum=a*a*a+b*b*b+c*c*c;
		if(sum==n){
			printf("%d\n",n);
		}
		n++;
	}while(n<1000);
}
