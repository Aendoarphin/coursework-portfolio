#include <iostream>
#include <fstream>
#include <string>	//string is an object and can adjust size,
using namespace std;	//we technically dont know how big string is
			//it can vary in size - we cant use this for writing or reading binary files 
			//we have to use old style char arrays as strings in binary files
			//char mystring[80]; int myarray[10]


int main()
{
	ofstream the_binary_outfile; the_binary_outfile.open("whatever.binary", ios::out | ios::binary); 
	char ch = 'x'; char ch2 = 'a';
	the_binary_outfile.write(&ch, sizeof(ch));
	the_binary_outfile.write(&ch2, sizeof(ch));
	the_binary_outfile.close();

	ifstream the_binary_infile;
	the_binary_infile.open("whatever.binary", ios::in | ios::binary);
	char the_input_char; char the_input_char2;
	the_binary_infile.read(&the_input_char, sizeof(the_input_char));
	the_binary_infile.read(&the_input_char2, sizeof(the_input_char2));
	the_binary_infile.close();

	cout << "the_input_char = " << the_input_char << endl;
	cout << "the_input_char2 = " << the_input_char2 << endl;

	//lets write a file with 1 integer:
	//1278 is one integer
	//gotta use the weird way >>>> (reinterpret_cast<char*>(&var), sizeof(var));
	int x = 1278;
	ofstream the_binary_outfile2;
	the_binary_outfile2.open("binary_example2.binary2", ios::out | ios::binary);
	the_binary_outfile2.write(reinterpret_cast <char*>(&x), sizeof(x));
	the_binary_outfile2.close();
	int x_read;

	ifstream the_binary_infile2; int x2;
	the_binary_infile2.open("binary_example2.binary2", ios::in | ios::binary);
	the_binary_infile2.read(reinterpret_cast<char*>(&x2), sizeof(x2));
	the_binary_infile2.close();
	cout << "x2 = " << x2 << endl;

	return 0;
}                                                                                                                                                                                                                                                                                                                                              void swap(string& a, string& b)
{
    string temp = a;
    a = b;
    b = temp;
}
//***************************************************************
// The binarySearch function performs a binary search on a      *
// string vector. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its vector subscript is returned. Otherwise, -1 is    *
// returned indicating the value was not in the vector.         *
//***************************************************************
int binarySearch(const vector<string>& v, string str)
{
    int first = 0,             // First vector element
        last = v.size() - 1,   // Last vector element
        middle,                // Mid point of search
        position = -1;         // Position of search value
    bool found = false;        // Flag
    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculate mid point
        if (v[middle] == str)        // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (v[middle] > str)    // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;      // If value is in upper half
    }
    return position;
}

/*Pt 2 Question: For linear search, is there a statistically significant difference 
if the list of items to search is already in sorted order?  Why or why not?*/

/*ANSWER: There is no significant difference when using linear search because
there are no duplicate items within the vector, and linear search (unlike binary search) 
does not require a precondition of a sorted vector. Therefore, the linear search will accept
the first instance of the user's entered value regardless of any duplicates after the index*/