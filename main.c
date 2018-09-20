#include <stdio.h>
#include <stdlib.h>

int  countUnsignedNumber(int size,int a[]){
    int b=0;
    for (int i = 0; i <size ; ++i) {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
        if(a[i]>0)b+=a[i];
    }

    return b;
}
int main() {
    int size;
    int a[size];
    printf("Nhập size của mảng:");
    scanf("%d",&size);
    printf("%d",countUnsignedNumber(size,a));

}



