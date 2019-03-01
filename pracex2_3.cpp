#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;
char alphabet[8][8];

void showAlphabet();
void randomAlphabet();

int main(){
	srand(time(0));	
	randomAlphabet();
	showAlphabet();
}

void showAlphabet(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << alphabet[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomAlphabet()
{
	int x,y;
	char a[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			x=rand()%26;
			y=rand()%26;
			alphabet[i][j] = a[x],a[y];
		
	}
}
}
//Write definition of function randomAlphabet() here.

