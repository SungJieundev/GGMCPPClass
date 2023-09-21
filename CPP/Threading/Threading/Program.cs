using System;

namespace Threading
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //AsyncTest1 test7 = new AsyncTest1();
            //test7.Start();

            //AsyncTest2 test8 = new AsyncTest2();
            //test8.Start();

            AsyncTest3 test9 = new AsyncTest3();
            test9.Start();

            Console.ReadKey();
        }
    }
}