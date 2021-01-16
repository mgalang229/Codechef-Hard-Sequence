import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int tt = in.nextInt();
    for (int qq = 1; qq <= tt; qq++) {
      int n = in.nextInt();
      int[] a = new int[n];
      int[] store = new int[n];
      Arrays.fill(a, 0);
      Arrays.fill(store, -1);
      a[0] = 0;
      for (int i = 0; i + 1 < n; i++) {
        if (store[a[i]] == -1) {
          a[i + 1] = 0;
        } else {
          a[i + 1] = i - store[a[i]];
        }
        store[a[i]] = i;
      }
      int cnt = 0;
      for (int i = 0; i < n; i++) {
        if (a[i] == a[n - 1]) {
          cnt++;
        }
      }
      System.out.println(cnt);
    }
  }
}
