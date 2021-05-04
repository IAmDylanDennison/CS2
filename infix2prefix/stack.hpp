#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    10/2019
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>
#include <iostream>
#include <cassert>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class Node {
	public:

		Node(): data(), next(0) {}; //default

		Node(const T& x): data(x), next(0) {}; //ctor

		T data;
	
		Node<T> *next;

};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
              stack     ();
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T> rhs) {swap(rhs); return *this; }; //overload
	bool      empty     () const;
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

///////////////////////////////////////////////////////////////////////////
//default ctor
template <typename T>
stack<T>::stack() 
{
	tos = 0;

}

//copy ctor
template <typename T>
stack<T>::stack(const stack<T>& rhs) {

	Node<T> *tmp = rhs.tos, 
		*bottom = 0;
	tos = 0;

	while(tmp != 0) {
		if(tos == 0) {
		 
			tos = new Node<T>(tmp->data);
			bottom = tos;
		}
		else {
			
			bottom->next = new Node<T>(tmp->data);
			bottom = bottom->next;
		}

		tmp = tmp->next;
	}
}

//destructor
template <typename T>
stack<T>::~stack() {
	Node<T> *tmp;
	
	while(tos != 0) {
		tmp = tos;
		tos = tos->next;
		delete tmp;
	}
}

//swap
template <typename T>
void stack<T>::swap(stack<T>& rhs) {
	Node<T> *tmp = tos;
	tos = rhs.tos;
	rhs.tos = tmp;
}

//checks if empty
template <typename T>
bool stack<T>::empty() const {
	return tos == 0;
}

//checks if full
template <typename T>
bool stack<T>::full() const {
	Node<T> *tmp = new Node<T>();
	
	if(tmp == 0) {
		return true;
	}
	
	delete tmp;
	return false;
}


template <typename T>
T stack<T>::top() const {
	assert(!empty());
	
	return tos->data;
}

template <typename T>
T stack<T>::pop() {
	assert(!empty());
	
	T result = tos->data;
	Node<T> *tmp = tos;
	tos = tos->next;
	delete tmp;
	
	return result;
}

template <typename T>
void stack<T>::push(const T& elem) {
	assert(!full());

	Node<T> *tmp = new Node<T>(elem);
	tmp->next = tos;
	tos = tmp;
}

#endif





