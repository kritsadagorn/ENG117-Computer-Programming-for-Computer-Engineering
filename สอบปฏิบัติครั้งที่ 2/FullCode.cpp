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
void ShowBack(struct Node **ptr) ;
void SwapNode(struct Node **ptr,int data,int temp);


int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start , 10) ;
	AddNode(&start , 20) ;
	AddNode(&start , 30) ;
	AddNode(&start , 40) ;
	ShowData(start);
	//UpdateNode(&start, 10, 99) ;
	SwapNode(&start, 20, 30) ;
	ShowData(start) ;
	//UpdateNode(&start, 10, 98);
	SwapNode(&start, 40, 10);
	ShowData(start) ;
	//ShowBack(&start) ;
}

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
		if((*ptr)->data == data) {
			break ;
		}
		ptr = &(*ptr) -> next ;
	}
	if((*ptr) != NULL) {
		(*ptr) -> data = new_data ;
	}
}

void ShowBack(struct Node **ptr) {
	struct Node *back = NULL ;
	struct Node *now = *ptr ;
	struct Node *next = NULL ;
	
	while (now != NULL) {
		next = now->next ;
		now->next = back ;
		back = now ;
		now = next ; 
	}
	ShowData(back) ;
}

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
}





