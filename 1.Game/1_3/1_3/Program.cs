using System;
using System.Diagnostics;
using System.Linq;

namespace _1_3
{
    class Program
    {
        static void Main(string[] args)
        {
            MakeUsage((float) 0.5);
        }

        private static void MakeUsage(float level)
        {
            PerformanceCounter performanceCounter = new PerformanceCounter("Processor Information", "% Processor Time", "_Total");

            while (true)
            {
                if (performanceCounter.NextValue() > level)
                    System.Threading.Thread.Sleep(10);
            }
        }
    }
}
