#include <iostream>
#include <fstream>
using namespace std;
class Book
{
public:
    void add_book();
    void show_book();
    void delete_book();
};
void Book::add_book()
{
    fstream myfile;
    int no_copy;
    string b_name, a_name, b_id;
    cout << "\n\n\t\t\t\tADD BOOKS";
    cout << "\n\nBook ID : ";
    cin >> b_id;
    cout << "\nBook Name : ";
    cin >> b_name;
    cout << "\nAuthor Name : ";
    cin >> a_name;
    cout << "\nNo. of Books : ";
    cin >> no_copy;
    myfile.open("Book.txt",ios_base::out);
    myfile << " " << b_id << " "
         << b_name << " " << a_name
         << " " << no_copy << "\n";    
}
void Book ::show_book(){
    fstream file;
    int no_copy;
    string b_name, b_id, a_name;
    cout << "\n\n\t\t\t\t\tAll BOOKS";
    // Open the file in input mode
    file.open("Book.txt", ios::in);
    if (!file)
        cout << "\n\nFile Opening Error!";
    else {
        cout << "\n\n\nBook ID\t\tBook"
             << "\t\tAuthor\t\tNo. of "
                "Books\n\n";
        file >> b_id >> b_name;
        file >> a_name >> no_copy;
 
        // Till end of file is reached
        while (!file.eof()) {
 
            cout << "  " << b_id
                 << "\t\t" << b_name
                 << "\t\t" << a_name
                 << "\t\t" << no_copy
                 << "\n\n";
            file >> b_id >> b_name;
            file >> a_name >> no_copy;
        }
        // Close the file
        file.close();
    }
}
int main()
{
    Book b;
    b.add_book();
    b.show_book();
}