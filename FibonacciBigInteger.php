<?php
//Derek Neil
//figure out Fibonacci number for Norex job application
//php version, a hair faster then java!
//uses 100% of one cpu core, and 8.5mb of ram

//declare variables
include('BigInteger.php');
$previous = new Math_BigInteger(0);
$latest = new Math_BigInteger(1);
$temp = new Math_BigInteger(0);
$sum = 0;
$strdigit = "12345";

//start
print "Calculating in PHP: ";
$startTime = microtime(true);

//build sequence with loop
for($dot=0; $sum!=15165; $dot++){
	$temp = $latest->add($previous);
	$previous = $latest;
	$latest = $temp;
	$strdigit = "".$latest;
	 
	if(strlen($strdigit) >= 2012){
		$sum = 0; //work out sum of last digits, digits's
		for($i=0; $i<strlen($strdigit); $i++)
			$sum = $sum + (int)$strdigit[$i];
	}
		
	//eye candy
    if($dot%700==0)
    	print ". ";
}

//print results
$result = "\nThe magic numbers are: ";
for($i=2005; $i<=2011; $i++){ //will return 2006-2012 digits
	 $result = $result.$strdigit[$i];
	 if($i==2007)
		 $result = $result."-";
}

//how long it took
$runTime = number_format((microtime(true) - $startTime),2,'.','');

//print some info
print $result;
print "\nTotal execution time was: ".$runTime." seconds";
//print "\n\nFibonacci number was:\n";
//print $strdigit."\n";
?>