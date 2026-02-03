#include<stdio.h>
double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
    int a, b, c, d, e;
    double r, s, t, u, v;

    // a) Correct: functionM takes no arguments (void). The return value is simply ignored.
    functionM(); 

    // b) Correct: functionM returns a double, which is assigned to int 'a'. 
    // Note: The decimal portion will be truncated (Implicit Casting).
    a = functionM(); 

    // c) Correct: functionN(int, double). Sending (int, int) works because 
    // the second 'b' is automatically promoted to a double.
    b = functionN(a, b); 

    // d) Correct: Arguments match the prototype: double, int, double, int.
    r = functionO(r, a, s, b); 

    // e) Incorrect: functionP expects 4 arguments, but 5 are provided (a, b, c, d, e).
    s = functionP(a, b, c, d, e); 

    // f) Correct: functionM returns a double, assigned to double 'u'.
    u = functionM(); 

    // g) Potentially Incorrect/Warning: functionN expects (int, double). 
    // You are passing (double, double). 'r' will be forced into an int, losing precision.
    c = d + functionN(r, s); 

    // h) Correct: functionO receives 4 arguments in the correct pattern (double, int, double, int).
    t = s * functionO(r, a, r, a); 

    // i) Incorrect Type Matching: functionP expects (int, int, int, int). 
    // You are passing (double, double, double, double). This causes significant data loss.
    a = v + functionP(r, s, t, t); 

    // j) Correct: This uses a nested call. functionN(a, a) returns an int, 
    // which serves as the 1st argument for functionP. Total arguments = 4.
    functionP(functionN(a, a), s, t, t+r); 

    // k) Correct: Same as (j), and the result (double) is correctly stored in double 'v'.
    v = functionP(functionN(a, a), s, t, t+r); 
}
