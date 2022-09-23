using System;

namespace VT09
{
    class Program
    {
        static bool snt (int x)
        {
            for (int i = 2; i <= Math.Sqrt(x); i++)
                if (x % i == 0) return false;
            return (x >= 2);
        }
        static void Main(string[] args)
        {
            string s1 = Console.ReadLine();
            int n = Int32.Parse(s1);
            //int n = Int32.Parse(Console.ReadLine());
            int[] a = new int[n];
            int[] b = new int[n]; // lưu các số nguyên tối khác nhau
            var s = Console.ReadLine().Split(' ');
            for (int i = 0; i < n; i++)
                a[i] = Int32.Parse(s[i]);
            
            int tg;
            for (int i = 0; i < n - 1;i++)
                for(int m = i +1;m < n; m++)
                    if (a[i] > a[m])
                    {
                        tg = a[i];
                        a[i] = a[m];
                        a[m] = tg;
                    }
            // liệt kê các số nguyên tố
            int j = 0;
            int dem;
            for (int i = 0; i< n; i ++)
                if (snt(a[i]))
                {
                    dem = 0;
                    for (int k = 0; k <= j; k++)
                    {
                        if (a[i] != b[k]) dem++;

                    }
                    if (dem == (j + 1))
                    {
                        b[j + 1] = a[i];
                        ++j;
                    }
                }
            for (int i = 1; i <= j; i++)
                Console.Write("{0} ", b[i]);

        }
    }
}
