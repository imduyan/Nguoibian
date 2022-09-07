#include <stdio.h>
#include <stdlib.h>

//program demo if-else-if structure:
int main(){
    system("cls");

    int diemKQ;
    printf("Enter mark:");
    scanf("%d", &diemKQ);

    //check mark:
    if (diemKQ >= 0 && diemKQ <= 100)
    {
      if (diemKQ >= 85)
      {
        printf(">>Very good!!");
      }
      else if (diemKQ >= 80)
      {
        printf(">>Good!");
      }
      else if (diemKQ >= 70)
      {
        printf(">>Not good!");
      }
      else if (diemKQ >= 50)
      {
        printf(">>Bad!");
      }
      else{
        printf("Not sastisfy the requirement!");
      }
    }
    else{
      printf("Mark is invalid!! [0-100]");
    }
}