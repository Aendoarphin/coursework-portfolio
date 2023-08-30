package JavaHomework;

public class JavaHomework implements Homework 
{
    private double grade;
    private int numOfQuestions;
    private String typeOfQuestion;

    public void setGrade(double whatGrade)
    {
        grade = whatGrade;
    }
    public double getGrade()
    {
        return grade;
    }

    public void setNumOfQuestions(int whatNum)
    {
        numOfQuestions = whatNum;
    }
    public int getNumOfQuestions()
    {
        return numOfQuestions;
    }

    public void setTypeOfQuestion(String whatType)
    {
        typeOfQuestion = whatType;
    }
    public String getTypeOfQuestion()
    {
        return typeOfQuestion;
    }
}
