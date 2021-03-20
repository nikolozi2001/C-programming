#include <stdio.h>
#include <stdlib.h>

struct Studentebi{
	char saxeli[50];
	char gvari[50];
	double id;
	char dTarigi [15];
	long int telefoni;	
} st[500];

int index1 = -1;

void menu();
void addSt(int stIndex);
void sia();
void stDzebna();
void stWashla();

int main(){
	
	menu();
	
	
	
	return 0;
}


void menu(){
	system("cls");
	
	printf("\nsistemas aqvs shemdegi funqciebi:\n");
	printf("1. tudentis damateba\n");
	printf("2. studentis modzebna\n");
	printf("3. studentis washla\n");
	printf("4. studentebis siis bechdva\n");
	printf("airchiet funqciias nomeri -> ");
	int selected;
	scanf("%d", &selected);
	
	if(selected == 1) {
		
		index1++;
		addSt(index1); // studentis damateba
		
	}
	else if(selected == 2) {
		stDzebna();
	}
	else if(selected == 3) {
		stWashla();
	}
	else if(selected == 4)	{
		sia();
	}
	else {
		printf("\n\naseti funqcia ar arsebobs airchiet shesabamisis nomeri\n");
		sleep(1);
		menu();
	}
	
}

void addSt(int stIndex){
	system("cls");
	printf("shemoitane studentis saxeli ");
	scanf("%s", &st[stIndex].saxeli);
	
	printf("shemoitane studentis gvari ");
	scanf("%s", &st[stIndex].gvari);

	printf("shemoitane studentis ID ");
	scanf("%lf", &st[stIndex].id);
	
	printf("shemoitane studentis dabadebis tarigi shemdegi formatit dd/mm/yyyy ");
	scanf("%s", &st[stIndex].dTarigi);
	
	printf("shemoitane studentis telefonis nomeri ");
	scanf("%ld", &st[stIndex].telefoni);
	
	printf("\n\nmonacemebi sheinaxa, meniushi dasabruneblad shemoitanet 1 an siis chvenebisatvis 2 ");
	int n;
	scanf("%d", &n);
	
	if(n==1) menu();
	if(n==2) sia();
}

void sia(){
	system("cls");
	printf("saxeli\t\tgvari\t\tID\t\tdab.tarigi\t\ttelefoni\n");
	int i;
	for(i=0; i<=index1; i++){
		printf("%s\t%s\t%.0f\t%s\t%ld\n", st[i].saxeli, st[i].gvari, st[i].id, st[i].dTarigi, st[i].telefoni);
		
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