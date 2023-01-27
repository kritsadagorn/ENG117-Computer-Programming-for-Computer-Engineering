//กฤษฎากรณ์ ปุนนพานิช 65543206002-9
//Link Youtube : 
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data ;
	struct Node *next ;
};

void AddNode(struct Node **ptr, int data){
	while(*ptr != NULL){
		ptr = &(*ptr) -> next ;
	}//endwhile

	*ptr = new struct Node ;
	(*ptr) -> data = data ;
	(*ptr) -> next = NULL ;
}//endAddnode

void ShowData(struct Node *ptr) ;
void SwapNode(struct Node **ptr,int data,int temp);


int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start , 10) ;
	AddNode(&start , 20) ;
	AddNode(&start , 30) ;
	AddNode(&start , 40) ;
	ShowData(start);
	SwapNode(&start, 20, 30) ;
	ShowData(start) ;
	SwapNode(&start, 40, 10);
	ShowData(start) ;
}//endMain

void ShowData(struct Node *ptr) {
	printf("\nData : ") ;
	
	while (ptr != NULL){
		printf( "%d ", ptr -> data) ;
		ptr = ptr -> next ;
	}//endwhile
	printf( " " ) ;
}//endvoidShowData

void SwapNode(struct Node **ptr,int data,int temp) {
	while(*ptr != NULL) {
		if((*ptr) -> data == data) {
			(*ptr) -> data = temp ;
		}//endif
		else if((*ptr) -> data == temp) {
			(*ptr) -> data = data ;
		}//endelseif
		ptr = &(*ptr) -> next ;
	}//endwhile
}//endvoidSwapNode





