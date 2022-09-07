using System;
namespace Ngay2
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int n = Convert.ToInt32(s);
            int tonguoc = 0;

            if (n < 0) Console.WriteLine("NO");
            else
            {
                for (int i = 1; i < n; i++)
                    if (n % i == 0) tonguoc = tonguoc + i;
                if (tonguoc == n) Console.WriteLine("YES");
                else Console.WriteLine("NO");

            }
        }
    }
}
