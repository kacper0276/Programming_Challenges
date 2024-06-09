using System.Collections.Generic;

public class Kata
{
    public static List<int> Spot(string s1, string s2)
    {
        List<int> list = new();
        
        for (int i = 0; i < s1.Length; i++)
        {
            if (s1[i] != s2[i])
            {
                list.Add(i);
            }
        }

        return list;
    }

    static void Main()
    {
        List<int> res = Spot("Hello World!", "hello world.");

        foreach (int i in res)
        {
            Console.WriteLine(i);
        }
    }
}