#ifndef _sstack_H_
#define _sstack_H_

#include "bianyi.h"
/*
	Name: 
	Copyright: 
	Author: 
	Date: 03/03/17 18:35
	000Description: 

*/
// ����ջ�����ݽṹ 
class _stack{
	
	 private:
	 	node * top;
	 	int length ;
	 
	 public:
	 	bool isEmpty();
	 	void sPush(int x);
	 	int sPop();
	 	int sTop();
	 	int getLength();
	 	
	public :
		_stack();
		~_stack();
}; 

#endif
