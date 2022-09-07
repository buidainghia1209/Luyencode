using System;

namespace bai2
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            long n = Convert.ToInt32(s);
            if (n == 0) Console.WriteLine("INF");
            else
            {
                for (int i = (int)Math.Abs(n); i > 0; i--)
                {
                    if (i > 1)
                    {
                        if (n % i == 0) Console.Write("{0} ", i);
                    }
                }

                Console.Write("1");
                
            }
        }

    }
}
