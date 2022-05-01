#include <bits/stdc++.h>
using namespace std;
// structures with it's tricks
/*struct employee
{
    string name;
    double salary;
};
int main ()
{
    employee ibm[3]; // created
    for (int i=0 ; i<3;i++)
        cin>>ibm[i].name>>ibm[i].salary;
    for (int i=0;i<3;i++)
    {  cout<<"Name: "<<ibm[i].name<<endl;
    cout<<"Salary: "<<ibm[i].salary<<endl;}
}
*/
/*
struct employee{
    string name;
    double salary;
    int lucky_numbers[3];
};
void print(employee &emp)
{
    cout<<emp.name<<" has salary "<<emp.salary<<"k"<<endl;
    cout<<"his lucky numbers are: ";
    for (int i=0;i<3;i++) {
        cout <<emp.lucky_numbers[i]<<" ";
    }
}
int main ()
{
    employee ali = {"3adel shkl", 102.2, {10,2,7}};
    print(ali);
    // 3adel shkl his salary 120.2
    // his lucky_numbers are 10 2 7
}*/
// working with pointers
/*struct employe
{
    string name;
    int salary;
};
int main()
{
    employe* emp = NULL;
    emp = new employe;
    // access  using arrow operator not dot operator.
    emp->name = "mohamed";
    emp->salary= 150;
    cout<<"The Name: "<<emp->name<<" and his Salary: "<<emp->salary<<endl;
    //delete emp; // otherwise, similiar to primitives
}*/
/*
struct employe
{
    string name;
    int salary;
    int position;
};
// cmp functoin
// writing wrong funcotion may cause RTE
// when returning true, means first object must come before second one
// if we called cmp(a, b) and returned true, never have cmp(b,a) = true
// if a == b, then both cmp(a, b) and cmp(b, a) must give false
bool cmp(const employe &first, const employe &second)// compare function
{   // the right comparison should be field by field based on your priority
    // if first NOT equal, then it determine the answer
    if(first.salary != second.salary)
        // let bigger salary be preffered
        return first.salary > second.salary;
    // now name to name
    if(first.name!= second.name)
        return first.name < second.name;
    // now the remaining is the position, directily compare with no condition
    return first.position < second.position;
}
int main() {
    employe emps[3] = {{"ali",120,1},
                       {"ahmed",150,2},
                       {"mohamed",170,1}};
    // cmp fuction: let sort based on, bigger salary,
    // if tie smaller name, if tie smaller position
    sort(emps, emps+3, cmp);
    for (int i = 0; i < 3; i++) {
        employe &emp = emps[i];
        cout << emp.salary << " " << emp.name << " " << emp.position<< endl;
    }
}
*/
// pointer to function
/*
int sum(int a, int b)
{
    return a + b;
}
int mul(int a, int b)
{
    return a*b;
}
// pointer to function that takes two integers
int (*functionptr)(int ,int);
int compute(int a, int b, int (*functionptr)(int ,int))
{
    return  (*functionptr)(a,b);
}
int main()
{
    functionptr = &sum; // address to fuction
    int val = (*functionptr)(2,5);
    int val1 = (*functionptr)(3,2);
    val = compute(2,5, mul);
    val1 = compute(2,3,sum);
    cout<<"val is: "<<val<<endl;
    cout<<"val1 is: "<<val1<<endl;
    // array of pointers to fucntion
    int (*p[2]) (int x, int y);
    p[0] = sum;
    p[1] = mul;
    val = (*p[0])(3,7);
    return 0;
}*/
// data structure alignment
/*
struct A
{
    char a; // char is 2bit
    char d; // char is 2bit
    int i; // integer is 4bit
    // 4+4 = 8 bits
};
// note the order is different!
struct B
{
    char c; // char is 2 bits
    int i; // integer is 4 bits
    char d; // char is 2 bits
    // 2+2+4+2+2 = 12 bits
};
int main()
{
    cout<<sizeof(A)<<endl; // 8bits
    cout<<sizeof(B)<<endl; // 12bits
}
*/
// structure-methods
/*
struct emp {
    string name;
    int salary;

    void setsalary(int value) // method not function
    {
        salary = value;
    }
    void addsalary(int value)
    {
        salary += value;
    }
};
  //void emp::addsalary(int value) { // we can define method outside too
  //salary += value;}
int main()
{
    emp e;  // ( e ) is object of type emp
    cout<<e.salary<<endl; // garbage, we may be lucky and get zero (arbitary number from memory)
    e.setsalary(100); // 100
    cout<<e.salary<<endl;
    e.addsalary(50);
    cout<<"new salary is: "<<e.salary<<endl; //150
    return 0;
}
*/
/*
struct emp
{
    string name;
    int salary;
    emp(int my_salary, string my_name) // constructor
    {
        cout<<"creating of new object"<<endl;
        salary = my_salary;
        name = my_name;
    }
    ~emp()
    {// destructor
        cout<<"destroying the obejct"<<endl;
    }
    void print();
};
void emp::print() // function in emp structure to print name and salary
{
    cout<<"Name is: "<<name<<", his salary: "<<salary<<endl;
}
void print()  // function to say hello
{
    cout<<"Function to say Hello:: "<<endl;
}
int main ()
{
    print();
    emp e(11022, "iNightjar");
    e.print();
    cout<<"bye"<<endl;
}*/
// constructors

