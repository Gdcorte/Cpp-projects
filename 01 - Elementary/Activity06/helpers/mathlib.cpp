#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

//This will calculate our differences value
double * differentiatePolynomial(double* polynomial, int degree){
    int i; // Loop index
    int diffDegree;

    diffDegree = degree-1;
    
    double * diffPolynomial = new double[diffDegree];

    for (i=0;i<=diffDegree;i++){
        diffPolynomial[i] = polynomial[i+1]*(i+1);
    }

    return diffPolynomial;
}

// This will calculate the  function or derivative of our polynomial at a given point
double calculatePolynomial(double* coeficients, int degree, double x_value){
    double f_x = 0;
    int i; //loop index

    for (i=0;i<=degree; i++){
        f_x += coeficients[i]*pow(x_value,(double)i);
    }

    return f_x;
}