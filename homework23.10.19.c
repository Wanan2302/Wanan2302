//A：能同时被3，5，7整除；
//B：能被其中两数(要指出哪两个)整除；
//C：能被其中一个数(要指出哪一个)整除；
//D：不能被3，5，7任一个整除。
#include <stdio.h>
int main(void)
{ 	int n,s=0;                     //定义变量n，s                                            
  	printf("Please input n=:");	   //提示输入要判断的数                             
	scanf("%d", &n);	           //输入                     
	if (n%3==0) s+=1;		       //判断是否能被3整除，s+1                        
	if (n%5==0) s+=2;		       //判断是否能被5整除，s+2                        
	if (n%7==0) s+=4;		       //判断是否能被7整除，s+4                         
	switch(s)		               //switch语句，判断s的值                 
	{	
        case 0:	printf("D:none\n");break;	    /*对应的所有情况*/                            
      	case 1:	printf("C:3\n");break;	                                
		case 2:	printf("C:5\n");break;	                                
		case 3:	printf("B:3,5\n");break;		                                
		case 4:	printf("C:7\n");break;	                                
		case 5:	printf("B:3,7\n");break;		                                
		case 6:	printf("B:5,7\n");break;		                                
		case 7:	printf("A:3,5,7\n");break;	                                
	}
    return 0;
}