void printO(int row, int count) {
    if (row <= 0 or count <= 0) {
        cout << "Invalid input" << endl;
        return;
    }

    for (int i = 0; i < row; i++) { 
        for (int j = 0; j < count; j++) { 
            cout << "O"; 
        }
        cout << endl; 
    }
}
