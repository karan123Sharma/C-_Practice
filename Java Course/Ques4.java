abstract class Employee {
    int employee_id;
    String name;
    double basic_salary;

    abstract void calculateSalary();
}
class Manager extends Employee {
    double hra, da, pf;
    Manager(int id, String n, double bs) {
        employee_id = id;
        name = n;
        basic_salary = bs;
        hra = 0.1 * basic_salary;
        da = 0.7 * basic_salary;
        pf = 0.05 * basic_salary;
    }
    void calculateSalary() {
        double gross_salary = basic_salary + hra + da - pf;
        System.out.println("Employee ID: " + employee_id + "\n" + "Employee Name: " + name + "\n" + "Basic Salary: "
                + basic_salary + "\n" + "HRA: " + hra + "\n" + "DA: " + da + "\n" + "PF: " + pf + "\n"
                + "Gross Salary: " + gross_salary);
    }
}      

public class Ques4 {
    public static void main(String[] args) {
        Manager m = new Manager(1, "Karan", 9000);
        m.calculateSalary();
    }
}
