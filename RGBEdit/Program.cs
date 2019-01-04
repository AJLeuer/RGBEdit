using System;
using AuraSDKDotNet;

namespace RGBEdit
{
    public static class Program
    {
        public static void Main(string[] args)
        {
           var sdk = new AuraSDK();
           
           AuraDevice board = sdk.Motherboards[0];
           
        }
    }
}