// Contrato Autenticavel
	//quem assinar esse contrato precisa implementar seus métodos 


public abstract interface Autenticavel{
	
	public abstract void setSenha(int senha);
	
	public abstract boolean autentica(int senha) ;

}
