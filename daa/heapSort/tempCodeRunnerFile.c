        struct person temp = (*arr)[i];
        (*arr)[i] = (*arr)[(i - 1) / 2];
        (*arr)[(i - 1) / 2] = temp;
        i = (i - 1) / 2;