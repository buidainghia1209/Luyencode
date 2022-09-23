using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Baivt04
{
    class Program
    {
        static void Main(string[] args)
        {
            int dem = 0; int tong = 0;
            string s = Console.ReadLine();
            int n = Int32.Parse(s);
            string s3 = Console.ReadLine();
            var s4 = s3.Split(' ');
            int[] a = new int[n];
            for(int i=0;i<n;i++)
                a[i] = Convert.ToInt32(s4[i]);
            for (int i = 0; i < n; i++)
                if (Math.Abs(a[i]) % 2 == 1)
                {
                    tong = tong + a[i];
                    dem++;
                }
            if (dem > 0)
            {
                double tbc = tong / (dem * 1.0);
                Console.WriteLine(decimal.Parse(tbc.ToString("0.0000")));
            }
        }
    }
}
