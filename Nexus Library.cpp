#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Book {
public: 
string name;
string author;
string genre;
bool availability;

public:
Book(string bookName, string bookAuthor, string bookGenre, bool bookAvailability){
bookName= name;
bookAuthor= author;
bookGenre = genre;
bookAvailability=availability;
}

};

class Shelves{

public:
string genre;
vector<Shelves> shelf; 
Book newBook;

Shelves(string shelfGenre, vector<Shelves> bookShelf ){
shelfGenre = genre;
bookShelf= shelf;
}

void addBook(){
    string title;
    string author;
    string genre;
    bool availability;
    
    cout << "Enter the book title: ";
    cin >> title;

    cout <<  "Enter the book author: ";
    cin>>author;

    cout<< "Enter the book genre: ";
    cin>> genre;

     cout<< "Set the book book availability: ";
    cin>> availability;

    Book newBook(title, author, genre, availability);
}
};