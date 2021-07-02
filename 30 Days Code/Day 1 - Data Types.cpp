#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string s2;

    cin>>a;
    cin>>b;
    cin.ignore();
    getline(cin, s2);
    cout<<a+i<<endl;
    printf("%.1lf\n",b+d);
    cout << s + s2 << endl;
    
   
    

    return 0;
}