#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include "squibber.h"

using namespace std;

int main(int argc, char *argv[]){
	Squibber s;
	char words[64] = "This is what I say";
	int n1 = 33;
	if (argc != 3)
	{
		cerr << "usage: "<< argv[0] << " \"<quoted-text>\" <int-number>"<< endl;
		return 1;
	} else
	{
		strcpy(words, argv[1]);
		n1 = atoi(argv[2]);
		s.squib();
		s.squib(words);
		s.squib(n1);
		return 0;
	}
}
