#include <stdio.h>  // Badala ya iostream

// 1. PROTOTYPE
int add(int a, int b);
int multiply(int a, int b);
void greet();

int main(){
    // 3. CORE / CALLING
    greet();
    
    int x = 10, y = 5;
    
    int sum = add(x, y);
    printf("Sum = %d\n", sum); // printf badala ya cout
    
    int prod = multiply(x, y);
    printf("Product = %d\n", prod);

    return 0;
}

// 2. DEFINITION
int add(int a, int b){
    return a + b;
}

int multiply(int a, int b){
    return a * b;
}

void greet(){
    printf("=== My 3 Functions Program ===\n");
}