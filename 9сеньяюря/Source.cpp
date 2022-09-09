#include<iostream>
using namespace std;

class Book
{
	char* name;
	int pages;
public:
	Book();
	Book(const char* n);
	Book(const char* n, int p); // реализовать делегирование!!!
	void Print();
	~Book();
};



Book::Book()
{
	name = nullptr;
	pages = 0;
}

Book::Book(const char* n) {
	
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	
}
Book::Book(const char* n, int p):Book(n){
		pages = p;
	
}

void Book::Print()
{
	cout << "Book Name " << name;
	cout << endl << "Page number " << pages;
}

Book::~Book()
{
	delete[]name;
}

class Student
{
	char* name;
	const double step;// !!
	Book book; //!!!
public:
	Student() :step(0), book(nullptr, 0)
	{

	}
	Student(const char* n, double st, const char* bookName, int bookPages);// использовать инициализаторы!!!
	~Student();
	void Print();

};


Student::~Student()
{
}

void Student::Print()
{
}

// показать использование объектом в функции main
int main()
{
	Book obj1("Iban",15);
	obj1.Print();
	
	
}


