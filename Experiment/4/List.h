#pragma once 

#include<iostream>
using namespace std;

template<class T> 
class List {
protected:
	struct Node {
		Node* pNext;
		T* pT;
	};
	Node* pFirst;  //链首结点指针
public:
	List();  //构造函数
	void Add(T&);  //在Link表头添加新结点
	void Remove(T&);  //在Link中删除含有特定值的元素
	T* Find(T&);  //查找含有特定值的结点
	void PrintList();  // 打印输出整个链表
	~List();
};

template<class T>
List<T>::List() {
}

template<class T>
List<T>::~List() {
	Node* cur = pFirst;
	while (cur!=NULL) {
		pFirst = cur->pNext;
		delete cur;
		cur = pFirst;
	}
}

template<class T>
void List<T>::Add(T& t) {
	if (pFirst!=NULL) {
		Node* newNode = new Node();
		newNode->pT = &t;
		newNode->pNext = pFirst;
		pFirst = newNode;
	}
	else {
		pFisrt = new Node();
		pFirst->pT = &t;
	}
}

template<class T>
void List<T>::Remove(T& t) {
	Node* cur = pFirst;
	if (cur->pT==&t) {
		cur = cur->pNext;
	}
	Node* curNext = cur->pNext;
	while (curNext!=NULL) {
		if (curNext->pT==&T) {
			cur->pNext = curNext->pNext;
			delete curNext;
			return;
		}
		cur = curNext;
		curNext = cur->Next;
	}
}

template<class T>
T* List<T>::Find(T&) {
	Node* cur = pFirst;
	while (cur!=NULL) {
		if (cur->pT==&T) {
			return cur->pT;
		}
		cur = cur->pNext;
	}
	return NULL;
}

template<class T>
void List<T>::PrintList() {
	Node* cur = pFirst;
	if (cur==NULL) {
		cout << "Empty List";
	}
	while (cur != NULL) {
		cout << cur;
		cur = cur->pNext;
	}
}

