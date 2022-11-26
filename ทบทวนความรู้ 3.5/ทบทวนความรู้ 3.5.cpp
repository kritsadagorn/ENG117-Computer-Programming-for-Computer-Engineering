#include<stdio.h>

#define REPEATED 0

int main(){
    int n, temp;
    int i, j, c, t=0;
    int arr[100];
    
    printf("Input number of element to be store in array : ");
	scanf(" %d",&n);

	for (int i = 0; i < n; i++) {
		printf("Element [%d] : ", i);	
		scanf("%d", &arr[i]);
	}
	
	for(int i=0; i<n; ++i) {
      for(int j=i+1; j<n; ++j) {
        if (arr[i] > arr[j]) {
          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    for(i=0; i<n; i++){

        c=1;

        for(j=i+1;j<=n-1;j++){

            if(arr[i]==arr[j] && arr[i]!=REPEATED){

                c++;

                arr[j]=REPEATED;

            }

        }

        if(arr[i]!=REPEATED){

            if(c>1)t++;

            printf("%d -> %d\n",arr[i],c);

        }

    }

    return 0;

}
