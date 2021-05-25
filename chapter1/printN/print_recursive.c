#include <stdio.h>
void printN( int N);

int main(){
	int i ;
	scanf("%d",&i);
	printN(i);
}
void printN(int N)
{
	if(N){
		printN( N-1 );
		printf("%d\n",N);	
	}

}	


