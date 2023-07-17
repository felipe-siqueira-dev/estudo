package bytebank;

public class TestaMetodo {
	public static void main(String[] args) {
		Conta contaDoPaulo = new Conta();
		contaDoPaulo.saldo = 100.0;
		contaDoPaulo.deposita(50.0);
		System.out.println(contaDoPaulo.saldo);
		
		if((contaDoPaulo.saca(20))) {
			System.out.println("Saque realizado com sucesso");
		}
		System.out.println(contaDoPaulo.saldo);
		
		Conta contaDaMarcela = new Conta();
		contaDaMarcela.deposita(1000);
		
		if(contaDaMarcela.transfere(300, contaDoPaulo)) {
			System.out.println("Transferência feita com sucesso");
		}else {
			System.out.println("faltou dinheiro");
		}
		System.out.println(contaDaMarcela.saldo + "\n" + contaDoPaulo.saldo);
		
		contaDoPaulo.titular = "paulo silveira";
		System.out.println(contaDoPaulo.titular);
	}
	
}

