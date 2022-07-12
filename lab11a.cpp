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
void displayMovieDataArray(MovieData *arrayPtr, int array_size);
MovieData *findLongestMovie(MovieData *arrayPtr, int array_size);



int main() {

    int array_size;

    cout << "Enter desired array size: ";
    cin >> array_size;
 
    struct MovieData *arrayPtr = new MovieData[array_size];
    cout << "arrayPtr = " << arrayPtr << endl;

    //Data from user to the struct
    populateMovieDataArray(arrayPtr, array_size);
    displayMovieDataArray(arrayPtr, array_size);
    findLongestMovie(arrayPtr, array_size);
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

    void displayMovieDataArray(MovieData *arrayPtr, int array_size) {
        for (int i = 0; i < array_size; i++){
        cout<<&arrayPtr[i]<<": arrayPtr["<<i<<"] = \n";
        cout<<"\tTitle\t\t:"<<arrayPtr[i].title<<endl;
        cout<<"\tDirector\t:"<<arrayPtr[i].director<<endl;
        cout<<"\tReleased\t:"<<arrayPtr[i].yearReleased <<endl;
        cout<<"\tRunning Time\t:"<<arrayPtr[i].runningTime<<" minutes\n\n";  
        }
    }

    MovieData *findLongestMovie(MovieData *arrayPtr, int array_size) {
        int longest=0;

        for (int i = 0; i < array_size; i++) {
            if(arrayPtr[i].runningTime>arrayPtr[longest].runningTime) {
                longest = i;
            }
        }

        cout<<"\nLongest Movie in the list:\n";
        cout<<"\tTitle\t\t:"<<arrayPtr[longest].title<<"\n";
        cout<<"\tDirector\t:"<<arrayPtr[longest].director<<"\n";
        cout<<"\tReleased\t:"<<arrayPtr[longest].yearReleased <<"\n";
        cout<<"\tRunning Time\t:"<<arrayPtr[longest].runningTime<<" minutes\n\n";
        
    }
