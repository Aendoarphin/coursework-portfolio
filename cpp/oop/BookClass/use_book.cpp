#include <iostream>
#include "book_header.h"
using namespace std;


int main()
{
	Book* my_book = new Book(); //create a pointer to Book object "my_book" and
	my_book->turn_page(10);     //use new command to initialize object
	my_book->set_title("autumn leaves");
	my_book->set_author("john coltrane");
	cout << "---------------- my_book: ----------------" << endl;
	cout << "title = " << my_book->get_title() << endl;
	cout << "author = " << my_book->get_author() << endl;
	cout << "page = " << my_book->get_page() << endl;
	cout << endl;
	Book* my_book2 = new Book(100, "jennie", "solo");
	my_book2->turn_page(101);
	Book* my_book3 = new Book("bob", "all along the watchtower");//sets page to default
	my_book3->turn_page(51);
	cout << "---------------- my_book2: ----------------" << endl;
	cout << "title = " << my_book2->get_title() << endl;
	cout << "author = " << my_book2->get_author() << endl;
	cout << "page = " << my_book2->get_page() << endl;

	delete my_book;
	delete my_book2;
	delete my_book3;
	//stack			   heap

	/*from the header
	int get_page();
		void turn_page(int what_page);
		string get_title();
		void set_title(string the_title);
		string get_author();
		void set_author(string the_author);
		Book();
		Book(int star_page, string the_author, string the_title);
		Book(string the_author, string the_title);*/

	return 0;
}