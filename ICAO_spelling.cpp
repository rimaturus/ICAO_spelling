/*
ICAO spelling by rimaturus

A tool useful for who want to learn how to spell a word using the ICAO alphabet.

How it works:
e.g.	Email@mail.com = ECHO - MIKE - ALFA - INDIA - LIMA - @ - ECHO - MIKE - ALFA - INDIA - LIMA - . - CHARLIE - OSCAR - MIKE
		ICAO = INDIA - CHARLIE - ALFA - OSCAR
*/

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

const char* ICAO[26]={
"ALFA","BRAVO","CHARLIE","DELTA","ECHO","FOXTROT",
"GOLF","HOTEL","INDIA","JULIET","KILO","LIMA",
"MIKE","NOVEMBER","OSCAR","PAPA","QUEBEC","ROMEO",
"SIERRA","TANGO","UNIFORM","VICTOR",
"WHISKEY","XRAY","YANKEE","ZULU"
};

const int N = 64;	//the maximum word lenght
char word[N];

int main(){
	cout << "ICAO Spelling\n";
	
	cout << "Insert below the word or phrase without spaces (symbols are accepted and will be reported unchanged):\n";
	cin >> word;
	
	cout << endl << "Spelling of [ " << word << " ] in ICAO alphabet:\n";
	
	for(int i = 0; word[i] != 0; i++){
		
		//uppercase to lowercase converter 
		if(word[i] >= 'A' && word[i] <= 'Z')
			word[i] += 'a' - 'A';
		
		//the real "spelling-ator"
		int a = word[i]-'a';
		if (a < 0 || a > int('z'-'a'))
			cout << word[i];
		else
			cout << ICAO[int(word[i] - 'a')];
			
		if(word[i+1] != 0)
			cout << " - ";
	}	
}