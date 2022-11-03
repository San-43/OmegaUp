package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int d = scanner.nextInt();
        if (n % d == 0) {
            System.out.println((n / d));
        } else if (n > d) {
            int integer = n / d;
            int remainder = n % d;
            System.out.println(integer + " " + remainder + "/" + d);
        } else {
            System.out.println(n + "/" + d);
        }
    }
}