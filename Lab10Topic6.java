import java.util.Arrays;

public class Lab10Topic6 {
    private int[] array;
    public Lab10Topic6(int[] array) {
        this.array = array;
    }
    public int[] InitialArray() {
        return Arrays.copyOf(array, array.length);
    }

    public int[] SortArray() {
        int[] sortedArray = Arrays.copyOf(array, array.length);
        Arrays.sort(sortedArray);
        return sortedArray;
    }

    public void PrintArray() {
        System.out.println(Arrays.toString(array));
    }

    public static void main(String[] args) {
        int[] initialArray = {5, 2, 9, 1, 5, 6};
        Lab10Topic6 arrayOperations = new Lab10Topic6(initialArray);

        System.out.println("Initial Array:");
        int[] initial = arrayOperations.InitialArray();
        arrayOperations.PrintArray();

        System.out.println("\nSorted Array:");
        int[] sorted = arrayOperations.SortArray();
        arrayOperations.PrintArray();
    }
}
