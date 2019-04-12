package x10;
import x10.io.*;
import x10.io.Console;
import x10.array.*;

public class waterman {

   public static def parseInput(inputPath: String){
   try {
   val input = new File(inputPath);
   var count:Long = 0;
   	for (line in input.lines()) {
   		if(count!=0){
   		Console.OUT.println(line.length());
   		var output:Rail[Char] = line.chars();
   		Console.OUT.println(output.toString());
   		}
   		count++;
   	}
   }
   catch (e: IOException) { 
	   Console.OUT.println(e);  
   	}
   }



    public static def main(args: Rail[String]) {
    	parseInput("./haha.txt");
    }
}