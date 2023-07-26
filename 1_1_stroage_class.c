#include<stdio.h>
int globvar=20;
int glob_a;
void disp()
{
	int a =20;
	printf("\n\na=%d\t",a);
	printf("glob_var in disp() is %d",globvar);	
	printf("\tglob_a is %d",glob_a);
	globvar=globvar*2;
}

void showstatic()
{
	static s_var1,s_var2=10;
	printf("\n\ns_var1 = %d\t s_var2=%d",s_var1++,s_var2++);
	printf("\tglob_var is %d",globvar);
}

void showregister(){
	register int i = 1000;
	printf("\n\n value of i is %d ",i );
	
	printf("\tglob_var in showregister() is %d",globvar);	
}

int main()
{
	printf("\nglobvar in main =%d",globvar);
	disp();
	showstatic();
	
	showstatic();
	showregister();
	printf("\n\nglobvar in main =%d",globvar);
}
