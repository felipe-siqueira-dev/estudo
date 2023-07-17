
public class AliquotaComIfs {
	public static void main(String[] args) {
		
		double salario = 3300.0;
		
		if(salario >= 1900.0 && salario <= 2800.0) {
			System.out.println("Valor deduzido R$ 142" + "\nImposto pago R$ " + (salario*7.5/100));
		}else if(salario >= 2800.01 && salario <= 3751.0) {
			System.out.println("Valor deduzido R$ 350" + "\nImposto pago R$ " + (salario*15/100));
		}else if(salario >= 3751.01 && salario <= 4664.0) {
			System.out.println("Valor deduzido R$ 636" + "\nImposto pago R$ " + (salario*22.5/100));
		}
	}
}
