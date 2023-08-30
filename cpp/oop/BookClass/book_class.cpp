#include "book_header.h"

int Book::get_page()
{
	return page;
}
void Book::turn_page(int what_page)
{

}
string Book::get_title()
{
	return title;
}
string Book::get_author()
{
	return author;
}
void Book::set_title(string the_title)
{
	title = the_title;
}
void Book::set_author(string the_author)
{
	author = the_author;
}
Book::Book()
{
	page = 10; title = ""; author = "";
}
Book::Book(int start_page, string the_author, string the_title)
{
	page = start_page; author = the_author; title = the_title;
}
Book::Book(string the_author, string the_title)
{
	page = 1; author = the_author; title = the_title;
}
