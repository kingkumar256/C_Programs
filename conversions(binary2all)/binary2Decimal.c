#include<stdio.h>


int binary2decimal(num)
{
   
 int rem,val,base;
    
base=1;
    val=0;
   
 while(num>0)
    {
    
    rem=num%10;
       
 val=val+base*rem;
    
    num=num/10;
      
  base=base*2;
    }
 
   return val;
    
}


int main()
{
    
int num,result;
   
 scanf("%d",&num);
 
   result=binary2decimal(num);
 
   printf(result);
}
