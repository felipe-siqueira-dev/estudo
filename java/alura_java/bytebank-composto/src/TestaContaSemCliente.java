
public class TestaContaSemCliente {
	public static void main(String[] args) {
		Conta contaDaMarcela = new Conta();
		/* 
		 * Vai dar erro pois a classe Cliente ainda não foi instanciada
		 *	System.out.println(contaDaMarcela.titular.nome);
		 *
		 */
		contaDaMarcela.titular = new Cliente();
		System.out.println(contaDaMarcela.titular.nome);
		
		Conta contaDoPaulo = new Conta();
		contaDoPaulo.titular = new Cliente(); 
		System.out.println(contaDoPaulo.titular.nome);
	}
}
