//Derek Neil  
//figure out Fibonacci number for Norex job application
//java version, runs 0.5 seconds faster without arraylists
//using %100 of one cpu, and 50mb of ram, it's slower then php

import java.math.BigInteger;
   
public class FibonacciBigInteger {
	public static void main (String [] args) {
         
		//declare variables
		BigInteger previous = new BigInteger("0");
      	BigInteger latest = new BigInteger("1");
      	BigInteger temp = new BigInteger("0");
      	int sum = 0;
      	String strdigit = "12345";
      	long startTime, endTime;
      	
      	//start
      	System.out.print("Calculating in Java: ");
      	startTime = System.currentTimeMillis();
         
      	//build sequence with loop
      	for(int d=0; sum!=15165; d++){
      		temp = previous.add(latest);
      		previous = latest;
      		latest = temp;
      		strdigit = latest.toString();
      		
            if(strdigit.length()>=2012){
            	sum = 0; //work out sum of last digits, digits's
            	for(int i=0; i<strdigit.length(); i++)
            		sum += Character.getNumericValue(strdigit.charAt(i));
            }
            
            //eye candy
            if(d%700==0)
            	System.out.print(". ");
      	}
      	
      	//print results
      	System.out.print("\nThe magic numbers are: ");
  		for(int i=2005; i<=2011; i++){ //will return 2006-2012 digits
  			System.out.print(strdigit.charAt(i));
  			if(i==2007)
  				System.out.print("-");
  		}
        	 
      	//how long it took
      	endTime = System.currentTimeMillis();
           
      	//print some info
      	System.out.printf("\nTotal execution time was: %.2f seconds\n",(endTime - startTime)/1000.00);
      	//System.out.println("\nFibonacci number was:");
      	//System.out.println(strdigit);
	}
}