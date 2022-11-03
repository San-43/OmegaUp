package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        int hours = 0;
        int i = 0;
        do {
            i++;
            hours += b;
            if (hours >= a) {
                break;
            }
            hours -= c;
        }while (true);

        System.out.println(i);
    }
}