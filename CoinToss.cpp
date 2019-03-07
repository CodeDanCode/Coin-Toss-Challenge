//=========================================
//********** Coin Toss Challenge **********
//=========================================

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void coinToss(int &heads, int &tails, int &count);

int main() {

	int heads = 0, tails = 0, count = 0;
	//char arr [10][20];

	srand(time(NULL));

	coinToss(heads, tails, count);

	cout << endl;

	cout << "Heads: " << heads << endl;
	cout << "Tails: " << tails << endl;
	cout << "count: " << count << endl;

	system("PAUSE");
	return 0;
}

void coinToss(int &heads, int &tails, int &count) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			int random = rand() % 2;

			if (random == 0) {
				heads++;
				cout << "O" << " ";
			}
			else {
				tails++;
				
				cout << "X"<< " ";
			}
			count++;
		}
		cout << endl;
	}
}

