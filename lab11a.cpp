#include <iostream>
#include <string>
using namespace std;

//FUNCTION PROTOTYPE
void displayMovie(MovieData *ptr);
void populateMovieDataArray(MovieData *arrayPtr, int arraySize);
void displayMovieDataArray(MovieData *arrayPtr, int arraySize);
MovieData *findLongestMovie(MovieData *arrayPtr, int arraySize);

struct MovieData
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
    cout << "arrayPtr = " << arrayPtr << endl;
}