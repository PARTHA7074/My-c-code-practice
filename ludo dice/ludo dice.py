import random
while(True):
	b=input("Do you want to roll dice?? (Y or N): ")
	
	a=random.randint(0,6)
	if b.capitalize()=="Y":
		if a==1:
			print("|  *  |")
		elif a==2:
			print("| *   |\n|   * |")
		elif a==3:
			print("| *     |\n|   *   |\n|     * |")
		elif a==4:
			print("| *  * |\n| *  * |")
		elif a==5:
			print("| *   * |\n|   *   |\n| *   * |")
		else:
			print("| * * * |\n|       |\n| * * * |")
		continue
	else:
		print("Thank you for playing ludo dice.")
		break