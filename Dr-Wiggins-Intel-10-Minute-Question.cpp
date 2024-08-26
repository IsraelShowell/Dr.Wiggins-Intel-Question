/*
Creator: Israel Showell
Date: 8-26-2024
Project Name: Dr.Wiggins' 10 - Minute Paper Intel Interview Question
Description:
Dr.Wiggins' told us about his Intel interview, and I figured it out and wrote down the solution in 5 minutes on paper.
The question was how many cycles does it take to count to 100 by 3's, and every 5th cycle, subtract 8.
This is the code version of the program for my records.
*/

#include <iostream>
using namespace std;

//Function Prototype
int cyclecount();

//Main function
int main() {

    //Cycles variable
    int cycles = 0;

    //Sets the value of cycles to the returned value
    cycles = cyclecount();

    //Prints out the number of cycles
    cout << "This is the number of cycles: " << cycles << endl;
}

int cyclecount() {

    //These are the needed variables
    int i = 0;
    int total = 0;
    int cycles = 0;

    //Could have used a for loop, but on paper I used a while loop.
    while (total < 100) {

        //Adds 3 to i's current value
        i += 3;

        //Adds i to total's current value
        total += i;

        //Each time this occurs, the number of cycles increases by 1
        cycles += 1;

        //Every 5th cycle, the 8 is subtracted from the total
        if (cycles % 5 == 0) {
            total -= 8;
        }

    }

    //This was used to prove that total was indeed at 100.
    cout << "The total is: " << total << endl;

    //This returns the 
    return cycles;

}