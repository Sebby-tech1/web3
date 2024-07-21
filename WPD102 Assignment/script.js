var screen = document.getElementById('screen'); //returns an element of this document that has the specified value for its id attribute.
 //screen where values will be displayed

    screen.value = "0"; //zero will be the default value on screen unless an invalid expression is entered


    function runCalculator(value){      //allows the values to be inputted to screen
        if(screen.value == "0")     //pops by default
        screen.value = '';

        screen.value += value;      //allows the user to add more than on value on screen
}

function findResult(){
    try{    //tries to capture the proper result

        var result = eval(screen.value);     //evaluates the string expression and returns a value  e.g. 1+1=2  
        //formula to find result

        if(screen.value == "" || screen.value == "0"){ //If you press enter without any numbers on screen,
                                                    // the alert message will be displayed by the browser.
            alert("Please enter values into thee_matrix!");
            screen.value = "0";
        }else {
            screen.value = result;
        }

    } catch (err) {     //captures the invalid expression
        screen.value = "";
    }

}

function clearCalculator(){

        screen.value = "";
        alert("You have cleared the screen");       //function that whips data on screen
       screen.value = "0";
    } 
        
function deleteCalculator(value){
    
        screen.value = screen.value.slice(0,-1);  //removes the last character
                                                  //0 stands for where you want to start slicing(deleting) and -1 is where you want to stop
        
        }

        function decimal(){
                //if the screen.value does not include the dot then the will be included once 
            screen.value += '.';
        }