#include <iostream>
#include <string>
using namespace std;

struct movieData
{
    string title; //movie title
    string director; //movie director
    int yearReleased; //year Released
    double runningTime; //Running time in minu
};

int main() {

    int array_size;
    double *arrayPtr;
    cout << "Enter desired array size: ";
    cin >> array_size;
    arrayPtr = new double[array_size];
    
}