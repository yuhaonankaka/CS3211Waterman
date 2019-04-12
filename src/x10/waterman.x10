package x10;
import x10.io.*;
import x10.io.Console;
import x10.array.*;
import x10.util.*;

public class waterman {

   public static def parseInput(inputPath: String): Rail[Char]{
   try {
   val input = new File(inputPath);
   var fullLength:Long = 0;
   val charList = new ArrayList[Char]();
   var count:Long = 0;
   	for (line in input.lines()) {
   		if(count!=0){
   			fullLength+=line.length();
   		val output:Rail[Char] = line.chars();
   		for (ch in output){
   			charList.add(ch);
   		}
   		}
   		count++;
   	}
   	val ret:Rail[Char] = charList.toRail();
   	return ret;

   }
   catch (e: IOException) { 
	   Console.OUT.println(e);  
   	}
   return null;
   }



    public static def main(args: Rail[String]) {
    	val charList1:Rail[Char] = parseInput("./AF043946.1");
    	val charList2:Rail[Char] = parseInput("./AF043947.1");
    	Console.OUT.println("first input: "+ charList1.toString());  
    	Console.OUT.println("second input: "+charList2.toString()); 
    }
}