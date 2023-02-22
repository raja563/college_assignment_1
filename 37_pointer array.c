/*37	  C Program to find the sum of elements stored in array list
  using array & pointers.*/
  
  #include<stdio.h>
  
  int main()
  {
  int array[3],*p,i,sum=0;
  p=&array;
  printf("enter element of array\n");
  for(i=0;i<3;i++)
  {
      scanf("%d",p+i);

  }
  for(i=0;i<3;i++)
  {
      printf("%d  ",*(p+i));
      sum=sum+(*(p+i));
  }
  printf("\nsum is :%d",sum);
  return 0;
  }
