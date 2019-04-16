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

    var size1:Long=input1.size;
    var size2:Long=input2.size;

    for (i in 0..size1)
      {
      scoreMatrix(i,0) = 0;
      }

    for (j in 0..size2)
    {
      scoreMatrix(0,j) =0;
    }

    for (i in 1..size1)
    {

      for (j in 1..size2)
      {
              var a0:Long = 0;
              var a1:Long = scoreMatrix(i-1,j-1) + blosum(input1[i-1],input2[j-1]);
              //var a2:Long = scoreMatrix(i-1,j) - penalty ();
              var a2:Long = scoreMatrix(i-1,j) - penalty(a,b,2);
              for (k in 0..i-2)
              {
                if (a2<(scoreMatrix(k,j) - penalty(a,b,i-k+1) ))
                {
                  a2 = scoreMatrix(k,j) - penalty(a,b,i-k+1);
                }
              }
              //var a3:Long = scoreMatrix(i,j-1) - penalty();

              var a3:Long = scoreMatrix(i,j-1) - penalty(a,b,2);

              for (k in 0..j-2)
              {
                if (a3<(scoreMatrix(i,k) - penalty (a,b,j-k+1)))
                {
                  a3 = scoreMatrix(i,k) - penalty (a,b,j-k+1);
                }
              }

              var max:Long = a0;
              if (a1>max)
              { 

                max = a1;
              }

              if (a2>max)
              {
                max=a2;
              }

              if (a3>max)
              {
                max=a3;
              }


      }

    }

   }

   //=================================================================================================

   

   

   

   //=================================================================================================

   // Find the max score value and its position







   //=================================================================================================

   

   

   

   //=================================================================================================

   // traceback;

   public static def traceback(scoreMatrix: Array_2[Long], input1:Rail[Char], input2:Rail[Char], blosum:Array_2[Long]): Rail[Point]



   {

	   //TODO 

	   // 按顺序输出路线;



    var max:Long =0;

    var max_i:Long = 0;

    var max_j:Long = 0;



    var size1:Long = input1.size;

    var size2:Long = input2.size;



     for (i in 0..size1) {

       for (j in 0..size2) {

         if (scoreMatrix(i,j) > max)

         {

          max=scoreMatrix(i,j);

          max_i=i;

          max_j=j;

         }

       }

     }

     

     var total_length1:Long = 0;

     var total_length2:Long = 0;

     var identity:Long = 0;

     var gaps:Long = 0;

     var score:Long = max;

     var current_score:Long = max;

     var current_i:Long = max_i;

     var current_j:Long = max_j;



     //var in1:String;

     //var in2:String;



     var in1 = new ArrayList[char]();

     var in2 = new ArrayList[char]();



     while (scoreMatrix(current_i,current_j)!=0)





     {

        if (current_score-blosum(input1(current_i-2),input2(current_j-2)) == scoreMatrix(current_i-1,current_j-1)) 

        {

          identity+=1;

          total_length1+=1;

          total_length2+=1;

          current_score = scoreMatrix(current_i-1,current_j-1);

          

          int1.add(input1[i-1]);

          int2.add(input2[j-1]);



          //int1 = input1[i] + int1;

          //int2 = input2[j] + int2;

          current_i-=1;

          current_j-=1;

        }



        else 

          {

            outer：for (var i:Long=current_i-1;i>=0;--i)

            {

              if (current_score + penalty(a,b,(current_i-i+1)) == scoreMatrix(i,current_j))

              {

                total_length1+=(current_i-i);

                current_score = scoreMatrix(i,current_j);

                for (j in (current_i-1)..i)

                {

                  //int1= input1[j] + int1;



                  int1.add(input1[i-1]);

                }



                gaps+=1;



                current_i=i;



                break outer;

 

              }

            }

          }



          else 



             {

            outer: for (var i:Long=current_j;i>=0;--i)

            {

              if (current_score + penalty(a,b,(current_j-i+1)) == scoreMatrix(current_i,i))

              {

                total_length2+=(current_j-i);

                current_score = scoreMatrix(current_i,i);

                for (j in (current_j-1)..i)

                {

                  //int2=input2[j] + int2;



                  in2.add(input2[j-1]);

                }



                gaps+=1;



                current_j=i;



                break outer;

 

              }

            }

          }



        







     }



     Console.OUT.println("Identity: " + identity + "/" + total_length1 + "(" + identity/total_length1*100 +"%)"); 

     Console.OUT.println("Gaps: " + gaps + "/" + total_length1 + "(" +gaps/total_length1*100 + "%)");



     Console.OUT.println("Score: " + score);



     //Console.OUT.println("1: " + in1);

     //Console.OUT.println("2: " + in2);

     

     Console.OUT.print("1: ");

     for (i in in1.size..0) 

     {

      Console.OUT.print(in1[i]);

     }



     Console.OUT.println();





     Console.OUT.print("2: ");

     for (i in in2.size..0) 

     {

      Console.OUT.print(in2[i]);

     }



     Console.OUT.println();





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

    	val m:Long = charList2.size + 1; // the column length of score matrix;

    	Console.OUT.println("n: "+n); 

    	Console.OUT.println("m: "+m); 

    	

    	/*

    	val scoreMatrix = new Array_2[Long](n, m, 0); // build a n x m matrix and initialize everything to 0, no need to initialize the first row and column;

    	calculate(scoreMatrix,charList1,charList2,blosum); // calculate the score matrix

    	val sequence:Rail[Point] = traceback(scoreMatrix,charList1,charList2,blosum); // trace back and give out the sequence;

    	printResult(sequence); // print the result;

    	*/

    	

    	

    }

}
