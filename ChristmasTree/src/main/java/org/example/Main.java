package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int spaces = n - 1;
        for (int i = 1; i <= (n * 2 - 1); i+= 2, spaces--) {
            printSpace(spaces);
            printAsterisk(i);
            printSpace(spaces);
            System.out.println();
        }

        for (int i = 0; i < 2; i++) {
            printSpace(n - 2);
            System.out.print("###");
            printSpace(n - 2);
            System.out.println();
        }
    }
    public static void printSpace(int a) {
        for (int i = 0; i < a; i++)
        {
            System.out.print(" ");
        }
    }
    public static void printAsterisk(int a) {
        for (int i = 0; i < a; i++)
        {
            System.out.print("*");
        }
    }
}