#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,sum,vn=0,p=0,pn=0,factorial=1,rn,res,tmp,i=0;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	do{
		printf("INTEGER NUMBER\n");
		printf("1. In ra day so co gia tri nho hon hoac bang n và tinh tong\n");
		printf("2. In ra va dem cac so chia het cho 3 nho hon n\n");
		printf("3. Kiem tra n co phai so nguyen to khong\n");
		printf("4. Kiem tra n co phai so hoan hao khong\n");
		printf("5. Tinh tong cac uoc so cua n\n");
		printf("6. Tinh giai thua n\n");
		printf("7. In ra cac so dao nguoc cua n\n");
		printf("8. In ra cac so nguyen to tu 1->n\n");
		printf("9. Thoat\n");
		int choice;
		printf("Lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				sum=0;
				for(int i=n;i>0;i--){
					printf("%d\n",i);
					sum+=i;
				}
				printf("Tong cua day so <=n la: %d\n",sum);
				break;
			case 2:
				for(int i=n;i>0;i--){
					if(i%3==0){
						printf("%d\n",i);
						vn++;
					}
				}
				printf("co tat ca %d so chia het cho 3 nho hon n\n",vn);
				break;
			case 3:
				for(int i=n;i>0;i--){
					if(n%i==0){
						p++;
					}
				}if(p<=2){
					printf("%d la so nguyen to\n",n);
				}else printf("%d khong la so nguyen to\n",n);
				break;
			case 4:
				for(int i=n-1;i>0;i--){
					if(n%i==0){
						pn+=i;
					}
				}if(pn==n){
					printf("%d la so hoan hao\n",n);
				}else printf("%d khong la so hoan hao\n",n);
				break;
			case 5:
				for(int i=n-1;i>0;i--){
					if(n%i==0){
						pn+=i;
					}
			    }
			    printf("Tong cac uoc so cua %d la: %d\n",n,pn);
			    break;
			case 6:
				for(int i=n;i>1;i--){
					factorial=factorial*i;
				}
				printf("Giai thua n bang:%d\n",factorial);
				break;
			case 7:
				res = 0;
                while(n > 0){
                    tmp = n % 10;
                    res = res * 10 + tmp;
                    n = n / 10;
                }
                printf("So dao nguoc cua n la: %d\n",res);
                break;
            case 8:
               	do{
               		for(int j=1;j<=i;j++){
					    if(i%j==0){
						    p++;
					    }
					    if(p<=2){
					        printf("%d\n",i);
					    }
			        }
			        i++;
			    }while(i<n);
				break;
			case 9:
				exit(0);
			default:
				printf("vui long chon so tu 1-9\n");
		}
    }while("vui long chon so tu 1-9\n");
}
