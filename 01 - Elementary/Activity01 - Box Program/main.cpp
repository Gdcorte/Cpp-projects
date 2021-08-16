/**
* Box Calculation Program
*
* Author: Gustavo Diniz da Corte
* Email: gustavodacorte@gmail.com
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    //Define Variables
    float hg,wd,ln; //Define box height, width, length
    float lid; //Define the height of the lid
    float area; //Define box total area

    cout << "Box Calculator Program" << endl;

    //Define box height
    cout << "Box height (cm): ";
    cin >> hg;

    //Define box width
    cout << "Box width (cm): ";
    cin >> wd;

    //Define box length
    cout << "Box length (cm): ";
    cin >> ln;

    //Define box lid height
    cout << "Box lid height (cm): ";
    cin >> lid;

    //Calculate total area needed for box construction
    area = 2*(wd*ln+(wd+lid)*hg+(ln+lid)*hg)/(10^4);

    //print output
    printf("Total area needed for box construction: %.2f m^2", area);

    //Return value for main
    return 0;
}
