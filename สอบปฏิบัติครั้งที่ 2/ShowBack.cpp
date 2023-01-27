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
void ShowBack(struct Node **ptr) ;


int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start , 10) ;
	AddNode(&start , 20) ;
	AddNode(&start , 30) ;
	AddNode(&start , 40) ;
	ShowData(start);
	ShowBack(&start);
}//endmain

void ShowData(struct Node *ptr){
	printf("\nData : ") ;
	
	while (ptr != NULL){
		printf( "%d ", ptr -> data) ;
		ptr = ptr -> next ;
	}//endwhile
	printf( " " ) ;
}//endvoidShowData

void ShowBack(struct Node **ptr) {
	struct Node *back = NULL ;
	struct Node *now = *ptr ;
	struct Node *next = NULL ;
	
	while (now != NULL) {
		next = now->next ;
		now->next = back ;
		back = now ;
		now = next ; 
	}//end while
	ShowData(back) ;
}//endvoidShowBack





