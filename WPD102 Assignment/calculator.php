<!DOCTYPE html>
<html lang="en">
<head>
    <title>PHP Calculator</title>
</head>
<body>
    <form action="<?= $_SEVER['PHP_SELF'] ?>" method="get"></form>
    <!-- Number 1 -->
    <div>
        <label for="num1">Number 1</label>
        <input type="number" name="num1" id="num1">
    </div>

    <!-- Number 2 -->
    <div>
        <label for="num2">Number 2</label>
        <input type="number" name="num2" id="num2">
    </div>

    <!-- Output -->
    <div>
    <label for="Output">Output</label>
        <input type="number" id="Output" disabled>
    </div>

    <!-- Operator -->
    <div>
        <input type="submit" value="addition" name="operation">
        <input type="submit" value="subtraction" name="operation">
        <input type="submit" value="multiplication" name="operation">
        <input type="submit" value="division" name="operation">
    </div>
    
</body>
</html>