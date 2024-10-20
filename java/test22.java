class A
{
final int x;
A(){x=20;}
A(int z) {x=30;}
}
class test
{
public static void main(String args[])
{
A a=new A();
System.out.println("The data is"+a.x);
}
}