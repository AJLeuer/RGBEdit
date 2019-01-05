using System;
using System.IO;
using AuraSDKDotNet;

namespace RGBEdit.NET
{
    internal static class Program
    {
        public static void Main()
        {
            String currentDirectory = Path.GetDirectoryName(System.Reflection.Assembly.GetExecutingAssembly().Location);
            String auraSDKPath = $"{currentDirectory}\\Libraries\\AuraSDK\\sdk\\AURA_SDK.dll";
            
            var sdk = new AuraSDK(path: auraSDKPath);
           
            AuraDevice board = sdk.Motherboards[0];
        }
    }
}