#include <iostream>

using namespace std;

class Book
{

public:
    string title;
    string author;
    int publishedYear;

    Book(string t, string a, int p)
    {
        title = t;
        author = a;
        publishedYear = p;
    }
};

int main()
{
    Book books[3]{
        Book("book1", "author1", 1987),
        Book("book2", "author2", 1990),
        Book("book3", "author3", 2000),
    };
    for (int i = 0; i < 3; i++)
    {
        cout << "Book " << i + 1 << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Published Year: " << books[i].publishedYear << endl;
        cout << endl;
    }

    return 0;
}