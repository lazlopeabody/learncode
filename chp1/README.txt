PORBLEM: Create a simple tip calculator. The program should prompt
         for a bill amount and a tip rate. The program must compute
         the tip and then display both the tip and the total
         amount of the bill.
EXAMPLE OUTPUT: 
	What is the bill? $200
	What is the tip percentage? 15
	The tip is $30.00
	The total is $230.00


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

TEST DESIGNS:
	Test 1:
	  INPUT > Bill Amount: 10; Tip Rate: 15; 
	  EXPECTED RESULTS >
		Tip: $1.50
		Total: $11.50
	Test 2:
	  INPUT > Bill Amount: 10.50; Tip Rate: 12.25; 
	  EXPECTED RESULTS >
		Tip: $1.29
		Total: $11.79
	Test 3:
	  INPUT > Bill Amount: AAAAA.50; Tip Rate: 12.25; 
	  EXPECTED RESULTS >
		Tip: ERROR
		Total: ERROR
	Test 4:
	  INPUT > Bill Amount: $$$; Tip Rate: $$$$; 
	  EXPECTED RESULTS >
		Tip: ERROR
		Total: ERROR

