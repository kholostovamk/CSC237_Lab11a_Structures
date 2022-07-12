#include <iostream>

using namespace std;

//MovieData as a struct
struct MovieData{
string title;
string director;
int yearReleased;
double runningTime;
};
//Driver Code
int main(){
int size;
string str;
cout<<"Enter desired array size : ";
cin>>size;

struct MovieData *arrayPtr = new MovieData[size];

cout<<"arrayPtr = "<<&arrayPtr<<"\n";

//Enter data from user
for(int i=0;i<size;i++){
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
int longest = 0;
//printing all data
for(int i=0;i<size;i++){
cout<<&arrayPtr[i]<<": arrayPtr["<<i<<"] = \n";
cout<<"\tTitle\t\t:"<<arrayPtr[i].title<<"\n";
cout<<"\tDirector\t:"<<arrayPtr[i].director<<"\n";
cout<<"\tReleased\t:"<<arrayPtr[i].yearReleased <<"\n";
cout<<"\tRunning Time\t:"<<arrayPtr[i].runningTime<<" minutes\n\n";

if(arrayPtr[i].runningTime>arrayPtr[longest].runningTime)longest = i;
}
//printing longest movie data
cout<<"\nLongest Movie in the list:\n";
cout<<"\tTitle\t\t:"<<arrayPtr[longest].title<<"\n";
cout<<"\tDirector\t:"<<arrayPtr[longest].director<<"\n";
cout<<"\tReleased\t:"<<arrayPtr[longest].yearReleased <<"\n";
cout<<"\tRunning Time\t:"<<arrayPtr[longest].runningTime<<" minutes\n\n";

cout<<"Longest Movie is : "<<arrayPtr[longest].runningTime<<" minutes long\n";
cout<<"DELETING array at arrayPtr = "<<&arrayPtr<<"\n";
delete []arrayPtr;
return 0;
}