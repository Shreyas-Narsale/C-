
//Misslenous Operator

ans= (a+ b)*c;//paranthesis operator


int Arr[5];//Array Subscript Operator

struct Demo obj;
obj.i=11;//Direct Accessing Operator

struct Demo *p=&obj;
p->i=11;//Indirect Accessing Operator

--------------------------------

// Urinary Operator
ans=a++;//Post Increment
ans=++a;//Pre  Increment
a++;//Increment

ans=a--;//Post Decrement
ans=--a;//Pre Decrement
a--;//Decrement

int ans=+10;//Positive Sign Operator

int ans=-10;//minus Operator

! //logical not operator

~// bitwise not operator

int *p=(int *)malloc (sizeof(int)*3);//(type) typecasting

int no=11;
int *p=&no;

sizeof(int);

printf("%d",sizeof(++no));//4
//sixeof madhe le expression excute hot ny
printf("%d",no);//10
--------------------------------------------
//Arithematic Operator
int a=10;
int b=3;
int c=0;

c=a+b;//13
c=a-b;//7
c=a*b;//30
c=a/b;//3
c=a%b;//1(remindar)

--------------------------------------------
//Bitwise Operator
int a=13;//0000 1101
int b=21;
int c=0;

c= a& b;//AND


c= a| b;//OR
	

c = a^b;//XOR

c= ~b;//Negation

c=b<<3;//Left Shift
// c should be 168


c=b>>3;//Right Shift 
// c should be 2
-----------------------------------------------

//Comparesion Operator
int a=10;
int b=20;

if(a>b)// False
	
if(a<b)// True 

if(a==b)//False

if(a!=b)// True

if(a>=b)//False

if(a<=b)//True

------------------------------------------------
//Logical Operator
int a=10;
int b=20;

if((a>b)&&(a==b))//F && F =F
	
if((a<b)&&(a!=b))//T && T =T
	
if((a==b)||(a<b))//F || T =T

if((a<b)||(a!=b))//T || T =T
	
if((a!=b)&&(a<b))//T && T =T
	
if((a==b)||(a>b))//F || F =F
	
