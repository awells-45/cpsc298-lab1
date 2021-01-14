#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  cout << "You will enter 5 numbers in total" << endl;
  int numArray[5];
  int sumNum = 0;
  for (int i = 0; i < 5; ++i)
  {
    cout << "Please enter number " << (i + 1) << ":" << endl;
    cin >> numArray[i];
    sumNum += numArray[i];
  }

  int numAverage = sumNum / 5;
  cout << "The sum of the numbers was " << sumNum << " and the mean was " << numAverage << endl;
  return 0;
}
