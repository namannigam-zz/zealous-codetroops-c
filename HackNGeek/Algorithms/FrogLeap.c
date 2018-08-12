void printFrogPaths(int* arr, int n){
     int* path = (int*)malloc(sizeof(int)*n);
     printPaths(arr, 0, n, path, 0);
}

void printPaths(int* arr, int l, int h, int* path, int pathLength){

     if(l == h-1){
          path[pathLength] = arr[l];
          pathLength++;
          int i = 0;
          for(i = 0; i < pathLength; i++)
                printf("%d", path[i]);
          return;
     }
     else if(l >= h)
          return;

     path[pathLength] = arr[l];
     pathLength++;
     printPaths(arr, l+1, h, path, pathLength);
     printPaths(arr, l+2, h, path, pathLength);
}
