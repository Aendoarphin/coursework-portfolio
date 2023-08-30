package Book;

public class Book
{
    Book()
    {
        author = "???"; title = "???"; publisher = "???"; 
        pages = 0; year = 0;
    }
    Book(String theAuth, String theTitle, String thePub, int thePages, int theYear)
    {
        author = theAuth;
        title = theTitle;
        publisher = thePub;
        pages = thePages;
        year = theYear; 
    }
    private String author; private String title; private String publisher; 
    private int pages; private int year;

    public void setAuthor(String what) {author = what; }
    public String getAuthor() {return author;}
        
    public void setTitle(String what) {title = what;}
    public String getTitle() {return title;}
    
    public void setPublisher(String what) {publisher = what;}
    public String getPublisher() {return publisher;}
    
    public void setPages(int what) {pages = what;}
    public int getPages() {return pages;}
    
    public void setYear(int what) {year = what;}
    public int getYear() {return year;}

    public String getAll()
    {
        return "\n" + getAuthor() + "\n" + getTitle() + "\n" 
        + getPublisher() + "\n" + getPages() + "\n" + getYear();
    }
}
