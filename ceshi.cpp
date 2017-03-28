#include <stdio.h>
#include <iostream>
using namespace std;
#include "bianyi.cpp"
#include "bianyi.h"
#include "sstack.h"
#include "sstack.cpp"
#include "squeue.h"
#include "squeue.cpp"

int main(){
	
	// Á´±í²âÊÔ³ÌÐò 
	Linkedlist* shoes = new Linkedlist();
    bool btemp = shoes->addNode(1);
	//cout << hats  << endl;
    for(int i=2; i<=10; ++i){
    	shoes->addNode(i);
    }
    cout << "getLength() " << shoes->getLength() << endl;
    cout << "getHead() " << (shoes->getHead())->con << endl;
    cout << "getTail() " << (shoes->getTail())->con << endl;
    node * temp = shoes->searchList(3);
    cout << "searchList() " << temp->con << endl;
    shoes->deleteNode(temp);
    
    temp = shoes->getHead();
    while( temp!= NULL){
    	cout << temp->con << endl;
    	temp = temp->next;
    }
    cout << "***********************************************\n";
    // Õ¾²âÊÔ³ÌÐò 
    _stack pants;
	for(int i=1; i<=10; i+=1){
		pants.sPush(i);
	}
	
	cout << "getLength() " <<  pants.getLength() << endl;
	int x;
	while(!pants.isEmpty()){
		x = pants.sTop();
		pants.sPop();
		cout << x << endl; 
	}
	cout << "***********************************************\n";
	//  ¶ÓÁÐ²âÊÔ³ÌÐò
	squeue hats;
	for(int i=1; i<=10; i+=1){
		hats.pushBack(i);
	}
	cout << "getLength() " << hats.getLength() << endl;
	cout << "getFront()" << hats.getFront() << endl;
	
	while(!hats.isEmpty()){
		cout << hats.popFront() << endl;
	} 


    return 0;
} 
