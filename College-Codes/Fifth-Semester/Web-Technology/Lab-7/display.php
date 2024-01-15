<?php 
 include 'connection.php' 
?> 
<!DOCTYPE html> 
<html lang="en"> 
<head> 
   <meta charset="UTF-8"> 
   <meta name="viewport" content="width=device-width, initial-scale=1.0"> 
   <title>Clients</title> 
   <link href=https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css rel="stylesheet"  integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN"  crossorigin="anonymous"> 
</head> 
<body> 
   <div class="container"> 
   <table class="table my-5"> 
      <thead> 
      <tr> 
         <th scope="col">ID</th> 
         <th scope="col">Name</th> 
         <th scope="col">Phone</th> 
         <th scope="col">Email</th>
         <th scope="col">Password</th> 
         <th scope="col">Operation</th> 
      </tr> 
   </thead> 
   <tbody> 
<?php 
   $sql="Select * from clients"; 
   $result=mysqli_query($conn,$sql); 
   if($result){ 
      while($row=mysqli_fetch_assoc($result)){ 
      $id=$row['id']; 
      $Full_name=$row['Full_name']; 
      $Phone=$row['Phone']; 
      $Email=$row['Email']; 
      $Password=$row['Password']; 
      echo ' 
         <tr> 
            <th scope="row">'.$id.'</th> 
            <td>'.$Full_name.'</td> 
            <td>'.$Phone.'</td> 
            <td>'.$Email.'</td> 
            <td>'.$Password.'</td> 
            <td> 
               <button class="btn btn-primary"><a href="update.php ?updateid='.$id.'" class="text-light"  >Update</a></button> 
            <button class="btn btn-danger"><a href="delete.php ?deleteid='.$id.'" class="text light">Delete</a></button> 
            </td> 
            </tr>
      '; 
   } 
} 
?> 
</tbody> 
</table> 
<button class="btn btn-primary my-5"><a href="user.php" class="text-light">Add User</a> </button> 
</div> 
</body> 
</html>
