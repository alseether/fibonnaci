//Derek Neil  
//figure out Fibonacci number for Norex job application
//c# version

using System;
   
public class FibonacciBigInteger {
	static void main () {
         
		//declare variables
		BigInteger previous = BigInteger(0);
      	BigInteger latest = BigInteger(1);
      	BigInteger temp = BigInteger(0);
      	int sum = 0;
      	String strdigit = "12345";
      	DateTime startTime
      	TimeSpan endTime;
      	
      	//start
      	Console.WriteLine("Calculating in C#: ");
      	startTime = DateTime.Now;
         
      	//build sequence with loop
      	for(int d=0; sum!=15165; d++){
      		temp = BigInteger.add(latest, previous);
      		previous = latest;
      		latest = temp;
      		strdigit = latest.ToString();
      		
            if(strdigit.Length>=2012){
            	sum = 0; //work out sum of last digits, digits's
            	for(int i=0; i<strdigit.Length; i++)
            		sum += Character.getNumericValue(strdigit.Substring(i,1));
            }
            
            //eye candy
            if(d%700==0)
            	Console.WriteLine(bigNumber.ToString());
      	}
      	
      	//print results
      	Console.WriteLine("\nThe magic numbers are: ");
  		for(int i=2005; i<=2011; i++){ //will return 2006-2012 digits
  			Console.WriteLine(strdigit.Substring(i,1));
  			if(i==2007)
  				Console.WriteLine("-");
  		}
        	 
      	//how long it took
      	endTime = DateTime.Now.Subtract(startTime);
           
      	//print some info
      	Console.WriteLinef("\nTotal execution time was: {0} seconds\n",(endTime)/1);
      	//Console.WriteLine("\nFibonacci number was:");
      	//Console.WriteLine(strdigit);
	}
}