#ifndef _squeue_cpp_
#define _squeue_cpp_
#include <cstddef>
#include <stdlib.h>
#include "squeue.h"

// 队列的实现 
squeue::squeue(){
	length = 0;
	head = NULL;
	tail = NULL;
	
}
squeue::~squeue(){
	
	while(!isEmpty()){
		this->popFront();
	}
}
int squeue::getLength(void){
	return length;
}
node * squeue::getHead(void){
	return head;
}
node * squeue::getTail(void){
	return tail;
}
int squeue::getFront(){
	int ansx = -1;
	if(this->head != NULL){
		ansx = (this->head)->con;
	}
	return ansx;
}
int squeue::popFront(){
	int ansx = -1;
	if(this->head == NULL || length == 0 ){
		return ansx;
	}else{
		node * te = NULL;
		ansx = (this->head)->con;
		te = this->head;
		this->head = te->next;
		free(te);
		length--;
		
	}
	return ansx;
}
bool squeue::isEmpty(){
	if(head == NULL || length == 0){
		return true;
	} else{
		return false;
	}
}
void squeue::pushBack(int x){
	 
	node * te = NULL;
	te = (node*)malloc(sizeof(node));
	if(te != NULL){
		te->con = x;
		te->next = NULL;
		te->pre = NULL;
	}else{
		return;
	}                               // generate the node
	
	if(this->tail == NULL){         // first time
	   this->head = te;
	   this->tail =  te;
	   length++; 
	}else{
		node * temp = this->tail;
		temp->next =  te;
		te->pre =  temp;
		this->tail = te;
		length ++; 
	}
	return;
}










#endif
