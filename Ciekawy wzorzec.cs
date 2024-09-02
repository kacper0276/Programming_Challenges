using System;

class Program
{
    static void Main()
    {
        string text = Console.ReadLine().Trim();
        string pattern = Console.ReadLine().Trim();

        int position = FindPatternPosition(text, pattern);

        if (position != -1)
        {
            Console.WriteLine(position);
        }
        else
        {
            Console.WriteLine("brak");
        }
    }

    static int FindPatternPosition(string text, string pattern)
    {
        int textLength = text.Length;
        int patternLength = pattern.Length;

        for (int i = 0; i <= textLength - patternLength; i++)
        {
            bool match = true;

            for (int j = 0; j < patternLength; j++)
            {
                int textIndex = i + j * 2;

                if (textIndex >= textLength || text[textIndex] != pattern[j])
                {
                    match = false;
                    break;
                }
            }

            if (match)
            {
                return i + 1;
            }
        }

        return -1;
    }
}
