class A
{
public:
   // non static
   int var1;
   void f1() {};
   //static
   static int var2;
   static void f2() {};
};
// initialisation de la variable static
int A::var2 = 0;
int main()
{
   // non static
   A a;
   a.var1 = 1;
   a.f1();

   //static
   A::var2 = 1;
   A::f2();
}

