void fix_list(BehaviorPattern* root){
    std::cout << 'a';

    if (root != nullptr){
        unsigned int N = root -> length;
        std::cout << 'a';

        BehaviorPattern **array = new BehaviorPattern*[N+1];
        array[0] = root;
        std::cout << 'a';
        for(unsigned int i = 1; i<N; i++){
            array[i] = array[i-1]->next;
        }
        std::cout << 'b';

        array[0] -> prev = nullptr;
        for(unsigned int i = 1; i<N; i++){
            array[i] -> prev = array[i-1];
        }

        delete[] array;
    } 
}