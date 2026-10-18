#include<stdio.h>
#include<math.h>

double divison(double, double);
double modulus(int, int);
void print_menu();

int main()
{
    int choice;
    double first, second, result;
    while(1){
        print_menu();
        if(scanf("%d", &choice) != 1){
            printf("Input is not read\n");
            return 1;
        }
        if (choice ==7){
            break;
        }

        if(choice < 1 || choice > 7){
            fprintf(stderr, "Invalid Menu Choice.");
            continue;
        }

        printf("\nPlease enter your first number: ");
        scanf("%lf", &first);
        printf("Now, enter your second number: ");
        scanf("%lf", &second);
    

        switch(choice)
        {
            case 1: 
            result = first + second;
            break;
            case 2:
            result = first - second;
            break;
            case 3:
            result = first * second;
            break;
            case 4:
            result = divison(first, second);
            break;
            case 5:
            result = modulus(first, second);
            break;
            case 6:
            result = pow(first, second);

            break;
        
        }

        if (!isnan(result)){
        printf("\nResult of operation is: %.2f", result);
        }
    };

        return 0;
}
double divison(double a, double b){
    if (b == 0){
        fprintf(stderr,"Invalid Argument for Divison");
        return NAN;
    }else{
        return a/b;
    }

}
double modulus(int a, int b){
    if (b == 0){
        fprintf(stderr,"Invalid Argument for modulus");
        return NAN;
    }else{
        return a%b;
    }
}

    void print_menu(){
            printf("\n\n\nSIMPLE CALCULATOR--------------------\n");
            printf("\nSelect your operator\n");
            printf("\nno.1 Add");
            printf("\nno.2 Subtract");
            printf("\nno.3 Multiplication");
            printf("\nno.4 Divison");
             printf("\nno.5 Modulus");
            printf("\nno.6 Power");
            printf("\nno.7 Exit");
            printf("\nEnter your choice: ");
}


