//Samantha Pintor 
//Lab 11 Arrays 
//12-08-24

#include <iostream> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 

using namespace std; 

int main ()
{
    const int ARRAY_SIZE = 50; //List array size as 50
    double alpha[ARRAY_SIZE];
    
    //Declaring variables
    int index; //Variable for index
    double sum = 0; //Initializes variable sum to 0
    int equalToHundred = 0; //Initializes variable equalToHundred to 0
    
    srand(time(0)); //Each time the program runs a unique sequence is generated

    //Part 1
    //First loop: Print squares of numbers from 0 to 24
    for (index = 0; index < 25; index++) {
        cout << pow(index, 2) << " "; //Squares the numbers
        
        if ((index + 1) % 10 == 0) { //Loop starts from 0, checks if (index + 1) is divisible by 10
            cout << endl; //Insert newline every 10 numbers
        }
    }

    //Second loop: Multiply the index values from 25 to 49 by 3 
    for (index = 25; index < 50; index++) {
        cout << index * 3 << " "; //Multiples the numbers by 3 
        
        if ((index + 1) % 10 == 0) { //Loop starts from 0, checks if (index + 1) is divisible by 10
            cout << endl; //Insert newline every 10 numbers
        }
    }

    //Part 2
    //Generate 50 random numbers, calculate sum and state numbers equal to 100
    for (index = 0; index < 50; index++) {
        alpha[index] = rand() % 100 + 1; //Generate random numbers between 1 and 100
        cout << alpha[index] << " "; //Output the generated number
        sum += alpha[index]; //Add the number to sum
        
        if (alpha[index] == 100) { //If the number is exactly 100
            equalToHundred++; //Increment
        }

        if ((index + 1) % 10 == 0) { //Loop starts from 0, checks if (index + 1) is divisible by 10
            cout << endl; //Insert newline every 10 numbers
        }
    }
    
    //Output the average and total numbers equal to 100
    cout << endl << "The average is... " << (sum / 50) << endl; 
    cout << "There are " << equalToHundred << " numbers equal to one hundred." << endl;

    return 0; 
}

/* Output: 

Part 1: 
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361 
400 441 484 529 576 75 78 81 84 87 
90 93 96 99 102 105 108 111 114 117 
120 123 126 129 132 135 138 141 144 147 

Part 2: 
84 31 90 55 88 27 29 45 85 75 
6 78 36 30 71 14 36 64 33 55 
83 98 33 64 17 55 34 91 19 36 
47 3 18 88 57 5 15 85 1 51 
11 6 28 46 87 98 11 23 14 44 

The average is... 46
There are 0 numbers equal to one hundred.
*/
