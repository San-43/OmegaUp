package org.example;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int q = scanner.nextInt();
        ArrayList<Point> P = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            P.add(new Point(x, y));
        }
        for (int i = P.size(); i < q; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            P.add(new Point(x, y));
            Collections.sort(P, Comparator.comparing(Point::getX));
            System.out.println(closest(P, P.size(), P.get(i)));
        }
    }

    public static int distance(Point p1, Point p2) {
        return (int) Math.sqrt((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
    }

    public static int bruteForce(ArrayList<Point> P, Point Pi) {
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < P.size(); i++) {
            for (int j = i + 1; j < P.size(); j++) {
                if (P.contains(Pi)) {
                    if (distance(P.get(i), P.get(j)) < min)
                        min = distance(P.get(i), P.get(j));
                }
            }
        }
        return min;
    }

    public static int stripClosest(Point[] strip, int size, int d, Point pi) {
        Arrays.sort(strip, Comparator.comparing(Point::getY));
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size && (strip[j].getY() - strip[i].getY()) < min; j++) {
                if (Arrays.binarySearch(strip, pi, Comparator.comparing(Point::getY)) > 0) {
                    if (distance(strip[i], strip[j]) < min)
                        min = distance(strip[i], strip[j]);
                }
            }
        }

        return min;
    }

    public static int closest(ArrayList<Point> P, int n, Point Pi) {
        if (n < 3) {
            return bruteForce(P, Pi);
        }
        int mid = n / 2;
        Point midPoint = P.get(mid);

        int dl = closest(P, mid, Pi);
        int dr = closest((ArrayList<Point>) P.subList(mid, P.size() - 1), n - mid, Pi);

        int d = Math.min(dl, dr);

        Point[] strip = new Point[n];
        int j = 0;
        for (Point i :
                P) {
            if (Math.abs(i.getX() - midPoint.getX()) < d) {
                strip[j] = i;
                j++;
            }
        }

        return Math.min(d, stripClosest(strip, j, d, Pi));
    }
}

class Point {
    int x;
    int y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
}