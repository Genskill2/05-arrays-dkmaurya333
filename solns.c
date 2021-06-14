/* Enter your solutions in this file */
#include <stdio.h>
//1.function to find max
int max(int a[],int b)
{	for (int i=1;i<b;i++)
	{ if(a[0]<a[i])
		a[0]=a[i];	
	}
return a[0];
}

//2.function to find min

int min(int a[],int b)
{
	for (int i=1;i<b;i++)
	{
	if(a[0]>a[i])
		a[0]=a[i];
	}
return a[0];
}		

//3. function for average

float average(int a[], int b)
{
 float sum=0.0;
 for (int i=0;i<b;i++)
 {
  sum=+a[i];
  }
  
 return (sum/(float)b);
 }
 
 //4.function to find the mode of an array
 
 int mode(int a[], int b)
 { int n, itt=0;
  for(int i=0;i<b;i++)
  {int k=0; 
  for(int j=0;j<b;j++)
  	{
  	 if (a[j]==a[i])
  	 { k++;
	}
  }
  if(k>=itt)
  { 
   itt=k; 
   n=a[i];
   } 
  }
  return n;
  }
  
 // 5.function to get the prime factors 
 
 int factors(int b, int a[])
 {
 int isprim(int p)
 {
 int k=0;
 for(int i=1;i<p;i++)
 {if(p%i==0)
 k++;
 return k;
 }
 }
 int j=0;
 for(int i=2,n=b;i<b;i++)
 { 
 if(isprim(i)==1)
 {
 while(n%i==0)
   { n=n/i;
   a[j++]=i;
   }
 }
 }
 return j;
 }
 
 

