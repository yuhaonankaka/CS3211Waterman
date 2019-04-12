package x10;
import x10.io.*;
import x10.io.Console;
import x10.array.*;
import x10.util.*;

public class waterman {

	//=================================================================================================
	// build the Blosum dict;
	public static def buildBlosum(inputBlosum: String):Array_2[Long]{
		// TODO build a real parser;
		val blosum = new Array_2[Long](4, 4);
		// A:0 C:1 G:2 T:3
		blosum(0,0) = 4;
		blosum(0,1) = 0;
		blosum(0,2) = 0;
		blosum(0,3) = 0;
		blosum(1,0) = 0;
		blosum(1,1) = 9;
		blosum(1,2) = -3;
		blosum(1,3) = -1;
		blosum(2,0) = 0;
		blosum(2,1) = -3;
		blosum(2,2) = 6;
		blosum(2,3) = -2;
		blosum(3,0) = 0;
		blosum(3,1) = -1;
		blosum(3,2) = -2;
		blosum(3,3) = 5;
		return blosum;
	};
	//=================================================================================================
	
	
	//=================================================================================================
	//penalty function;
	public static def penalty(a:Long,b:Long,l:Long): Long{
		return a+b*(l-1);
	}
	//=================================================================================================
	
	
	//=================================================================================================
	// parse the input files;
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
   };
   //=================================================================================================

   
   
   
   
   //=================================================================================================
   // calculate the score matrix;
   public static def calculate(scoreMatrix: Array_2[Long], input1:Rail[Char],input2:Rail[Char],blosum:Array_2[Long]): void{
	   //TODO calculate the score matrix;
   }
   //=================================================================================================
   
   
   
   //=================================================================================================
   // traceback;
   public static def traceback(scoreMatrix: Array_2[Long]): Rail[Point]{
	   //TODO 
	   // 按顺序输出路线;
	   return null;
   }
   //=================================================================================================
   
   
   
   
   //=================================================================================================
   // Print Result
   public static def printResult(seq:Rail[Point]): void{
	   //TODO 
	   // 打印结果
   }
   //=================================================================================================
   
   
   
   
   
   //=================================================================================================
   //main function
    public static def main(args: Rail[String]) {
    	val charList1:Rail[Char] = parseInput("./AF043946.1");
    	val charList2:Rail[Char] = parseInput("./AF043947.1");
    	Console.OUT.println("first input: "+ charList1.toString());  
    	Console.OUT.println("second input: "+charList2.toString()); 
    	val blosum = buildBlosum("not inplemented yet");
    	Console.OUT.println("blosum: "+blosum.toString()); 
    	Console.OUT.println("blosum[1,1]: "+blosum(1,1)); //用这种方法来调用blosum的分数，例如[A,A]的分数就是blosum(0,0)
    	
    	val n:Long = charList1.size + 1; // the row length of score matrix;
    	val m:Long = charList1.size + 1; // the column length of score matrix;
    	Console.OUT.println("n: "+n); 
    	Console.OUT.println("m: "+m); 
    	
    	/*
    	val scoreMatrix = new Array_2[Long](n, m, 0); // build a n x m matrix and initialize everything to 0, no need to initialize the first row and column;
    	calculate(scoreMatrix,charList1,charList2,blosum); // calculate the score matrix
    	val sequence:Rail[Point] = traceback(scoreMatrix); // trace back and give out the sequence;
    	printResult(sequence); // print the result;
    	*/
    	
    	
    }
}
//=================================================================================================