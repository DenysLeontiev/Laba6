#include<iostream>
#include<string>
#include <conio.h>

#define _CRT_SECURE_NO_WARNINGS


using namespace std;

const int sentenceSize = BUFSIZ;

//char* findMinWords();
void findMinWords();

int main()
{	
	cout << "Enter a sentence: " << endl;
	//char* minWord = findMinWords();
	//cout << "minimal word is " << *(minWord);
	findMinWords();
	return 0;
	system("pause");
}

void findMinWords()
{
	char s[sentenceSize + 1];
	char* minWord;
	cin.getline(s, sentenceSize);
	char* p;     // pointer to point the word returned by the strtok() function
	p = strtok(s, " ");    // here delimiter is white space

	char* m = new char[3];

	int counter = 0;
	minWord = p;
	while (p != NULL)
	{
		cout << p << endl;
		if (strlen(minWord) > strlen(p))
		{
			minWord = p;
			m[counter] = *minWord;
			counter++;
		}
		p = strtok(NULL, " ");
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << m[i] << " ";
	}
}

