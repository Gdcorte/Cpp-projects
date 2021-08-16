/**
* Decrescent Series Sum Calculator
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
    //Declare variables
    float a, b, c, d;//Series term constant
    float s, si; //Series term sum and ith term of the series
    float tol;//Tolerance to decide end of the sum
    int i;//Series term index

    //Program Description
    cout << "Decrescent Series Sum Calculator" << endl;
    printf("This program reads the following series terms:\n");
    printf("a*(b)^(i-1)\n");
    printf("-----------\n");
    printf("  c*(i)-d\n");
    printf("where i refers to the ith term of the series\n");

    //Read from user series input
    printf("Coefficient a: ");
    cin >> a;
    printf("Coefficient b: ");
    cin >> b;
    printf("Coefficient c: ");
    cin >> c;
    printf("Coefficient d: ");
    cin >> d;

    //Define tolerance
    printf("Tolerance: ");
    cin >> tol;

    //Define variables initial values
    s=0;
    si=1e9;
    i=1;

    //Perform the series sum until tolerance is achieved
    while (abs(si)>tol){
        si = (a*(pow(b,i-1)))/(c*i-d);
        s = s + si;
        i++;
    }

    //Exhibit series sum values on screen
    printf("The series sum is: %.3f",s);

    //Return value for main
    return 0;
}
