<!DOCTYPE html>
<head>
    <title>PHP - Calculate Electricity Bill</title>
</head>

<?php
$result_str = $result = ''; /** result is declared for the output */
if(isset($_POST['unit-submit'])) {                          /** Format for the calculation of the bill */
    $units = $_POST['units']; /** Determines the units of electricity */
    if(!empty($units)) {
        $result = calculate_bill($units); /**result is calculated through units */
        $result_str = 'Total amount of '. $units . " - ".$result; /** the final output of results */
    }
}
/** To calculate electricity bill as per unit cost */
function calculate_bill($units) { /**function calculate units and determine what each unit costs */ 
    $unit_cost_first = 3.50;
    $unit_cost_next = 4.00;
    $unit_cost_ffg = 5.20;
    $unit_cost_last = 6.50;

    if($units <= 50) { /**if statements with conditions to calculate the bills accordingly */
        $bill = $units * $unit_cost_first;
    } 
    else if($units > 50 && $units <= 100) {
        $temp = 50 * $unit_cost_first;
        $remaining_units = $units - 50;
        $bill = $temp + ( $remaining_units * $unit_cost_next);
    }
    else if($units > 100 && $units <= 200) {
        $temp = (50 * 3.5) + (100 * $unit_cost_next);
        $remaining_units = $units - 150;
        $bill = $temp + ($remaining_units * $unit_cost_ffg);
    } 
    else {
        $temp = (50 * 3.5) + (100 * $unit_cost_next) + (100 * $unit_cost_ffg);
        $remaining_units = $units - 250;
        $bill = $temp + ($unit_cost_last);
    }
    return /** returns statements to return a value at the end */
    number_format((float)$bill, 2, '.',''); /**data type float is used because number return may be a decimal(may have a reminder) */

    /**div is a container
     * id is for a unique name
     * form action defines what might happen to the data when the form is submitted to the web page
     * input type="number" numbers to be inputed, similar to a textbox, also increases the number and decreases a typed number on the textbox with those textboxes
     * placeholder - provides the user with clarity of what should be written on the "textbox
     * input type="submit"... it is a button that submits what is put on the "textbox"
     * echo is used to display the $result_str(which is the final result) on the web page.
     */
    
}

?>

<body>
    <div id="page-wrap">
        <h1>Php - Calculate Electricity Bill</h1>

        <form action="" method="post" id="quiz-form">
            <input type="number" name="units" id="units" 
            placeholder="Enter the number of units"/>
            <input type="submit" name="unit-submit" value="Submit"/>   
        </form>

    </div>
    <div>
        <?php echo '<br />'.$result_str; ?>  
</div>
</body>
</html>