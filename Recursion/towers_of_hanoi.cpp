#include <iostream>
using namespace std;

// Recursive method of towers of hanoi
void Tower_of_hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout<<"Move 1 from " <<  A << " to " << C << endl;
        return;
    }
    Tower_of_hanoi(n-1, A, C, B);
    cout<<"Move " << n << " from " <<  A << " to " << C << endl;
    Tower_of_hanoi(n-1, B, A, C);
}

int main() {

	int n = 3;
    Tower_of_hanoi(n, 'A', 'B', 'C');
	return 0;
}
