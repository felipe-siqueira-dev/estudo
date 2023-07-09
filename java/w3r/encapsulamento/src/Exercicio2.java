/*
 * 2. Write a Java program to create a class called BankAccount with private instance variables accountNumber and 
 * balance.Provide public getter and setter methods to access and modify these variables.
*/

public class Exercicio2 {
	private int accountNumber;
	private double balance;
	
	public int getAcountNumber() {
		return accountNumber;
	}
	public void setAccountNumber(int accountNumber) {
		this.accountNumber = accountNumber;
	}
	
	public double getBalance() {
		return balance;
	}
	public void setBalance(double balance) {
		this.balance = balance;
	}
}
