#include <stdio.h>

int main(){

int i, arr_1[10];

for(i=1;i<=10;i++){
    arr_1[i] = i;
}

for(i=1;i<=10;i++){
    printf("%d\n",arr_1[i]);
}

return 0;

}