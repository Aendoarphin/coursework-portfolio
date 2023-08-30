#include iostream
#include string

using namespace std;

class Book
{
public
	Book();
	Book(int what);
	int operator+(const Book& other_book);
	int operator-(const Book& other_book);
	int get() const;
private
	int what;
};
BookBook(int what) { this-what = what; }
BookBook() { what = 0; }
int Bookoperator+(const Book& other_book) { return other_book.get() + get(); }
int Bookoperator-(const Book& other_book) { return get() - other_book.get(); }
int Bookget() const { return what; }

class MysteryBook  Book
{
public
	MysteryBook();
	MysteryBook(int where);
	int get() const;
	void turn_page(int where);
private
	int the_page;
};
MysteryBookMysteryBook() { the_page = 0; }
MysteryBookMysteryBook(int where) { the_page = where; }
int MysteryBookget() const { return the_page; }
void MysteryBookturn_page(int where) { the_page = where; }

class CozyMysteryBook  MysteryBook
{
public
	CozyMysteryBook();
	int get() const;
	void ChangeTitle(int what);
private
	int page;
};
CozyMysteryBookCozyMysteryBook() { page = 0; }
int CozyMysteryBookget() const { return page; }
void CozyMysteryBookChangeTitle(int what) { page = what; }

int main()
{
    // Create a Book object
    Book book1(42);

    // Create a MysteryBook object
    MysteryBook mysteryBook(100);

    // Create a CozyMysteryBook object
    CozyMysteryBook cozyMysteryBook;

    // Perform operations on the objects
    int result1 = book1 + mysteryBook;
    int result2 = mysteryBook - cozyMysteryBook;

    // Display the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;

    return 0;
}

