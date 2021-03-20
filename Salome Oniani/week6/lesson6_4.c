int main(){
for(int i = 99; i>10; i -=5){
if(i%3==0) continue;
printf("%d\n", i);
sleep(1);
}
return 0;
}