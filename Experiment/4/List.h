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
	Node* pFirst;  //���׽��ָ��
public:
	List();  //���캯��
	void Add(T&);  //��Link��ͷ����½��
	void Remove(T&);  //��Link��ɾ�������ض�ֵ��Ԫ��
	T* Find(T&);  //���Һ����ض�ֵ�Ľ��
	void PrintList();  // ��ӡ�����������
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

