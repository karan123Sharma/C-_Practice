// class Degree {
//     void getDegree() {
//         System.out.println("I got a Degree");
//     }
// }
// class UnderGraduate extends Degree {
//     void Print() {
//         System.out.println("I am a Undergraduate");
//     }
// }
// class PostGraduate extends Degree {
//     void Print() {
//         System.out.println("I am a Postgraduate");
//     }
// }
// class data{
//     int i ;
//     void PrintNum(){
//         System.out.println(i);
//     }
// }
// class subdata extends data{
//     int j;
//     void PrintNum()
//     {
//         System.out.println(j);
//     }
// }
// class Student{

//     private int stud_id = 1;
//     private String stud_name = "Karan";
//     public void SetName(String name){
//         this.stud_name = name;
//     }
//     public String GetName(){
//         return stud_name;
//     }
//     public void Setid(int id){
//         this.stud_id = id;
//     }
//     public int Getid(){
//         return stud_id;
//     }
// }
class Person{
    private String name;
    private int age;
    private String Country;
    public void SetName(String name){
        this.name = name;
    }
    public String GetName(){
        return name;
    }
    public void SetAge(int age){
        this.age = age;
    }
    public int Getage(){
        return age;
    }    
    public void SetCountry(String Country){
        this.Country = Country;
    }
    public String GetCountry(){
        return Country;
    }    

}
public class day_4 {
    public static void main(String[] args) {
        // Person per = new Person();
        // per.SetName("Karan");
        // String Name = per.GetName();
        // System.out.println(Name);
        // per.SetAge(21);
        // int Age = per.Getage();
        // System.out.println(Age);
        // per.SetCountry("Spain");
        // String Country = per.GetCountry();
        // System.out.println(Country);
        // Student stu = new Student();
        // stu.SetName("Devayani");
        // String Name = stu.GetName();
        // System.out.println(Name);
        // stu.Setid(23);
        // int Id = stu.Getid();
        // System.out.println(Id);        
        // subdata obj = new subdata();
        // obj.i = 23;
        // obj.j = obj.i;
        // obj.PrintNum();
        // obj.PrintNum();



        // PostGraduate obj = new PostGraduate();
        // obj.Print();
        // UnderGraduate obj1 = new UnderGraduate();
        // obj1.Print();
        // Degree obj2 = new Degree();
        // obj2.getDegree();
    }
}
