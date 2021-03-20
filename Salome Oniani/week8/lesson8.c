#include <stdio.h>
int sumPoints(int a, int b, int c, int d){	
	return a+b+c+d;
}
int main(){
	int lab, e1, e2, fe;
	printf("sheitanet laboratoriis qula --> ");
	scanf("%d", &lab);
	printf("sheitanet pirveli shualeduris qula--> ");
	scanf("%d", &e1);
	printf("sheitanet meore shualeduris qula --> ");
	scanf("%d", &e2);
	printf("sheitanet pfinaluri gamocdis qula--> ");
	scanf("%d", &fe);
if(lab>0 && lab <=30 && e1>0 && e1 <=20 && e2>0 && e2<=20 && fe>0 && fe<=30){
	
		if(sumPoints(lab, e1,e2,fe)>=51)
   			printf("tqveni qulaa %d --- gilocavt tqven chaabaret sagani", sumPoints(lab, e1,e2,fe));
   		else printf("tqveni qulaa %d --- samwuxarod ver chaabaret sagani", sumPoints(lab, e1,e2,fe));
	}else
	printf("Error: sheamowmet shetanili nishnebi");
	
	return 0;
}