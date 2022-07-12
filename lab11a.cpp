#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title; //movie title
    string director; //movie director
    int yearReleased; //year Released
    double runningTime; //Running time in minu
};


//FUNCTION PROTOTYPE
//void displayMovie(MovieData *ptr);
void populateMovieDataArray(MovieData *arrayPtr, int array_size);
//void displayMovieDataArray(MovieData *arrayPtr, int arraySize);
//MovieData *findLongestMovie(MovieData *arrayPtr, int arraySize);



int main() {

    int array_size;

    cout << "Enter desired array size: ";
    cin >> array_size;
 
    struct MovieData *arrayPtr = new MovieData[array_size];
    cout << "arrayPtr = " << arrayPtr << endl;

    //Data from user to the struct
    populateMovieDataArray(arrayPtr, array_size);
       
        }



    void populateMovieDataArray(MovieData *arrayPtr, int array_size){
        for (int i = 0; i < array_size; i++ ) {
        
        cin.get();
        cout<<"Enter Title "<<i<<" : ";
        getline(cin,arrayPtr[i].title);

        cout<<"Enter Director "<<i<<" : ";
        getline(cin,arrayPtr[i].director);

        cout<<"Enter year Released "<<i<<" : ";
        cin>>arrayPtr[i].yearReleased;

        cout<<"Enter Running time (minutes) "<<i<<" : ";
        cin>>arrayPtr[i].runningTime;
        }
    }


