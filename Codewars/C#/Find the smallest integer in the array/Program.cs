    public class Kata
    {
        public static int FindSmallestInt(int[] args)
        {
            int min = args[0];

            foreach (int arg in args)
            { 
                if (arg < min)
                {
                    min = arg;
                }
            }

            return min;
        }

        static void Main()
        {
            Console.WriteLine(FindSmallestInt(new int[] { 78, 56, -2, 12, 8, -33 }));
        }
    }