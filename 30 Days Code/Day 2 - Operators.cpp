#include <bits/stdc++.h>

using namespace std;


void solve(double c, int p, int t) {
     double a = c*p/100;
     double b = c*t/100;
     
     double f = c+a+b;
     
     cout<<round(f);

}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
