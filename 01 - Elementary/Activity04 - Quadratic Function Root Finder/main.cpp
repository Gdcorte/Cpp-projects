/**
* Quadratic Function Root Finder
*
* Author: Gustavo Diniz da Corte
* Email: gustavodacorte@gmail.com
*/

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    //Variables Definition
    float x1, x2; //Quadratic function roots
    float delta; //Delta value for function solver
    float a, b, c; //Quadratic function coefficients

    //Program initialization
    cout << "Quadratic Function Solver" << endl;

    //Retrieve user defined quadratic function coefficients
    printf("Type a coefficient: ");
    scanf("%f",&a); //a coefficient
    printf("Type b coefficient: ");
    scanf("%f",&b); //b coefficient
    printf("Type c coefficient: ");
    scanf("%f",&c); //c coefficient

    //Calculate Delta value
    delta = pow(b,2) - (4.0*a*c);

    if (a==0){//A quadratic function is not provided
        if(b==0){
            printf("This is not even a function!\n");
            printf("Please restart the program.\n");
        }else{
            printf("This is not a quadratic function!\n");
            printf("The root for this function is:\n");
            x1 = -c/b;
            printf("%.2f",x1);
        }

    }else{//A quadratic function is provided
        //Define possible delta solutions
        if (delta > 0){ //Two real roots
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("This function has two real roots: \n");
            printf("Root 1: %.2f \n", x1);
            printf("Root 2: %.2f \n", x2);
        }else {
            if (delta == 0){ //Two identical real roots
                x1 = (-b)/(2*a);
                printf("This function one real root: \n");
                printf("Root: %.2f \n", x1);

            }else{ //Two imaginary roots
                x1 = (-b)/(2*a);
                x2 = (sqrt(abs(delta)))/(2*a);
                printf("This function has two imaginary conjugated roots: \n");
                printf("Root 1: %.2f + %.2f \n", x1, x2);
                printf("Root 2: %.2f - %.2f \n", x1, x2);
            }
        }
    }

    //Return value for main
    return 0;
}
