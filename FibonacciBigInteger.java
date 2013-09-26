//Derek Neil  
//figure out Fibonacci number for Norex job application
//java version, runs 0.5 seconds faster without arraylists
//using %100 of one cpu, and 50mb of ram, it's slower then php

import java.math.BigInteger;
import java.math.BigDecimal;
   
public class FibonacciBigInteger {
	
	public static BigDecimal pow(BigDecimal op, BigInteger n){
		BigDecimal result = new BigDecimal(op.toString());
		BigInteger one = new BigInteger("1");
		for(BigInteger i = new BigInteger("0"); 
			i.compareTo(n)<0;
			i=i.add(one)
			)
			result = result.multiply(op);
		return result;
	}
	
	public static void main (String [] args) {
        
      	int sum = 0;
      	String strdigit = "12345";
      	long startTime, endTime;
      	
      	startTime=System.currentTimeMillis();
      	//try binary search short hand calculation method
      	BigInteger lower = new BigInteger("1");
      	int length = 20;
      	String upperStr = "9";
      	for(int i=0; i<length-1; i++)
      		upperStr+="9";
      	BigInteger upper = new BigInteger(upperStr);
      	BigInteger n = upper.divide(lower); //need to know which fibonacci number though!
      	
      	BigDecimal a , b;
      	
      	double a0 = Math.sqrt(5);
      	BigDecimal a1 = new BigDecimal( (3.0-a0)/2 );
      	double a2 = 3.0*a0;
      	BigDecimal a3 = new BigDecimal( 5.0-a2 );
      	
      	BigDecimal b0 = new BigDecimal( (3.0+a0)/2 );
      	BigDecimal b1 = new BigDecimal( 5.0+a2 );
      	
      	BigDecimal ten = new BigDecimal( 10.0 );
      	BigInteger two = new BigInteger("2");
      	
      	System.out.print("Calculating (binary formula) in Java: ");
      	boolean found=false;
      	int calcs = 0;
      	while(!found){
      		calcs++;
      		if(calcs%700==0)
      			System.out.print(". ");
      		n = upper.add(lower);
      		n = n.divide(two);
	      	a = pow(a1,n);//custom version to take a BigInteger n as the power
	      	a = a.multiply(a3);
	      	b=pow(b0,n);
	      	b=b.multiply(b1);
	      	a=a.add(b);
	      	a=a.divide(ten);
	      	strdigit = a.toString();
      	
	      	int len = strdigit.length();
      		if(len>=length){
            	sum = 0; //work out sum of last digits, digits's
            	if(len<length+1){
	            	for(int i=0; i<len; i++)
	            		sum += Character.getNumericValue(strdigit.charAt(i));
	            	System.out.println("Length:"+len+" Sum:"+sum+" "+strdigit);
	            	if(sum == 15165)
	            		break;
            	}
            	else{
            		upper=new BigInteger(n.toString());//binary reduce n
            	}
            }
      		else{
      			System.out.println("Length:"+len+" "+strdigit);
      			lower=new BigInteger(n.toString());//binary increase n
      		}
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
      	
      	System.out.println("Took "+calcs+" steps to calculate with binary search on n with formula");
      	System.out.printf("\nTotal execution time (binary formula) was: %.2f seconds\n",(endTime - startTime)/1000.00);
      	
      	
      	
      	//start itterative method
      	BigInteger previous = new BigInteger("0");
        BigInteger latest = new BigInteger("1");
        BigInteger temp = new BigInteger("0");
      	System.out.print("Itterating in Java: ");
      	startTime = System.currentTimeMillis();
         
      	//build sequence with loop
      	for(int d=0; sum!=15165; d++){
      		temp = previous.add(latest);
      		previous = latest;
      		latest = temp;
      		strdigit = latest.toString();
      		
            if(strdigit.length()>=length){
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
      	System.out.println("Fibonacci number was length:"+strdigit.length());
      	//System.out.println(strdigit);
	}
}