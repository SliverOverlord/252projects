//Joshua DeNio
/*
This program takes a loan amount, aper and term and outputs the total payed, monthly payments, amount
of interest payed.
*/
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  double loanAmount, apr, total, payment, amtInterest;
  int term;

  //get input
  cout << "Enter the loan amount: ";
  cin >> loanAmount;
  cout << "Enter the interest rate as a percent: ";
  cin >> apr;
  cout << "Enter the loan term in months: ";
  cin >> term;

  //do the math

  //convert percentage to usable format.
  apr = apr*0.01;
  payment = (loanAmount*apr)/(1-pow(1+apr,term*-1));

  //find the total payed
  total = payment * term;
  // find the total interest.
  amtInterest = total - loanAmount;
  cout << "Your monthly payment is : $" << setprecision(2) << fixed << payment << endl;
  cout << "The total loan amount is: $" << setprecision(2) << fixed << total << endl;
  cout << "The total interest for this loan is: $" << setprecision(2) << amtInterest << endl;
  return 0;
}