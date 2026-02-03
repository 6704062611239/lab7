#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();

int main() {
    int N,M,i,j,rnum,numok;
    scanf("%d %d",&M,&N);
    if (M<2) 
        M=2;
    if (N>20)
    	N=20;
    int A[M][N];
    
    srand(time(NULL));  
    
    for(i=0;i<M;i++){
    	for(j=0;j<N;j++){
    		numok = 1;
    		while(numok == 1) {
       			rnum=random100to200();
       			numok = 0;
       			if(A[i][j] == rnum){
       				numok = 1;
       				break;
				}
    		}
    		A[i][j] = rnum;
		}
	}
	
    for (i=0;i<N;i++){
    	for(j=0;j<N;j++){
    		printf("%d ",A[i][j]);
		}
	}    
    return 0;
}

int random100to200() {
    int random_num = (rand() % 101) + 100;
    return random_num;
}

