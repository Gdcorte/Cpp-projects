/**
* Unidimensional Polinomial Root Using Newton's Method -> f(x)
*
* Author: Gustavo Diniz da Corte
* Email: gustavodacorte@gmail.com
*/

#include <iostream>
#include <cmath>
#include <cstdio>

#include "helpers/mathlib.cpp"

using namespace std;

const int MAX_COUNT = 200;
const double MIN_TOL = 1e-9; 

int main()
{
    double* differentiated;
    double* coeficients;
    int polDegree;
    double guess;
    int i;
    double value_original;
    double value_diff;
    double x;
    double x_prev;
    
    // Initial values for the algorithm to start
    int count = 0;
    double tol = 1e9;

    //Retrieve polynomial degree
    cout << "Unidimensional Polinomial Root Using Newton's Method -> f(x)" << endl;
    cout << "Polynomial expression using the format: sum( a_i * x^i )|i=0->n" << endl;
    cout << "Type the degree of the polynomial function: ";
    cin >> polDegree;

    coeficients = new double[polDegree];

    //Retrieve polynomial coefficients
    for (i=0; i<=(polDegree); i++){
        cout << "Type coefficient a" << i << ": ";
        cin >> coeficients[i];
    }

    cout << "Initial Guess: ";
    cin >> guess;
    x = guess; //Our initial point is our guess, so let's use it!

    // Since we are dealing with polynomials only, we can actually calculate the difference polynomial expression without using numerical algorithms!
    differentiated = differentiatePolynomial(coeficients, polDegree);

    // This is where the magic happens. Since Newthon is a non-linear algorithm we must use some kind of loop with stop criterions to control its execution
    while ((count<MAX_COUNT)&&(tol>=MIN_TOL)){
        // We need to get the value of f(x) and its difference f'(x) for our current poiint.
        value_original = calculatePolynomial(coeficients,polDegree,x);
        value_diff = calculatePolynomial(differentiated,polDegree-1,x);

        // Now we update x value
        x_prev = x;
        x -= (value_original/value_diff);

        // and update our stop criterion
        count++; //If we run into a polynomial expression without root, our algorithm may run forever. And we do not want this to happen!
        tol= abs(x_prev-x); //Basically one stop criterion is when x stops changing too much. this means that we are close to the root
    }

    // We should have a value close to the root now!
    cout << "the closest root to the guess point is: " << x;
   
    return 0;
}
