//Gerente herda da classe Funcionário, e assina o contrato Autenteticavel
public class Gerente extends Funcionario implements Autenticavel{
	private AutenticacaoUtil util;
	
	public Gerente() {
		this.util = new AutenticacaoUtil();
	}
	
	public void setSenha(int senha) {
		this.util.setSenha(senha);
	}
	
	public boolean autentica(int senha) {
		return this.util.autentica(senha);
	}
	
	public double getBonificacao() {
		System.out.println("Chamando o método de bonificacao do Gerente");
		return  super.getSalario();//indica que é um atributo da classe mãe
	}
	
}
