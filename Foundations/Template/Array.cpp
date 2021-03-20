template<class T>
class Array
{
private:
	T* pArray;
	T size;
public:
	Array(int);
	~Array();
	int getSize();
	T& operator[](int i);
};

template<class T>
Array<T>::Array(int si)
{
	size = si;
	pArray = new T[size];
}

template<class T>
Array<T>::~Array()
{
	delete[] pArray;
}

template<class T>
int Array<T>::getSize()
{
	return size;
}

template<class T>
T& Array<T>::operator[](int i)
{
	return pArray[i];
}