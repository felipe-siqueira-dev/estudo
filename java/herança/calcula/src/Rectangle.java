
public class Rectangle extends Shape {
	private double base;
	private double altura;
	
	
	public Rectangle(double base, double altura) {
		this.base = base;
		this.altura = altura;
	}
	
	public double getArea() {
		return this.base * this.altura;
	}
}

