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

void UpdateNode(struct Node **ptr,int data,int new_data) ;
void ShowData(struct Node *ptr) ;


int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start , 10) ;
	AddNode(&start , 20) ;
	AddNode(&start , 30) ;
	AddNode(&start , 40) ;
	ShowData(start);
	UpdateNode(&start, 10, 99) ;
	ShowData(start) ;
	UpdateNode(&start, 10, 98);
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

void UpdateNode(struct Node **ptr, int data, int new_data) {
	while(*ptr != NULL) {
		if((*ptr) -> data == data) {
			break ;
		}//endif
		ptr = &(*ptr) -> next ;
	}//endwhile,break
	if((*ptr) != NULL) {
		(*ptr) -> data = new_data ;
	}//endif
}//endUpdateNode






