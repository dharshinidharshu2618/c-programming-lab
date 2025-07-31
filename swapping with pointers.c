#include<stdio.h>

//Fnuction for call by value
void swapValue(int a,int b);{
   int temp;
   temp = a;
   a = b;
   b = temp;
   printf("Inside swapValue -a:%d,b:%d\n",a,b);
  }

  //Function for call by referemce
  void swapRef(int*a,int*b){
      int temp ;
      temp = *a;
      *a = *b;
      *b temp;
      //Swaps actual variables using pointers
  }

  int main(){
    int x,y;

    printf("Enter two numbers:");
    scanf("%d%d,&x,&y");

    printf("\n--- Before Swap---\n");
    printf("X:%d,Y:%d\n",x,y);

    //Call-by-value: value won't actually swap in
    main
    swapValue(X,Y);
    printf("After swapValue(call-by-value):X:%d,y:%d\n",X,Y);

    //call-by-reference:values will swap in main
    swapRef(&X,&Y);
    printf("After swapRef(call-by-reference):X:%d,Y:%d\n",x,y);

    return 0;
  }
