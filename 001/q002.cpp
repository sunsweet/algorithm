#include<stdio.h>
#include<iostream>
#include <math.h>       /* ceil */

using namespace std;
void setOneRow(char * row, char c, int charNum, int rowLength){
	int blankNum = ceil((float)(rowLength-charNum)/2);
	int rowCurrentIndex = 0;
	int i ;
	if(blankNum > 0)
	{
		for(i=0;i<blankNum;i++)
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
		for(i=0;i<blankNum;i++)
		{
			row[rowCurrentIndex] = ' ';
			rowCurrentIndex++;
		}
	}
	row[rowCurrentIndex] = '\n';
	
}

void displayDiamond(char c,int rowNum){
	int mid = ceil((float)rowNum/2);
	int i = 1;
	int charNum;
	char row[255];	
	for(; i <= rowNum; i++){
		if(i <= mid){
			charNum = 1+2*(i-1);
		}else
        {
            charNum = rowNum-2*(i-mid);
        }
		setOneRow(row,c,charNum,rowNum);
		printf("%s",row);
	}
}
int main(){
	char c;
	scanf("%c",&c);
	displayDiamond(c,255);
	return 0;
}
