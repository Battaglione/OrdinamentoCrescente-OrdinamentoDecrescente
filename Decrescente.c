#include <stdio.h>
#define N 10
int main(){
    int v[N], temp, i1, i2;

    for(i1 = 0; i1 < N; i1++){
        printf("Inserire il valore numero %d\n", i1 + 1);
        scanf("%d", &v[i1]);
    }


    for(i1 = 0; i1 < N; i1++){
        for(i2 = i1 + 1; i2 < N; i2++){
            if(v[i2] > v[i1]){
                temp = v[i1];
                v[i1] = v[i2];
                v[i2] = temp;
            }
        }
    }

    for(i1 = 0; i1 < N; i1++){
        printf("%d\n", v[i1]);
    }
}
