#include <iostream>
#include <string>
#include <vector>
using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t, string a, string d)
    {
        title = t;
        author = a;
        dueDate = d;
    }

    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    string getDueDate()
    {
        return dueDate;
    }

    void setTitle(string newTitle)
    {
        title = newTitle;
    }
    void setAuthor(string newAuthor)
    {
        author = newAuthor;
    }
    void setDueDate(string newDueDate)
    {
        dueDate = newDueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};

class Book : public LibraryItem
{
    bool issued;

public:
    Book(string t, string a, string d) : LibraryItem(t, a, d)
    {
        issued = false;
    }

    void checkOut() override
    {
        if (issued)
            cout << "Book already issued!\n";
        else
        {
            issued = true;
            cout << "Book checked out successfully.\n";
        }
    }

    void returnItem() override
    {
        if (!issued)
            cout << "Book is not issued.\n";
        else
        {
            issued = false;
            cout << "Book returned successfully.\n";
        }
    }

    void displayDetails() override
    {
        cout << "Type: Book\n";
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Due Date: " << getDueDate() << endl;
        cout << "Status: " << (issued ? "Issued" : "Available") << endl;
    }
};

class DVD : public LibraryItem
{
    int duration;

public:
    DVD(string t, string a, string d, int dur) : LibraryItem(t, a, d)
    {
        if (dur <= 0)
            throw runtime_error("Invalid DVD duration!");
        duration = dur;
    }

    void checkOut() override
    {
        cout << "DVD checked out.\n";
    }

    void returnItem() override
    {
        cout << "DVD returned.\n";
    }

    void displayDetails() override
    {
        cout << "Type: DVD\n";
        cout << "Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Due Date: " << getDueDate() << endl;
        cout << "Duration: " << duration << " minutes\n";
    }
};

int main()
{
    vector<LibraryItem *> libraryItems;
    int choice;

    do
    {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Add DVD\n";
        cout << "3. Display All Items\n";
        cout << "4. Check Out Item\n";
        cout << "5. Return Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                string t, a, d;
                cin.ignore();
                cout << "Enter Title: ";
                getline(cin, t);
                cout << "Enter Author: ";
                getline(cin, a);
                cout << "Enter Due Date: ";
                getline(cin, d);

                libraryItems.push_back(new Book(t, a, d));
                cout << "Book added successfully.\n";
            }
            else if (choice == 2)
            {
                string t, a, d;
                int dur;
                cin.ignore();
                cout << "Enter Title: ";
                getline(cin, t);
                cout << "Enter Author: ";
                getline(cin, a);
                cout << "Enter Due Date: ";
                getline(cin, d);
                cout << "Enter Duration: ";
                cin >> dur;

                libraryItems.push_back(new DVD(t, a, d, dur));
                cout << "DVD added successfully.\n";
            }
            else if (choice == 3)
            {
                for (size_t i = 0; i < libraryItems.size(); i++)
                {
                    cout << "\nItem " << i + 1 << ":\n";
                    libraryItems[i]->displayDetails();
                }
            }
            else if (choice == 4)
            {
                int index;
                cout << "Enter item number: ";
                cin >> index;
                libraryItems.at(index - 1)->checkOut();
            }
            else if (choice == 5)
            {
                int index;
                cout << "Enter item number: ";
                cin >> index;
                libraryItems.at(index - 1)->returnItem();
            }
        }
        catch (exception &e)
        {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 6);

    for (auto item : libraryItems)
    {
        delete item;
    }

    cout << "Program Ended.\n";
    return 0;
}
