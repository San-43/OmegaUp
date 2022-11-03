package org.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a;
        int b;
        int init;

        Scanner scanner = new Scanner(System.in);
        init = scanner.nextInt();
        int[] answer = new int[init];

        for (int i = 0; i < init; i++) {
            a = scanner.nextInt();
            b = 0;
            for (int j = 0; j < a; j++) {
                b += scanner.nextInt();
            }
            answer[i] = b - (a - 1);
        }

        for (int i = 0; i < init; i++) {
            System.out.println(answer[i]);
        }
    }
}