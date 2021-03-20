#include <stdio.h>
#include <stdlib.h>

struct Yvavilebi{
	char saxeoba[20];
	char saxeli[20];
	char feri [15];
	float fasi;
    int age;
    int pin;	
} fl[500];

int index1 = -1;

void menu();
void addfl(int flIndex);
void sia();
void flDzebna();
void redaqtireba();

int main(){
	
	menu();
	
	
	
	return 0;
}


void menu(){
	system("cls");
	
	printf("\nsistemas aqvs shemdegi funqciebi:\n");
	printf("1. yvavilis damateba\n");
	printf("2. registrirebuli yvavilebis sia\n");
	printf("3. yvavilebis dzebna\n");
	printf("4. monacemebis redaqtireba\n");
	printf("airchiet funqciias nomeri -> ");
	int selected;
	scanf("%d", &selected);
	
	if(selected == 1) {
		
		index1++;
		addfl(index1); // yvavilis damateba
		
	}
	else if(selected == 2) {
		sia();
	}
	else if(selected == 3) {
        stDzebna();
	}
	else if(selected == 4)	{
		redaqtireba();
	}
	else {
		printf("\n\naseti funqcia ar arsebobs airchiet shesabamisis nomeri\n");
		sleep(1);
		menu();
	}
	
}

void addFl(int flIndex){
	system("cls");
	printf("shemoitane yvavilis saxeoba ");
	scanf("%s", &fl[flIndex].saxeoba);
	
	printf("shemoitane yvavilis saxeli ");
	scanf("%s", &fl[flIndex].saxeli);

	printf("shemoitane yvavilis feri ");
	scanf("%s", &fl[flIndex].feri);
	
	printf("shemoitane yvavilis fasi ");
	scanf("%s", &fl[flIndex].fasi);
	
	printf("shemoitane yvavilis pin ");
	scanf("%ld", &fl[flIndex].pin);
	
	printf("\n\nmonacemebi sheinaxa, meniushi dasabruneblad shemoitanet 1 an siis chvenebisatvis 2 ");
	int n;
	scanf("%d", &n);
	
	if(n==1) menu();
	if(n==2) sia();
}

void sia(){
	system("cls");
	printf("saxeoba\t\tsaxeli\t\tfasi\t\tasaki\t\tpin code\n");
	int i;
	for(i=0; i<=index1; i++){
		printf("%s\t%s\t%.0f\t%s\t%ld\n", fl[i].saxeoba, fl[i].saxeli, fl[i].fasi, fl[i].age, fl[i].pin);
		
	}
	
	printf("\n\nmeniushi dasabruneblad shemoitanet 1 an axali studentis damatebisatvis shemoitanet 2 ");
	int n;
	scanf("%d", &n);
	
	if(n==1) menu();
	if(n==2) {
		index1++;
		addSt(index1);	
	}	
}

void stDzebna(){
	system("cls");
	printf("\nshemoitanet studentis ID ");
	long int ID;
	scanf("%ld", &ID);
	int i;
	for(i=0; i<=index1; i++){
		if(st[i].id == ID){
			printf("%s\t%s\t%.0f\t%s\t%ld\n", st[i].saxeli, st[i].gvari, st[i].id, st[i].dTarigi, st[i].telefoni);
			break;
		}
	}
	
	if(i<=index1){
	
		printf("\n\nmeniushi dasabruneblad shemoitanet 1 ");
		int n;
		scanf("%d", &n);
	
		if(n==1) menu();
	} else {
		printf("\n\nstudenti ar aris registrirebuli sistemashi, misi registrirebistvis shemotanet 2 an gadadit meniushi 1 ");
		int n;
		scanf("%d", &n);
	
		if(n==1) menu();
		if(n==2) {
			index1++;
			addSt(index1);	
		}
	}
}

void stWashla(){
	
	system("cls");
	printf("\nshemoitanet studentis ID ");
	long int ID;
	scanf("%ld", &ID);
	int i;
	for(i=0; i<=index1; i++){
		if(st[i].id == ID){
			int j;
			for(j=i; j<index1; j++) st[j]=st[j+1];
			index1--;
			break;
		}
	}
	
	if(i<=index1){
	
		printf("\n\nstudenti bazidan waishala. meniushi dasabruneblad shemoitanet 1 ");
		int n;
		scanf("%d", &n);
	
		if(n==1) menu();
	} else {
		printf("\n\nstudenti ar aris registrirebuli sistemashi siis sanaxavad shemoitanet 2 an gadadit meniushi 1 ");
		int n;
		scanf("%d", &n);
	
		if(n==1) menu();
		if(n==2) sia();
	}
	
}