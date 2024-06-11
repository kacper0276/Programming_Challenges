﻿using System;

public static class Kata
{
    public static int NearestSq(int n)
    {
        return (int)Math.Pow(Math.Round(Math.Sqrt(n)), 2);
    }

    static void Main()
    {
        Console.WriteLine(NearestSq(9999));
        Console.WriteLine(NearestSq(111));
        Console.WriteLine(NearestSq(2));
    }
}