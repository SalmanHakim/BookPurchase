#include <iostream>
#include <iomanip>
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

public:
    Teacher(string a, string b, string c) {
        Name names(a, b);
        address = c;
        numBook = 0;
        Book books[];
    }
    void buy(Book a);
    void print();
};
