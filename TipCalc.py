import sys, os

billAmt = raw_input("Please enter your Bill Sub-total: $")
tipRate = raw_input("\tThank you for your input.\nPlease enter your tip percentage: %")


def tipCalc(subTotal, tipRate):
	subTotal = float(subTotal)
	tipPerc = float(tipRate).__div__(100)
	tipAmt = float(subTotal).__mul__(tipPerc)
	print '\nYour Tip Amount is $%.2f'%round(tipAmt,2)
	total = float(subTotal).__add__(tipAmt)
	return total

def main():
	print "Your Bill Total is: $%.2f" % round(tipCalc(billAmt,tipRate), 2)

if __name__ == "__main__":
	main()
