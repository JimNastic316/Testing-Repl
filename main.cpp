/****************************************************
Author: James Underwood 
Date: 11/25/2019
Description: Trying Repl for first time
*****************************************************/ 
#include <iostream>
#include <vector>
#include<string>
using namespace std;



int main()
{
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector <string> *p4{nullptr};
    string *p5 {nullptr};
    
    cout<<"\nsizeof p1 is: " << sizeof p1<<endl;
    cout<<"sizeof p2 is: " << sizeof p2<<endl;
    cout<<"sizeof p3 is: " << sizeof p3<<endl;
    cout<<"sizeof p4 is: " << sizeof p4<<endl;
    cout<<"sizeof p5 is: " << sizeof p5<<endl;

    
    int score {10};
    double highTemp{100.7};
    
    int *scorePtr{nullptr};
    
    cout<<"Value of score is: "<<score <<endl;
    cout<<"Address of score is: "<<&score <<endl;
    cout<<"Value of scorePtr is: "<<scorePtr <<endl; 
    
    scorePtr=&score;
    
    cout<<"Value of score is: "<<score <<endl;
    cout<<"Address of score is: "<<&score <<endl;
    cout<<"Value of scorePtr is: "<<scorePtr <<endl;
    cout<<"Value of *scorePtr is "<<*scorePtr<<endl;
    
    cout<<"\n------------------------------------------------"<<endl;
    cout<<"Vector\n";
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vectorPtr{nullptr};
    
    vectorPtr=&stooges;  
    
    cout << "First stooge: " <<(*vectorPtr).at(0)<<endl; // Displays Larry
    
    cout<<"Stooges "<< endl;
    for(int i=0; i<stooges.size(); i++)
        cout<<stooges[i]<< " "<<endl;
    return 0;
}


