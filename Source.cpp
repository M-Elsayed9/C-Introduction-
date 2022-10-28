#include <iostream>
using namespace std;

int main()
{
	const int NUM_OF_SCORES = 4;
	float score1, score2, score3, score4, average, total;
	cout << "\nThis program will calculate the average of";
		cout << " 4 test scores. \n";
		cout << "\nPress enter to continue";
		cin.get();
		cout << endl;
		cout << "Enter score #1:";
		cin >> score1;
		cout << "Enter score #2:";
		cin >> score2;
		cout << "Enter score #3:";
		cin >> score3;
		cout << "Enter score #4:";
		cin >> score4;
		total = score1 + score2 + score3 + score4;
		average = total / NUM_OF_SCORES;
		cout << "\nThe total of the test score is ";
		cout << total;
		cout << "\nThe average test score is ";
		cout << average << endl;

		return 0;
}