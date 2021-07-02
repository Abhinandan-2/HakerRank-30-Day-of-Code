#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) {
        vector<int> a;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                a.push_back(i);
                a.push_back(n/i);
            }
        }   
       sort(a.begin(),a.end());
       int h = a.size();
       int sum=0;
       for(int i=0;i<h-1;i++)
       {
           
           if(a[i]!=a[i+1])
           {
               sum+=a[i];
           }
       }
    
       sum+=a[h-1];
       return sum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}