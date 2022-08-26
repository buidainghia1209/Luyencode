using System;

namespace baiVT01
{
    class Program
    {
        static void Main(string[] args)
        {
            var s = Console.ReadLine();
            int n = Convert.ToInt32(s);
            var s1 = Console.ReadLine();
            var s2 = s1.Split(' ');
            int[] a = new int[n];
            for (int i = 0; i < n; i++)
                a[i] = Convert.ToInt32(s2[i]);
            int max = a[0];
            for (int i = 0; i < n; i++)
                if (max < a[i]) max = a[i];
            Console.WriteLine(max);
        }
    }
}
