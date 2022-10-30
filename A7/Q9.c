#include<stdio.h>
#include<math.h>

int main(){
    int cp, sp, profit, loss;
    printf("Enter the cost price: ");
    scanf("%d", &cp);

    printf("Enter the selling price: ");
    scanf("%d", &sp);
    
    profit = (sp - cp) * 100 / sp;
    loss = (cp - sp) * 100 / cp;

    if (sp > cp){
        printf("Profit");
    }
    else{
        printf("loss");
    }

    return 0;
}