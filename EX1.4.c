#include <stdio.h>
int main()
{
    //this program is to tell whether the alphabet is vowel or consonent.
    char alpha;
    printf("Enter The alphabet.\n");
    scanf("%c",&alpha);
    (
        (alpha=='a' || alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')      ?
        printf("Entered alphabet %c is vowel. \nASCII VALUE IS:- %d",alpha,alpha) :
        printf("Entered number %c is consonent\nASCII VALUE IS :- %d",alpha,alpha) 
    );
return 0;
}