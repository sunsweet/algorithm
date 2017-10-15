#include<stdio.h>
#include<iostream>
#include <math.h>       /* ceil */

using namespace std;


void setOneRow(char * row, char c, int charNum, int rowLength){
	int blankNum = ceil((float)(rowLength-charNum)/2);
	int rowCurrentIndex = 0;
	int i = 0;
	if(blankNum > 0)
	{
		for(;i<blankNum;i++)
		{
			row[rowCurrentIndex] = ' ';
			rowCurrentIndex++;
		}
	}

	for(i = 0;i<charNum; i++)
	{
		row[rowCurrentIndex] = c;
		rowCurrentIndex++;
	}

	if(blankNum > 0)
	{
		for(;i<blankNum;i++)
		{
			row[rowCurrentIndex] = ' ';
			rowCurrentIndex++;
		}
	}
	row[rowCurrentIndex] = '\n';
	
}
int main(){
	char row[255];
	char c;
	scanf("%c",&c);
	setOneRow(row, c, 5,9);
	printf("%s",row);
	return 0;
}
