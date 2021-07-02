#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    
      Student(string a, string b , int c, vector<int> p) :
        Person(a,b,c),
        testScores(p){}
        char calculate()
        {
            int sum=0;
            int n = testScores.size();
            for(int i=0;i<n;i++)
            {
                sum+=testScores[i];
            }
            double d = (sum*1.0)/n;
            if(d>=90&&d<=100)
            return 'O';
            if(d>=80&&d<90)
            return 'E';
            if(d>=70&&d<80)
            return 'A';
            if(d>=55&&d<70)
            return 'P';
            if(d>=40&&d<55)
            return 'D';
            if(d<40)
            return 'T';
            return 'y';
        }
      
    
        
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}