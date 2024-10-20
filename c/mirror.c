#include<stdio.h>
int main()
{
int a;

printf("Press 1, if the object is at infinity.\n");
printf("Press 2, if the object is beyond the centre of curvature.\n");
printf("Press 3, if the object is at the centre of curvature.\n");
printf("Press 4, if the object is between focus and centre of curvature.\n");
printf("Press 5, if the object is at the principal focus.\n");
printf("Press 6, if the object is between the pole and principal focus.\n");
scanf("%d",&a);

if(a==1)
{
 printf("The image is formed at the principal focus or in the focal plane.\n");
 printf("The nature of the image is real, inverted, extremely diminished in size.\n");
}
else if(a==2)
{
 printf("The image is formed between the principal focus and centre of curvature.\n");
 printf("The nature of the image is real, inverted and diminished.\n");
}
else if(a==3)
{
  printf("The image is formed at the centre of curvature.\n");
  printf("The nature of the image is real, inverted and equal to object.\n");
}
else if(a==4)
{
   printf("The image is formed beyond centre of curvature.\n");
   printf("The nature of the image is real, inverted and bigger than object.\n");
}
else if(a==5)
{
   printf("The image is formed at infinity.\n");
   printf("The nature of the image is extremely magnified.\n");
}
else if(a==6)
{
   printf("The image is formed behind the mirror.\n");
   printf("The nature of the image is virtual, erect and magnified.\n");
}
else
{
 printf("Invalid input.\n");
}
 return 0;
}

 
 

