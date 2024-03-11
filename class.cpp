#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Book
{
private:
    string name, category;
    double price;
    int quantity;

public:
    Book(){
        name = "";
        category = "";
        price = 0.00;
    }
    Book(string a, string b, double x) {
        name = a;
        category = b;
        price = x;
    }

    string getName() {
        return name;
    }

    string getCategory() {
        return category;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }

    void setQuantity(int x) {
        quantity = x;
    }
};

class Name
{
private:
    string firstName;
    string lastName;

public:
    Name(string a, string b) {
        firstName = a;
        lastName = b;
    }
    string getFullName(){
        return firstName + " " + lastName;
    }
};

class Teacher
{
    
private:
    string address;
    int numBook;
    
    Name names;
    Book *books = new Book[numBook];

public:
    Teacher(string a, string b, string c): names(a, b) {
        address = c;
        numBook = 0;
    }
    void buy(Book a, int x) {
        if (numBook < 10)
        {
            a.setQuantity(x);
            books[numBook] = a;
            numBook++;
        }
        else {
            cout<<"Sorry!! You already reached the maximum number of books purchased."<<endl<<endl;
            return;
        }
        
    }
    void print() {
        double total = 0;

        cout<<"Name\t: "<<names.getFullName()<<endl;
        cout<<"Address\t: "<<address<<endl;
        cout<<"Number of books purchased: "<<numBook<<endl;
        cout<<endl;
        cout<<"No\tProduct Name\t\tCategory\tQuantity\tUnit Price (RM)\t\tAmount (RM)\t"<<endl;
        for (size_t i = 0; i <numBook; i++)
        {
            total += books[i].getPrice()*books[i].getQuantity();

            cout<<i+1<<"\t"<<setw(15)<<left<<books[i].getName()<<"\t\t";
            cout<<books[i].getCategory()<<"\t\t"<<books[i].getQuantity()<<"\t\t\t";
            cout<<setprecision(2)<<fixed<<books[i].getPrice()<<"\t\t\t\t";
            cout<<setprecision(2)<<fixed<<books[i].getPrice()*books[i].getQuantity()<<endl;

        }
        
        cout<<endl<<"Total price\t= RM "<<setprecision(2)<<fixed<<total;
    }

    ~Teacher() {
        delete[] books;
    }
};
