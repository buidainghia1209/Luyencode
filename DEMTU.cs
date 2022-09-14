using System;
class HelloWorld {
  static void Main() {
   string s=Console.ReadLine();
   s=s.Trim();
   if(String.IsNullOrEmpty(s)){
       Console.WriteLine("0");
   }
   else{
       
   }
   int i=0;
   while(i<s.Length){
       if((s[i]==' ')&&(s[i+1]==' ')){
           s=s.Remove(i,1);
           i--;
       }
       i++;
   }
    var s1=s.Split(' ');
   int count=s1.Length;
   Console.WriteLine("{0}", count);
   Console.ReadLine();
  }
}
