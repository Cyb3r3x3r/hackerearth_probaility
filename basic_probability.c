/*HackerEarth Statistics Basic Probability Question
Link - https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/
*/


#include <stdio.h>
int main(){
	float pmb,pab,p1,prs;
	printf("Enter the pmb - ");
	scanf("%f",&pmb);
	printf("Enter the pab - ");
	scanf("%f",&pab);
	printf("Enter the p1 - ");
	scanf("%f",&p1);
	prs = p1*pmb*(1-pab)+p1*pab*(1-pmb);
	printf("%.6f",prs);
	return 0;
}

