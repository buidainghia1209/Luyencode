using System;

namespace baivt10
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] a = new int[n];
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            for(int i = 0; i < n; i++)
            {
                a[i] = Convert.ToInt32(s1[i]);
            }
            int tg;
            //sapxep theo giam dan
            for (int i = 0; i < n; i++)
                for (int j = i + 1;j<n;j++)
                    if (a[i] < a[j])
                    {
                        tg = a[i];
                        a[i] = a[j];
                        a[j] = tg;
                    }
            for (int i = 0; i < n; i++)
                Console.Write("{0} ", a[i]);
        }
    }
}
