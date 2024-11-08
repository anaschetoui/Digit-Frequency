#include <iostream>
using namespace std;

int ReadPositivePositiveNumber(string Message)
{
	int N;
	do
	{
		cout << Message;
		cin >> N;
	} while (N < 0);

	return N;

}

int FrequencyDigit(short Digit, int N)
{
	int Count = 0;
	int Reminder = 0;
	while (N > 0)
	{
		Reminder = N % 10;
		N = N / 10;
		if (Reminder == Digit)
		{
			Count++;
		}
	}
	return Count;
}

void PrintResult()
{
	int N = ReadPositivePositiveNumber("enter a Number: ");
	int Digit = ReadPositivePositiveNumber("enter the number that you want to check: ");

	cout << "The Digit "<<Digit<< " frequrncy is "<<FrequencyDigit(Digit, N)<< " Time(s) ";

}

int main()
{
	PrintResult();

	return 0;
}