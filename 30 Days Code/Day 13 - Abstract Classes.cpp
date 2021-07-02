#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};


class MyBook : public Book 
{
    private:
         int cd ;
    public:
    MyBook (string a , string b , int c) :
    Book(a,b),
    cd(c) {} 
    void display() override
    {
        cout<<"Title: "<<title;
        cout<<"\nAuthor: "<<author;
        cout<<"\nPrice: "<<cd;
        
    }
    
};
    
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
