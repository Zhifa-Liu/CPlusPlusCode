#pragma once
const int SIZE=30;
template <typename T>
class Stack
{
private:
	T elements[SIZE];
	int top=-1;
	void ensureCapacity(int oldCap);
public:
	Stack(int=SIZE);
	~Stack();
	void push(T);
	T pop();
	bool isEmpty();
	bool isFull();
};

template <typename T>
Stack<T>::Stack(int size) {
	elements=new T[size];
}

template <typename T>
Stack<T>::~Stack() {
	delete[] elements;
}

template <typename T>
void Stack<T>::push(T element) {
	if (isFull()) {
		ensureCapacity(top);
	}
	top++;
	elements[top] = element;
}

template <typename T>
T Stack<T>::pop() {
	if (isEmpty()) {
		return NULL;
	}
	T& p=elements[top];
	top--;
	return p;
}

template <typename T>
bool Stack<T>::isFull() {
	if (sizeof(elements)==top) {
		return true;
	}
	return false;
}

template <typename T>
bool Stack<T>::isEmpty() {
	if (top==-1) {
		return true;
	}
	return false;
}

template <typename T>
void Stack<T>::ensureCapacity(int oldCap) {
	T* newElements = new T[oldCap];
	for (int i = 0;i < top;i++) {
		newElements[i] = elements[i];
	}
	elements = new T[oldCap * 2 + 1];
	for (int i = 0;i < top;i++) {
		elements[i] = newElements[i];
	}
	delete[] newElements;
}
