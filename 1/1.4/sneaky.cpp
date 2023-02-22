int main()
{
    //int x { 5 }; // generate error unused variable
    [[maybe_unused]] int x { 5 };
    // but not used anywhere

    return 0;
}