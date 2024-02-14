// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
// girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include <iostream>
using namespace std;

int main()
{
    // Values that given to us
    int total_pupils = 45;
    int total_boys = 25;
    int total_girls = 20; // calculated by 'total_pupils' and 'total_boys'
    int boysWithGradeA = 17;

    // Calculations: According to question.
    // We know, it is given that 80% students recieved grade A where 17 of them are boys, then
    float total_Grade_A_Students = ((80.0 / 100) * total_pupils);

    // So, no of girls with grade A is equal to 'total students wih grade A - no of Boys with grade A'
    int girlsWithGradeA = total_Grade_A_Students - boysWithGradeA;

    cout << "The no of girls with grade A is : " << girlsWithGradeA << endl;

    return 0;
}