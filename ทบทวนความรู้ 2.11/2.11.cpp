#include <stdio.h>

int main(){
	
	int n;
	int x;
	int sum = 0;
	
	
	printf("User Input : ");
	scanf("%d", &n);
	printf("Series : ");
	
	for(int i=1;i<=n;i++){
	    x = 1;
		for(int j=1;j<=i;j++){
			x = x*10;
		}
		x = x - 1;
		printf("%d ", x);
		sum = sum + x - 1;
		if(i != n){
		    printf("+ ");
		}
	}	
	printf("\nSum : %d", sum);
	return 0;
}
