#include <iostream>
using namespace std;

// 1. Function Prototype
int addMarks(int a, int b, int c);
float calcAverage(int total);
char getGrade(float avg);
void displayResult(int total, float avg, char grade);

int main(){
    int math, eng, sci;
    cout<<"Enter Math, Eng, Sci marks: ";
    cin>>math>>eng>>sci;

    int total = addMarks(math, eng, sci); // calling function with args
    float avg = calcAverage(total);
    char grade = getGrade(avg);

    displayResult(total, avg, grade); // function with no return

    return 0;
}

// 2. Function Definition - With args, With return
int addMarks(int a, int b, int c){
    return a + b + c;
}

// 3. Function - Calculate Average
float calcAverage(int total){
    return total / 3.0;
}

// 4. Function - Return Grade
char getGrade(float avg){
    if(avg>=70) return 'A';
    else if(avg>=60) return 'B';
    else if(avg>=50) return 'C';
    else if(avg>=40) return 'D';
    else return 'E';
}

// 5. Function - No return, just display
void displayResult(int total, float avg, char grade){
    cout<<"\n--- RESULT ---\n";
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Grade: "<<grade<<endl;
}