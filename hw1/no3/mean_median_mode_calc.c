#include <stdio.h>

int main(void) {
    printf("\nMean,Median, Mode Calculator\n\n");
 
    int num[5]; 
    printf("Please enter an integer: ");
    scanf("%d", &num[0]);
    printf("Please enter an integer: ");
    scanf("%d",&num[1]);
    printf("Please enter an integer: ");
    scanf("%d",&num[2]);
    printf("Please enter an integer: ");
    scanf("%d",&num[3]);
    printf("Please enter an integer: ");
	scanf("%d",&num[4]);
     
    int sum = 0;
    //adds all elements in the array
    for(int i = 0; i < 5; i++){
        sum += num[i];
    }
    
    //sorts the array in order
    for(int i = 0; i < 5; i++){
        for(int j = 0; j <  5 - i; j++){
            if(num[j+1] < num[j]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    
    int mode;
    int maxAppear = 1;
    //determines the mode
    for(int i = 0; i < 5; i++){
        int appear = 0;
        for(int j = i; j <5; j++){
            if(num[i] == num[j]){
                appear++;
            }
        }
        if(appear > maxAppear){
            mode = num[i];
            maxAppear = appear;
        }
    }  

    double  mean = sum / 5.0;    

    printf("\n");
    printf("Your mean is: ");
    printf("%.2f\n", mean);

    printf("Your median is: ");
    printf("%d\n", num[2]);

    printf("Your mode is: ");
    if(maxAppear == 1){
        printf("There is no mode\n");
    }
    else{
        printf("%d\n", mode);
    }
}
