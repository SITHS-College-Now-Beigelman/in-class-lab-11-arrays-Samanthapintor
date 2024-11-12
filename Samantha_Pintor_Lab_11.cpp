//Samantha Pintor 
//Lab 4 
//11-12-24

#include <iostream> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int main ()
{
    const int ARRAY_SIZE = 50; //list array of size 50
    double alpha[ARRAY_SIZE];
    
    //declaring variables
    int index; //variable index 
    char space = ' '; //character called space
    double sum; //variable for sum
    int equalToHundred; //variable for exactly equal to one hundred 

    srand(time(0)); //each time the program runs a unique sequence is generated

    
    for (int index = 0; index < 25; index ++) //loop - increments until equal to 25
        {
        cout << pow(index,2) << space; //finding square root of x
        
        if (index % 10 == 0 && index > 0){
            cout << endl;}
        }
    
    for (int index = 25; index < 50; index ++) //loop - increments until equal to 25
        {
        cout << index * 3 << space; //finding square root of x
        
        if (index % 10 == 0 && index > 25){
            cout << endl;}
        }
    /*
    0 1 4 9 16 25 36 49 64 81 100 
    121 144 169 196 225 256 289 324 361 400 
    441 484 529 576 75 78 81 84 87 90 
    93 96 99 102 105 108 111 114 117 120 
    123 126 129 132 135 138 141 144 147
    */


    for (index == 0; index < 50; index ++) //there are only be 50 randomly generated numbers
    {
        alpha[index] = rand() % 100 + 1; //index is random numbers between 1 and 100
        cout << alpha[index] << space; //generating the list 
        sum = sum + alpha[index]; //finding the sum 
    
        if (alpha[index] % 100 == 0){ //if the number divided by 100 is equal to 0
            equalToHundred + 1; //there is another number exactly equal to 100
        }

    }
    
    //statements 
    cout << endl << "The average is..." << (sum/50) << endl; 
    cout << "There are " << equalToHundred << " numbers equal to one hundred." << endl;

    /*
    17 43 81 71 62 100 39 38 67 38 31 30 52 82 55 34 85 48 4 70 89 56 98 95 82 72 51 57 49 68 23 17 62 3 88 23 3 78 60 21 15 42 2 67 23 56 100 8 4 55 
    The average is...50.28
    There are 0 numbers equal to one hundred.
    */

    return 0; 
}
