#include<stdio.h>

int main(){
    int a,b;
    printf("press 1 for english\n");
    printf("hindi ke liye 2 dabaiye\n");
    printf("gujarati mate 3 dabavo\n");
    printf("enter a value");
    scanf("%d",&a);
    switch(a) {
        case 1:
            printf("for internet recharge press 1\n");
            printf("for topup recharge press 2 \n");
            printf("for special recharge press 3 \n");
            printf("select from above three\n");
            scanf("%d",&b);
            switch(b){
                case 1:
                    printf("Your internet recharge is done successfully\n");
                break;
                case 2:
                    printf("Your Topup recharge is done successfully\n");
                break;
                case 3:
                    printf("Your special recharge is done successfully\n");
                break;
                default:
                    printf("please enter a valid number\n");
            }
        break;
        case 2:
            printf("internet recharge ke liye 1 dabaie\n");
            printf("top up recharge ke liye 2 dabaie\n");
            printf("special recharge ke liye 3 dabaie\n");
            printf("upar me se koi ek option chuniye\n");
            scanf("%d",&b);
                switch(b){
                    case 1:
                        printf("aapka internet recharge safaltapurvak ho gaya hai\n");
                    break;
                    case 2:
                        printf("aapka top up recharge safaltapurvak ho gaya hai\n");
                    break;
                    case 3:
                        printf("aapka special recharge safaltapurvak ho gaya hai\n");
                    break;
                    default:
                        printf("sahi number ka chunav kare\n");
                }
        break;
        case 3:
            printf("internet rechage mate 1 dabavo\n");
            printf("top up rechage mate 2 dabavo\n");
            printf("special rechage mate 3 dabavo\n");
            printf("upar na 3 mathi koi 1 option ni pasandagi karo\n");
            scanf("%d",&b);
                switch(b){
                    case 1:
                        printf("tamaru internet nu recharge safaltapurvak thai gayu chhe\n");
                    break;
                    case 2:
                        printf("tamaru topup recharge safaltapurvak thai gayu chhe\n");
                    break;
                    case 3:
                        printf("tamaru special rechage safalta purvak thai gayu chhe\n");
                    break;
                    default:
                        printf("aapela 3 mathi koi 1 vikalp ni pasandagi karo\n");
                }
        break;
        default:
            printf("Eror-404- Sorry!!!!more language is NOT supported\n");
    }
    printf("--------------------------------\n");
    printf("thank you for using our services\n");
}
