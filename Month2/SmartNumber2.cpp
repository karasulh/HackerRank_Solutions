bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(val * val == num)
        return true;
    return false;
}
