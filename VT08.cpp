using System;

namespace vt07
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Int32.Parse(Console.ReadLine());
            int[] a = new int[n + 1];
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            for(int i = 0; i < n; i++)
                a[i] = Convert.ToInt32(s1[i]);
                a[n] = 0;
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 1)
                    {
                        a[i] = a[i] + Math.Abs(a[i + 1] - a[i - 1]);
                    }
                    Console.Write("{0} ", a[i]);
                }
        }
    }
}
