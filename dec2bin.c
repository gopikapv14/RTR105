#include <stdio.h>
int
main () 
{
  
int g, o, k;
  
 
printf ("Enter a decimal number\n");
  
scanf ("%d", &g);
  
 
printf ("%d in binary is:\n", g);
  
 
for (o = 31; o >= 0; o--)
    
    {
      
k = g >> o;
      
 
if (k & 1)
	
printf ("1");
      
      else
	
printf ("0");
    
}
  
 
printf ("\n");
  
 
return 0;

}
