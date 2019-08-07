#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
// set constants.
const int arraySize = 30;
const int sentinal = -1;

const float AMin = 90;
const float BMin = 80;
const float CMin = 70;
const float DMin = 60;

// function declarations prototypes.
void sort(int testScores[], int count);
void read(int testScores[], int& count, int& maxScore);
void outputScores(const int testScores[],int count,int maxScore);
void outputSummary(const int testScores[],int count,int maxScore);
char calcLetterGrade(int score, int maxScore);
float calcPercentage(int score, int maxScore);
float averageScore(const int testScores[], int count);

int main()
{
  //declare veriables.
  int maxScore;
  int testScores[arraySize];
  int count;
  
  //function calls.
  read(testScores,count,maxScore);
  sort(testScores,count);
  outputScores(testScores,count,maxScore);
  outputSummary(testScores,count,maxScore);


return 0;
}

//set up the read function.
void read(int testScores[], int& count, int& maxScore)
{
  count = 0;
  int  grade;
  
  cout << "Enter the maximum points availible: " << endl;
  cin >> maxScore;
  
  cout << "Enter a test score: (" << sentinal << " to quit) " << endl;
  cin >> grade;
  while (grade != sentinal && count < arraySize)
  {
   testScores[count] = grade;
   count++;
   cin >> grade;
    
  }

}

//set up the sort function.
void sort(int testScores[], int count)
{
   int temp;
   int large;
   // put count-1 ints in their correct spot
   for (int i=0; i<count-1; i++)  
   {
      large=i;
      // loop to find the largest
      for (int j=i+1; j<count; j++)  
         if (testScores[j] > testScores[large])
            large=j;

      // put largest in proper position
      temp = testScores[i];     
      testScores[i] = testScores[large];
      testScores[large] = temp;
   }
}

//set up the calcPercentage function.
float calcPercentage(int score, int maxScore)
{
  float pct;
  pct = static_cast<float>(score) / maxScore * 100;
  return pct;
}

// set up the calcLetterGrade function.
char calcLetterGrade(int score, int maxScore)
{
  char grade;
  float pct;
  
  pct = static_cast<float>(score) / maxScore * 100;
  if(pct >= AMin)
    grade = 'A';
  else if (pct >= BMin)
    grade = 'B';
  else if (pct >= CMin)
    grade = 'C';
  else if (pct >= DMin)
    grade = 'D';
  else
    grade = 'F';
  return grade;
  
}

//set up output function using a for loop.
void outputScores(const int testScores[],int count,int maxScore)
{
  cout << endl;
  cout << fixed << showpoint << setprecision(2);
  cout << setw(15) << left << "Score" << setw(15) << "Percentage"<< setw(15)  << "Letter Grade" << endl;
  cout << "-----------------------------------------------------------" << endl;
  for (int i=0; i < count; i++)
  {
    cout << setw(15) << left << testScores[i] << setw(15) << calcPercentage(testScores[i], maxScore)<< setw(15)  << 
    calcLetterGrade(testScores[i],maxScore)<< endl;
  }
    
  
}

//set up average function.
float averageScore(const int testScores[], int count)
{
  float tmpSum = 0;
  float ave;
  for(int i = 0; i < count; i++)
  {
   tmpSum += testScores[i]; 
  }
  ave = tmpSum/count;
  return ave;
  
}

//set up function to calculate the median score.
float median(const int testScores[], int count)
{
  float median;
 if (count% 2 == 0)
 {
   median = (testScores[count/2] + testScores[(count/2) - 1])/2.0;
 }
 else
 {
   median = testScores[count/2];
 }
 return median;
}

//set up a function to find the standard deviation.
float deviation(const int testScores[],int count)
{
  float sum = 0.0, mean, deviation = 0.0;

    int i;

    for(i = 0; i < count; ++i)
    {
        sum += testScores[i];
    }

    mean = sum/count;

    for(i = 0; i < count; ++i)
        deviation += pow(testScores[i] - mean, 2);

    return sqrt(deviation / count);
}

//set up summary function.
void outputSummary(const int testScores[],int count,int maxScore)
{
  cout <<endl;
  cout << fixed << showpoint << setprecision(2);
  cout << "SUMMARY" << endl;
  cout << "-----------------------------------------------------------" << endl;
  cout << setw(20) << left << "Maximum Score" << setw(10) << maxScore << endl;
  cout << setw(20) << "Number of students" << setw(10) << count << endl;
  cout << setw(20) << "High Score" << setw(10) << testScores[0] << endl;
  cout << setw(20) << "Low Score" << setw(10) << testScores[count-1] << endl;
  cout << setw(20) << "Range of Scores" << setw(10) << testScores[0]- testScores[count-1]<< endl;
  cout << setw(20) << "Average Score" << setw(10) << averageScore(testScores,count) << endl;
  cout << setw(20) << "Median Score" << setw(10) << median(testScores,count) << endl;
  cout << setw(20) << "Standard Deviation" << setw(10) << deviation(testScores,count) << endl;
  
}