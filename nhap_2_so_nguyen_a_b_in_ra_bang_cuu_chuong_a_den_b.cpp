#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		int tg = a;
		a = b;
		b = tg;
	}
	for(int i = a; i<= b;i++){
		for(int j =i; j<= 9;j++){
			printf("%dx%d=%d\n",i,j,i*j);
		}
	}
}
