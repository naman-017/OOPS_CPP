#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double





// class animal{
// public:
// 	void walk();
// 	void talk();
// };

// class cat: animal{
// public:
// 	void talk(){
// 		cout << "meow" << endl;
// 	}
// };

// class dog: animal{
// public:
// 	void talk(){
// 		cout << "bark" << endl;
// 	}
// };

//-----------------------------------------------------------------------------------------------------------------------------------

// 	ENCAPSULATION
// class Employee{
// private:
// 	string Name;
// 	string Company;
// 	int Age;
// public:
// 	void setName(string name){
// 		Name=name;
// 	}
// 	string getName(){
// 		return Name;
// 	}
// 	Employee(string name, string company, int age){
// 		Name=name;
// 		Company=company;
// 		Age=age;
// 	}
// };

// int main(){
// 	Employee emp1=Employee("Naman", "Google", 20);
// 	Employee emp2=Employee("Saldina", "IBM", 36);
// 	emp1.setName("Carey");
// 	cout << emp1.getName() << endl;
// }



//--------------------------------------------------------------------------------------------------------------------------------------

//  ABSTRACTION
// class AbstractClass{
// 	virtual void askForPromotion()=0;
// };

// class Employee: AbstractClass{
// private:
// 	string Name;
// 	string Company;
// 	int Age;
// public:
// 	void setName(string name){
// 		Name=name;
// 	}
// 	string getName(){
// 		return Name;
// 	}
// 	void setCompany(string company){
// 		Company=company;
// 	}
// 	string getCompany(){
// 		return Company;
// 	}
// 	void setAge(int age){
// 		Age=age;
// 	}
// 	int getAge(){
// 		return Age;
// 	}

// 	void IntroduceYourself(){
// 		cout << "Name : " << Name << endl;
// 		cout << "Company : " << Company << endl;
// 		cout << "Age : " << Age << endl;
// 	}

// 	Employee(string name, string company, int age){
// 		Name=name;
// 		Company=company;
// 		Age=age;
// 	}

// 	void askForPromotion(){
// 		if(Age>35){
// 			cout << Name << " is promoted!" << endl;
// 		}else{
// 			cout << "Sorry, no promotion for " << Name << endl;
// 		}
// 	}
// };

// int main(){
// 	Employee emp1=Employee("Naman", "Google", 20);
// 	Employee emp2=Employee("saldina", "IBM", 36);
// 	emp1.IntroduceYourself();
// 	emp1.askForPromotion();
// 	emp2.askForPromotion();

// 	return 0;
// }


//--------------------------------------------------------------------------------------------------------------------------------------

// INHERITANCE
// class AbstractClass{
// 	virtual void askForPromotion()=0;
// };
// class Employee: AbstractClass{
// private:
// 	string Name;
// 	string Company;
// 	int Age;
// public:
// 	void setName(string name){
// 		Name=name;
// 	}
// 	string getName(){
// 		return Name;
// 	}
// 	void setCompany(string company){
// 		Company=company;
// 	}
// 	string getCompany(){
// 		return Company;
// 	}
// 	void setAge(int age){
// 		Age=age;
// 	}
// 	int getAge(){
// 		return Age;
// 	}

// 	void IntroduceYourself(){
// 		cout << "Name : " << Name << endl;
// 		cout << "Company : " << Company << endl;
// 		cout << "Age : " << Age << endl;
// 	}

// 	Employee(string name, string company, int age){
// 		Name=name;
// 		Company=company;
// 		Age=age;
// 	}

// 	void askForPromotion(){
// 		if(Age>35){
// 			cout << Name << " is promoted!" << endl;
// 		}else{
// 			cout << "Sorry, no promotion for " << Name << endl;
// 		}
// 	}
// };

// class Developer: public Employee{
// public:
// 	string FavProgrammingLanguage;
// 	Developer(string name, string company, int age, string favProgrammingLanguage)
// 		:Employee(name, company, age){
// 			FavProgrammingLanguage=favProgrammingLanguage;
// 	}
// 	void FixBugs(){
// 		cout << getName() << " fix bugs in " << FavProgrammingLanguage << endl;
// 	}
// };

// class Teacher: public Employee{
// public:
// 	string Subject;
// 	void PrepareLesson(){
// 		cout << getName() << " is preparing " << Subject << " lesson" << endl;
// 	}
// 	Teacher(string name, string company, int age, string subject)
// 		:Employee(name, company, age){
// 			Subject=subject;
// 	}
// };

// int main(){
// 	Developer emp1=Developer("Naman", "Google", 20, "C++");
// 	Teacher t=Teacher("Saldina", "CodeBeauty", 36, "OOPS");
// 	t.PrepareLesson();
// 	t.askForPromotion();

// 	return 0;
// }



//--------------------------------------------------------------------------------------------------------------------------------------


// POLYMORPHISM
// class AbstractClass{
// 	virtual void askForPromotion()=0;
// };
// class Employee: AbstractClass{
// private:
// 	string Name;
// 	string Company;
// 	int Age;
// public:
// 	void setName(string name){
// 		Name=name;
// 	}
// 	string getName(){
// 		return Name;
// 	}
// 	void setCompany(string company){
// 		Company=company;
// 	}
// 	string getCompany(){
// 		return Company;
// 	}
// 	void setAge(int age){
// 		Age=age;
// 	}
// 	int getAge(){
// 		return Age;
// 	}

// 	void IntroduceYourself(){
// 		cout << "Name : " << Name << endl;
// 		cout << "Company : " << Company << endl;
// 		cout << "Age : " << Age << endl;
// 	}

// 	Employee(string name, string company, int age){
// 		Name=name;
// 		Company=company;
// 		Age=age;
// 	}

// 	void askForPromotion(){
// 		if(Age>35){
// 			cout << Name << " is promoted!" << endl;
// 		}else{
// 			cout << "Sorry, no promotion for " << Name << endl;
// 		}
// 	}
// 	void Work(){
// 		cout << Name << " is checking emails, backlogs tasks " << endl;
// 	}
// };

// class Developer: public Employee{
// public:
// 	string FavProgrammingLanguage;
// 	Developer(string name, string company, int age, string favProgrammingLanguage)
// 		:Employee(name, company, age){
// 			FavProgrammingLanguage=favProgrammingLanguage;
// 	}
// 	void FixBugs(){
// 		cout << getName() << " fix bugs in " << FavProgrammingLanguage << endl;
// 	}
// 	void Work(){
// 		cout << getName() << " is coding in " << FavProgrammingLanguage << endl;
// 	}
// };

// class Teacher: public Employee{
// public:
// 	string Subject;
// 	void PrepareLesson(){
// 		cout << getName() << " is preparing " << Subject << " lesson" << endl;
// 	}
// 	Teacher(string name, string company, int age, string subject)
// 		:Employee(name, company, age){
// 			Subject=subject;
// 	}
// 	void Work(){
// 		cout << getName() << " is Teacher " << Subject << endl;
// 	}
// };

// int main(){
// 	Developer d=Developer("Naman", "Google", 20, "C++");
// 	Teacher t=Teacher("Saldina", "CodeBeauty", 36, "OOPS");
// 	Employee e=Employee("Jack", "Narula Tech", 40);
// 	t.Work();
// 	d.Work();
// 	e.Work();


// 	return 0;
// }
