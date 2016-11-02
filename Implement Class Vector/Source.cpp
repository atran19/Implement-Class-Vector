/////////////
//Anna Tran
//CS 172 Sec 1
//12.8
/////////////

#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Vector{
public:
	Vector();
	Vector(int size);
	Vector(int size, T defaultValue);
	void push_back(T element);
	void pop_back();
	unsigned const size();
	T const at(int index);
	bool const empty();
	void clear();
	void swap(Vector v2);
private:
	T elements[];
	double capacity;
};

template <typename T>
Vector<T>::Vector()
{

}
template<typename T>
Vector<T>::Vector(int size)
{
	capacity = 0;
}
template<typename T>
Vector<T>::Vector(int size, T defaultValue)
{
	capacity[] = T;
}
template<typename T>
void Vector<T>::push_back(T element)
{
	 elements[capacity++];
}
template<typename T>
void Vector<T>::pop_back()
{
	elements[--capacity];
}
template<typename T>
unsigned const int Vector<T>::size()
{
	return capacity;
}
template<typename T>
T const Vector<T>::at(int index)
{
	return elements[index];
}
template<typename T>
bool const Vector<T>::empty()
{
	return capacity == 0;
}
template<typename T>
void Vector<T>::clear()
{
	return capacity = 0;
}
template<typename T>
void Vector<T>::swap(Vector v2)
{
//setup temp to hold v2 and swap
	T temp[];
	int tempsize = v2.size();
	for (int i == 0; i < v2.size(); i++)
		temp[i] = v2.at[i]
//Clear v2 
		v2.clear();
//put values of temp into v2
	for (int i = 0; i < size; i++)
		v2.push_back(a(i));
//clear temp
	clear();
//put values of v2 into temp
	for (int i = 0; i < tempsize; i++)
		push_back(temp[i]);
}
	
