/*AUTHOR: STANELY KARIUKI MUGO
REGNO: CT101/G/22666/24
DATE:06/11/2024
TITLE: SCORES 2D ARRAY */
#include <stdio.h>
int main () {
//declaring and initialising the array
int i, j;
int scores [2] [2]={{65, 92}, {35, 70}};
//print the elements using a nested if loop
	for(i=0;i<2;i++){ //rows loop
		for(j=0;j<2;j++){ //columns loop
			//print the array output scores
	    printf("scores[%d][%d]= %d\n", i,j, scores[i][j]);
	}}
	return 0;
}