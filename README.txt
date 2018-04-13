PURPOSE: Create a simple tip calculator. The program should prompt
         for a bill amount and a tip rate. The program must compute
         the tip and then display both the tip and the total
         amount of the bill.


INPUTS: bill amount; tip rate
PROCES: calculate the tip
OUTPUT: tip amount, total amount
 
PSUEDOCODE:
 TipCalculator
        Initialize Variable: bill amount to 0
        Initialize Variable: tip rate to 0
        Initialize Variable: tip amount to 0 
        Initialize Variable: bill total to 0 
               
        Prompt user for bill amount, "What is the total bill amount?"
        Prompt user for tip rate, "What is the tip rate?"
                
        convert bill amount input to a number
        convert tip rate input to a number
        
        tip amount = (bill amount * tip rate)
        round tip up to nearest cent
        total = (bill amount + tip amount)`

	Display "Tip: $" + tip
	Display "Total: $" + total
 End
