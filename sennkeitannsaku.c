#include <stdio.h>

int main(void)
{
    int result;
    int ans;
    int cnt = 0;
    int hairetu[] = {1 ,2 ,3 ,4, 5};
    printf("線形探索。数字を入力しろ\n"); scanf("%d", &ans);
    for (cnt = 0; cnt <= 5; cnt++)
    {
        if (hairetu[cnt] == ans){
            int result = hairetu[cnt];
            int cnt = cnt + 1;
            printf("%dはある\n", result);
            break;
        }else{
            int cnt = cnt + 1;
        }
        
    }

    return 0;
}