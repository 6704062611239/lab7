#include<stdio.h>
long convert(long h, long m, long s); 

int main(){
	long h,m,s;
	scanf("%ld %ld %ld",&h,&m,&s);
	convert(h,m,s);
}

long convert(long h, long m, long s){
	h = (h*60)*60;
	m = (m*60);
	printf("%ld",h+m+s);
}
