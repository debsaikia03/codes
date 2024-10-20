class test
{
static void fun(){}
static void fun(int a, int b) { System.out.println(a); } 
static void fun (double d) { System.out.println(d);}
public static void main(String[] args)
{
int x=10;
fun();
fun (x);
fun (5,6);
}
}