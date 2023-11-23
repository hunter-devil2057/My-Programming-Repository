<?php 
// Data Type: type of value which is stored inside the variable name. 
// This is String Data Type
	$x="Hello, Programmers...";
	echo "String Value: ".$x."</br>";

	// This is a function - returns 2 things 
	// Shows the value and data type of a variable
	var_dump($x);
	// This is Integer Data Type 
	$x=25;
	echo "</br>"."Integer Value: " .$x."</br>";
	var_dump($x);
	// This is Float Data Type 
	$x=30.50;
	echo "</br>Float Value: ".$x."</br>";
	var_dump($x);	//Shows the data and data types of variable x
	// This is Boolean Data Type
	$x=true;
	echo "</br>Boolean Value:".$x."</br>";
	var_dump($x);	//Shows the data and data types of variable x.
	// This is array
	$x=array("HTML", "CSS", "JS");
	echo "</br>This is an Array: ".$x[0].", ".$x[1].", ".$x[2]." (Used to Insert and Store Multiple Values)"."</br>";
	var_dump($x);
	// This is an Object
	// $x=new MyClass();
	// This is Null Data Type 
	$x=null;
	echo "</br>"."Null Data Type:".$x."</br?";
	var_dump($x);
 ?>