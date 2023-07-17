package bytebank;

public class Conta {
	double saldo;
	int agencia;
	int numero;
	String titular;
	
	void deposita(double valor) {
		this.saldo += valor;
	}
	
	public boolean saca(double valor){
		if(valor<= this.saldo) {
			this.saldo -= valor;
			return true;
		}else {
			return false;
		}
	}
	
	public boolean transfere(double valor, Conta destino){
		if(valor <= this.saldo) {
			this.saldo-= valor;
			destino.deposita(valor);
			return true;
		}else {
			return false;
		}
	}
	
}
