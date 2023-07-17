
public class TestaValores {
	public static void main(String[] args) {
		int primeiroNumero = 5;
		int segundoNumero = 7;
		segundoNumero = primeiroNumero;
		primeiroNumero = 10;
		
		//Variáveis guardam valores e não referências
		System.out.println(segundoNumero);
	}
}
