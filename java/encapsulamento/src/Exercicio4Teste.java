
public class Exercicio4Teste {
	public static void main(String[] args) {
		Exercicio4 employee = new Exercicio4();
		employee.setEmployee_id(123456);
		employee.setEmployee_name("Michael Jackson");
		employee.setEmployee_salary(2500.0);
		
		System.out.println("Employee ID: " + employee.getEmployee_id());
		System.out.println("Employee Name: " + employee.getEmployee_name());
		System.out.println("Employee Salary: " + employee.getEmployee_salary());
	}
}
