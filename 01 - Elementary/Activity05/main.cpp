/**
* Polynomial Derivative Program
*
* Author: Gustavo Diniz da Corte
* Email: gustavodacorte@gmail.com
*/

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

const int MAX_DEGREE = 200;

int main()
{
    int polDegree;
    float coeficients[MAX_DEGREE];
    float derivatedCoefficients[MAX_DEGREE];
    float x;
    int i;

    //Retrieve polynomial degree
    cout << "Polynomial Derivative Program" << endl;
    cout << "Function to be derivated: sum( a_i * x^i )|i=0->n" << endl;
    cout << "Type the degree of the polynomial function: ";
    cin >> polDegree;

    //Retrieve polynomial coefficients
    for (i=0; i<=(polDegree); i++){
        cout << "Type coefficient a" << i << ": ";
        cin >> coeficients[i];
    }

    //Calculate derivate coefficients
    for (i=0; i<=(polDegree); i++){
        derivatedCoefficients[i] = coeficients[i]*i;
    }

    //Original Polynomial expression
    cout << "Original Polynomial Expression: ";
    for (i=0; i<=(polDegree); i++){
        if (i==0){
            cout << "(" << coeficients[i] << ") +";
            continue;
        }

        if (i==polDegree){
            cout << "(" << coeficients[i] << ")*x^"<< i;
            continue;
        }

        cout << "(" << coeficients[i] << ")*x^"<< i << " + ";
    }
    cout << endl;

    cout << "Differentiated expression: ";
    for (i=0; i<=(polDegree); i++){
        if (i==0){
            continue;
        }
        
        if (i==1){
            cout << "(" << derivatedCoefficients[i] << ") +";
            continue;
        }

        if (i==polDegree){
            cout << "(" << derivatedCoefficients[i] << ")*x^"<< (i-1);
            continue;
        }

        cout << "(" << derivatedCoefficients[i] << ")*x^"<< (i-1) << " + ";
    }
    cout << endl;
    return 0;   
}
