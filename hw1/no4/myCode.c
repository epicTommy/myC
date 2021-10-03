#include <stdio.h>
#include <string.h>

int main(void) {

    char first[30];
    char second[30];
    char third[30];

	printf("First string: ");
    scanf("%s", first);
    printf("Second string: ");
    scanf("%s", second);
    printf("Third string: ");
    scanf("%s", third);

    int num1, num2, num3;
    
    printf("Your input in order: \n");
    printf("%s\n",first);
    printf("%s\n",second);
    printf("%s\n",third);
    
    printf("Your input sorted: \n");    
    if(first[0] <= second[0] && first[0] <= third[0]){
        printf("%s\n",first);
        
        if(second[0] < third[0]){
            printf("%s\n", second);
            printf("%s\n", third);
        }
        else{
            printf("%s\n", third);
            printf("%s\n", second);
        }
    }
    else if(second[0] <= first[0] && second[0] <= third[0]){
        printf("%s\n", second);
        if(first[0] <= third[0]){
            printf("%s\n",first);
            printf("%s\n",third);
        }
        else{
            printf("%s\n",third);
            printf("%s\n",first);
        }
    }
    else{
        printf("%s\n",third);
        if(first[0] <= second[0]){
            printf("%s\n",first);
            printf("%s\n", second);
        }
        else{
            printf("%s\n", second);
            printf("%s\n",first);
        }
    }
}
