#include<iostream>
using namespace std;

class Book{
    private:
    int isbn;
    string title;
    string author;

    public:
    Book(int isbn, string title, string author){
        this->isbn = isbn;
        this->title = title;
        this->author = author;
    }

    void updateTitle(string title){
        this->title = title;
    }

    void print(){
        cout<<isbn<<endl;
        cout<<title<<endl;
        cout<<author<<endl;
    }
};

int main(){
    Book b(1, "Book of author", "Varun");
    b.print();
    b.updateTitle("Book of Tharun");
    b.print();
    return 0;
}

