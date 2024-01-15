<!-- 
    Create an application for user registration form using PHP.
    a. Insert the value of the form after button click
    b. Display the records in page
    c. Delete the selected record of the list 
    d. Update the selected record from the list
 -->
<!DOCTYPE html>
<html>
<head>
    <title>User Registration Form</title>
</head>
<body>
    <h2>User Registration Form</h2>
    <form method="post">
        <label for="name">Name:</label>
        <input type="text" name="name" id="name" required><br><br>
        <label for="email">Email:</label>
        <input type="email" name="email" id="email" required><br><br>
        <input type="submit" name="submit" value="Register">
    </form>
    <?php
    $users = [];
    // Checking  if form is submitted or not 
    if (isset($_POST['submit'])) {
        $name = $_POST['name'];
        $email = $_POST['email'];
        // Add user data to the array
        $users[] = ['name' => $name, 'email' => $email];
    }
    // Displaying Records
    if (!empty($users)) {
        echo "<h2>User Records</h2>";
        echo "<ul>";
        foreach ($users as $key => $user) {
            echo "<li>" . $user['name'] . " - " . $user['email'] . " ";
            echo "<a href='?delete=$key'>Delete</a> ";
            echo "<a href='edit.php?edit=$key'>Edit</a></li>";
        }
        echo "</ul>";
    }
    // Deleting Record
    if (isset($_GET['delete'])) {
        $index = $_GET['delete'];
        unset($users[$index]);
    }
    // Save updated array to session
    $_SESSION['users'] = $users;
    ?>
</body>
</html>