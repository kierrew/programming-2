#include "Node.h"

//default constructor 
Node::Node(){
	next = NULL;
}

//constructor
Node::Node(EMP e_param){
	e = e_param;
}
//constructor
Node::Node(EMP e_param, Node* next){
	e = e_param;
	this-> next;
}
