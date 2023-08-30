//Lowest score drop
#include<iostream>
using namespace std;
//Prototypes
void getScore(double&testScore, int testNum);
void calcAverage(double testScore[5]);
int findLowest(double testScore[5]);

int main()
{
    double testScore[5];
    int testNum = 1;

    getScore(testScore[0], testNum);
    testNum++;
    getScore(testScore[1], testNum);
    testNum++;
    getScore(testScore[2], testNum);
    testNum++;
    getScore(testScore[3], testNum);
    testNum++;
    getScore(testScore[4], testNum);
    testNum++;
    calcAverage(testScore);

    return 0;
}

void getScore(double&testScore, int testNum)
{
    cout << "Enter test score " << testNum << ": "; //Asking for input
    while(!(cin >> testScore)||(testScore < 0||testScore > 100)) //Input within validation
    {
        cout << "\nYou must enter a test score from 0-100."
             << "\n\nEnter test score " << testNum << ": ";
        cin.clear();
        cin.ignore(100,'\n');
    }
}

int findLowest(double testScore[5]) //The five test scores passed to it
{
    int lowest = 0;
    for(int i = 0; i < 5; i++)
    {
        if(testScore[i] < testScore[lowest])
        {
            lowest = i;
        }
    }
    return lowest;
}

void calcAverage(double testScore[5])
{
    int lowest = findLowest(testScore);
    double allTests = 0.0, fourHighest;
    for(int i = 0; i < 5; i++)
    {
        allTests += testScore[i];
    }
    fourHighest = allTests - testScore[lowest]; //Dropping lowest score

    double average = fourHighest / 4.0; //Calculating the average
    cout << "\nAverage of four highest test scores: " << average << endl;
}
