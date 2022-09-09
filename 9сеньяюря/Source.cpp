#include<iostream>
using namespace std;

class Book
{
	char* name;
	int pages;
public:
	Book();
	Book(const char* n);
	Book(const char* n, int p); 
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
	const double step;
	Book book; 
public:
	Student() :step(0), book(nullptr, 0)
	{

	}
	Student(const char* n, double st, const char* bookName, int bookPages) : step(st), book(bookName, bookPages) {
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);

		cout << endl << "BookName: " << bookName;
		cout << endl << "Pages: " << bookPages;

	};
	
	~Student();
	void Print();

};


Student::~Student()
{
	delete[]name;
}

void Student::Print()
{
	cout << endl << "Stud.Name: " << name;
	cout << endl << "Step: " << step;

}


int main()//константные поля инициали3ированы и делегирование
{
	Book obj1("little nightmares",15);
	Student obj2("Grigor", 1500, "little nightmares",15);
	obj2.Print();
	
	
	
}


