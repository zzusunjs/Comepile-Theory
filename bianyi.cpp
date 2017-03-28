#ifndef _BIAN_YI_CPP
#define _BIAN_YI_CPP
#include "bianyi.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
/**
链表定义的实现文件 
*/
Linkedlist :: Linkedlist(){
	
	length = 0;
	head = NULL;
	tail = NULL;
}
Linkedlist :: ~Linkedlist(){
	node * te = head;
	while(te){
		te = (*te).next;
		free( (*te).pre );         // free the memory
	}
}
int Linkedlist :: getLength(){
	return this->length;
}
node * Linkedlist :: getHead(){
	return this->head;
}
node * Linkedlist :: getTail(){
	return this->tail;
}
void Linkedlist :: setHead(node * te){
	 this->head = te;
	 if(te == NULL){
	 	this->length = 0;
	 }
	 return;
}
void Linkedlist :: setTail(node * te){
	this->tail = te;
	return;
}
bool Linkedlist :: addNode(int x){
	 
	 
	 node * te =  (node *)malloc(sizeof(node));
	 if(te == NULL) {
	     return false;     	
	 }else{
	 	(*te).con = x;
	 	te->next = NULL;
	 	te->pre = NULL;
	 }                    // generate the node
	 
	// cout << "test " << endl;
	 if(tail == NULL){   // first time
	   //cout << "test 00" << endl;
	 	this->head = te;
	 	this->tail = te;
	 	//cout << "test 01" << endl;
	 }else{
	 	//cout << "test 02" << endl;
	 	tail->next = te;
	 	te->pre = tail;
	 	te->next = NULL;
	 	this->tail = te;
	 	//cout << "test 03" << endl;
	 }
	 //cout << "test 04 \n";
	 this->length++;
	 //cout << "test 05 \n";
	return true;
}
int Linkedlist :: deleteNode(node * te){

    int ansx;	 
	if(te != NULL){
	    
		if( tail == NULL || head == NULL || length == 0 ){
			return -1;
		}else{
			node * prer = (*te).pre;
			node * nextr =  (*te).next;
			
			(*prer).next = nextr;
			(*nextr).pre =  prer;
			
			length--;
			ansx = (*te).con;
			free(te);
		}
	}
	
	return ansx;
}

node * Linkedlist :: searchList(int x){
	  
	   node * ansx = NULL;
	   if(head == NULL || tail == NULL || length == 0){
	   	 return ansx;
	   }else{
	   	  ansx = head;
	   	  while(ansx != NULL){
	   	  	 if((*ansx).con == x){
	   	  	 	return ansx;
	   	  	 }else{
	   	  	 	ansx = (*ansx).next;
	   	  	 }
	   	  }
	   }
	   return ansx;
}

/*************************************************/

#endif

