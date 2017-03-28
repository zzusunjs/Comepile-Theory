#ifndef _sstack_cpp_
#define _sstack_cpp_
#include <cstddef>
#include <stdlib.h>
#include <stdio.h>
#include "sstack.h"

// 栈的实现文件 
_stack::_stack(){
    length = 0;
    top = NULL;	
}
_stack::~_stack(){
	while(!isEmpty()){
		this->sPop();
	}
}


bool _stack::isEmpty(){
	
	if(this->top == NULL || length == 0){
		return true;
	}else{
		return false;
	}
}
void _stack::sPush(int x){
	
	node * np = (node *)malloc(sizeof(node));
	if(np == NULL){
		return;
	}
	np->con = x;
	if(this->top == NULL){           //first time
		np->pre = NULL;
		np->next = NULL;
		this->top =  np;
	}else{
		node * te = NULL;
		te = this->top;
		te->pre =  np;
		np->next = te;
		this->top = np;
		
	}
	length++;
	return ;
}
int _stack::sPop(){
	
	int ansx = 0;
	if(this->top != NULL){
		node * te = this->top;
		ansx = (this->top)->con;
		this->length --;
		this->top = te->next;
		free(te);
	}else{
		
	}
	return ansx;
}
int _stack::sTop(){
	
	int ansx = 0;
	if(this->top != NULL){
		ansx = (this->top)->con;
	}
	return ansx;
}
int _stack::getLength(){
	return length;
}

#endif
