/**
* Quadratic Function Evaluator
*
* Author: Gustavo Diniz da Corte
* Email: gustavodacorte@gmail.com
*/

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    //Variables Definition
    float x; //Axis variable
    float lx, ux; //Lower and upper limits for calculation
    float stp; //Step between lower and upper limits
    float a, b, c; //Quadratic function coefficients

    //Program initialization
    cout << "Quadratic Function Evaluator" << endl; //One way to print elements on screen (C++)
    printf("Function Used by the Program: aX^2 +bX + c \n"); //Second way to print elements on screen (C/C++)

    //Retrieve user defined quadratic function coefficients
    printf("Type a coefficient: ");
    scanf("%f",&a); //a coefficient
    printf("Type b coefficient: ");
    scanf("%f",&b); //b coefficient
    printf("Type c coefficient: ");
    scanf("%f",&c); //c coefficient

    //Retrieve user input for function calculation
    cout << "Choose lower limit: ";
    cin >>  lx; //Retrieves lower limit defined by user
    cout << "Choose upper limit: ";
    scanf("%f", &ux);//retrieves upper limit defined by the user
    cout << "Choose step size: ";
    cin >> stp; //Retrieves step size for

    //with the step and initial/final values defined by the user, calculates and inputs in the screen the result
    for (x = lx; x <= ux+0.01*stp; x = x + stp) {
        cout << x << "       \t";
        cout << (x*x - 1.8f) << "\n";
    }

    //Return value for main
    return 0;
}
