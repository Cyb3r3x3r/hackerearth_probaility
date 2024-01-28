/*
HackerEarth bayen's rules - Conditional probability
link - https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/bayes-rules-conditional-probability-chain-rule/tutorial/
*/

#include <stdio.h>

int main(){
	float pot,pct,sol;
	int N;
	printf("Enter the pct - ");
	scanf("%f",&pct);
	printf("Enter the pot - ");
	scanf("%f",&pot);
	printf("Enter the N - ");
	scanf("%d",&N);
	sol = (1-pct)*pot + pct*2/N;
	printf("%.6f",sol);
	return 0;
}
