#include <iostream>

class vector_t
{
private:
	int * elements_; //указатель на динамический массив
	std::size_t size_; //количество элементов
	std::size_t capacity_; //количсетво выделенной памяти
public:
	vector_t();
	vector_t(vector_t const & other);
	vector_t & operator =(vector_t const & other);
	~vector_t();

	std::size_t size() const; //возвращают значения полей
	std::size_t capacity() const;

	void push_back(int value); //добавление элемента
	void pop_back(); //удаление элемента (если элементов в четыре раза меньше, то сужаем в два раза размер массива

	int & operator [](std::size_t index);
	int operator [](std::size_t index) const;

	bool operator ==(vector_t const & other) const;
};

bool operator !=(vector_t const & lhs, vector_t const & rhs);
