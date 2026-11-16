char* digitSum(char* s, int k) {

    int len = strlen(s);

    char *current = malloc(len + 1);
    char *next = malloc(2 * len + 2);

    strcpy(current, s);

    while(strlen(current) > k) {

        len = strlen(current);
        int pos = 0;

        for(int i = 0; i < len; i += k) {

            int groupSum = 0;

            for(int j = i; j < len && j < i + k; j++) {
                groupSum = groupSum + (current[j] - '0');
            }

            pos += sprintf(next + pos, "%d", groupSum);
        }

        next[pos] = '\0';

        char *temp = current;
        current = next;
        next = temp;
    }

    free(next);
    return current;
}