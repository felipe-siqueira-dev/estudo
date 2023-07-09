
public class Exercicio2Teste {
	public static void main(String[] args) {
		Exercicio2 bankAccount = new Exercicio2();
		
		bankAccount.setAccountNumber(12345);
		bankAccount.setBalance(2500.0);
		
		System.out.println("Account Number: " + bankAccount.getAcountNumber());
		System.out.println("Balance: " + bankAccount.getBalance());
		
	}
}
