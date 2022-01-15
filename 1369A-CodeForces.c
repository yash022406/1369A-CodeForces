#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        if(a%4==0){
            printf("YES\n");

        }else{
            printf("NO\n");
        }
    }
    return 0;
}