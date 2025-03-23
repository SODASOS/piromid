using System;
using System.Collections.Generic;

public class StackList
{
    private List<string> items = new List<string>();

    public bool IsEmpty()
    {
        return items.Count == 0;
    }

    public void Push(string item)
    {
        items.Add(item); // Добавляем в конец списка (как на вершину стека)
    }

    public void Pop()
    {
        if (IsEmpty()) return;
        items.RemoveAt(items.Count - 1); // Удаляем последний элемент (с вершины стека)
    }

    public string Peek()
    {
        return IsEmpty() ? "" : items[items.Count - 1]; // Возвращаем последний элемент (вершину стека)
    }

    public void Print()
    {
        if (IsEmpty()) return;
        foreach (var item in items)
        {
            Console.Write(item + " ");
        }
        Console.WriteLine();
    }

    public static void Main(string[] args)
    {
        StackList s = new StackList();
        Console.WriteLine(s.IsEmpty()); // True

        s.Push("3");
        s.Push("123");
        s.Push("8");
        s.Push("12");
        s.Push("77");
        s.Push("5");

        s.Print();
        Console.WriteLine(s.IsEmpty()); // False

        s.Pop();
        s.Print();

        s.Push("1234");
        s.Print();

        s.Pop();
        s.Print();

        s.Pop();
        s.Print();

        Console.WriteLine(s.Peek()); // 12
    }
}
