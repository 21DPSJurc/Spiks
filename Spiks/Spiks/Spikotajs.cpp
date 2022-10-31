#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
void beigas(int sco)
{
	system("cls");
	ofstream failins;
	cout << "					Urraa tu esi padevies!" << endl << "Nu ko vai parspeji sidniju spikosana? " << endl;
	ifstream rez("sidnijs.txt");
	string content((istreambuf_iterator<char>(rez)),
		(istreambuf_iterator<char>()));
	srand(time(0));
	cout << " Sidnijs vareja sasniegt " << endl;
	cout << content[0] << endl;
	cout << "Tu vareji sasniegt tikai " << endl << sco << endl;
	cout << "Man pat nevajaga parbaudit!" << endl << endl << endl << endl;
	cout << "Nu labi tomer parbaudisu" << endl;
	
	if (9 < sco) //ifstream agriez loti divainu stringu un man bija grutibas vinu konvertet
	{
		cout << "KOOO NEIESPEEJAMIIII" << endl << endl << "TAGAD TU ESI JAUNAIS SIDNIIIJSSSSSSSSSSSSSSSSSSSS";
		failins.open("sidnijs.txt");
		failins << to_string(sco);
		failins.close();
	}
	else {
		cout << "Nekas nesanaca, nugi";
	}
	
	Sleep(1000000);
}
int main()
{
	ifstream ifs("file.txt");
	string content((istreambuf_iterator<char>(ifs)),
		(istreambuf_iterator<char>()));
	srand(time(0));
	int score = 0;
	char answer = 'a';
	for (int i = 0; i < content.length()-100; i++)
	{
		if (content[i] == '\n')
		{
			if (rand() % 32 == 0)
			{
				cout << "SCORE " << to_string(score) << endl;
				for (int ii = 0; ii < 101; ii++)
				{
					cout << content[i + ii];
					if (rand() % 32 == 0 && content[i + ii + 1] != ' ' && content[i + ii + 1] != '\t' && content[i + ii + 1] != '\n')
					{
						cout << " ****Mini mini**** (uzraksti (alt + '+' 7331 numpada) lai aizbegtu)" << endl;
						cin >> answer;
						if (answer == content[i + ii + 1])
						{
							score++;
							cout << "Pareizi" << endl;
						}
						else if (answer == 'L')
						{
							beigas(score);
						}
						cout << "****Pareiza atbilde**** " << content[i + ii + 1] << endl;
					}
				}
				Sleep(3000);
				system("cls");
			}
		}
		
	}

	return 0;
}