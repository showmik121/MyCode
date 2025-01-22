class Atm:
    def __init__(self):
        self.pin = ""
        self.balance = 0
        
    def menu(self):
        user_input = input("""
                         Hi! how can I help you?
                         1. Create account
                         2. deposite money
                         3. Change pin
                         4. Withdraw balance
                         5. Exit
                         """)
        if user_input == "1":
            self.create_pin()
        elif user_input == "2":
            self.deposite_money()
        elif user_input == "3":
            self.change_pin()
        elif user_input == "4":
            self.withdraw()
        else:
            exit()
        
    def create_pin(self):
        user_pin = input("Enter your pin: ")
        self.pin = user_pin
        print("Your pin was created successfully")
        self.menu()
        
    def deposite_money(self):
        user_pin=input("enter your pin: ")
        if user_pin==self.pin:
            user_balance=input("enter money you want to deposite : ")
            self.balance=user_balance
            self.menu()
        else:
            print("enter valid pin!")
            self.menu()
        
    


if __name__ == "__main__":
    obj = Atm()
    obj.menu()  # Check syntax error fixed
