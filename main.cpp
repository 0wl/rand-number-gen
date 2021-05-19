#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int n1,n2; //creating integer for the number

int main()
{
    cout << "Random number generation in range" << endl;

    srand(time(0)); //using time.h
    n1 = rand()% 51; //0 to 50 - rand()%GOAL+1
    n2 = rand()%100 + 1;//rand()%MAX + MIN value

    cout << "Anywhere between 0-50: " << n1 << "\n";
    cout << "Anywhere between 1-100: " << n2 << "\n";


    system("pause"); //keep the application running
    return 0;
}
