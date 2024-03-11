#include <iostream>
#include <iomanip>
#include "class.cpp"
using namespace std;

int main () 
{
    Teacher teach("Fatah", "Amin", "Muar, Johor");
    Book b1("Mathematic", "Exercise", 7.8);
    Book b2("Biology", "Textbook", 12.5); 
    Book b3("Physic", "Textbook", 18.4);
    Book b4("Chemistry", "Exercise", 8.9);
    // Book b5("Add Maths", "Exercise", 10);
    // Book b6("French", "Textbook", 30);
    
    teach.buy(b4, 10);
    teach.buy(b2, 13);
    teach.buy(b3, 15);
    teach.buy(b1, 11);
    teach.print();

    return 0;
}