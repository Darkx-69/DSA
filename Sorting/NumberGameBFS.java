import java.util.*;

public class NumberGameBFS {
    public static int bfsNumberGame(int start, int target) {
        Queue<int[]> queue = new LinkedList<>();
        Set<Integer> visited = new HashSet<>();

        // Start BFS with the starting number and 0 steps.
        queue.add(new int[]{start, 0});
        visited.add(start);

        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int number = current[0];
            int steps = current[1];

            // Check if the target is reached
            if (number == target) {
                return steps;
            }

            // Possible moves: +1, -1, *2
            int[] nextMoves = {number + 1, number - 1, number * 2};

            for (int next : nextMoves) {
                // Only add non-negative numbers that haven't been visited yet
                if (next >= 0 && !visited.contains(next)) {
                    queue.add(new int[]{next, steps + 1});
                    visited.add(next);
                }
            }
        }
        // Return -1 if the target is not reachable (should not happen with these operations)
        return -1;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read starting number from the user
        System.out.print("Enter the starting number: ");
        int start = scanner.nextInt();

        // Read target number from the user
        System.out.print("Enter the target number: ");
        int target = scanner.nextInt();

        // Compute minimum steps using BFS
        int steps = bfsNumberGame(start, target);
        if (steps != -1) {
            System.out.println("Minimum steps to reach " + target + " from " + start + ": " + steps);
        } else {
            System.out.println("Target " + target + " is not reachable from " + start);
        }
        scanner.close();
    }
}