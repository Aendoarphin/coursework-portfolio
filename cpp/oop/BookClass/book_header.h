#include <string>
using namespace std;
class Book
{
	private:
		int page; string author; string title;
		
	public:
		int get_page();
		void turn_page(int what_page);
		string get_title();
		void set_title(string the_title);
		string get_author();
		void set_author(string the_author);
		Book();
		Book(int start_page, string the_author, string the_title);
		Book(string the_author, string the_title);//set page to default



};