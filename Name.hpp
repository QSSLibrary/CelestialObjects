# ifndef QSSL_CELESTIAL_OBJECTS_NAME
    /**
     * @file Name.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSS Open Source Astronomy and Astrophysics Library's Celestial Objects' Names
     * @date 2024-01-06
     */
    # define QSSL_CELESTIAL_OBJECTS_NAME
    //-- Names Structure
    class Name {
        public:
            /**
             * @brief Construct a New Name Object
             */
            Name() {
                this->name = nullptr;
                this->symbol = nullptr;
                this->designations = nullptr;
            }
            /** 
             * @brief Construct a New Name Object
             */
            Name(const Name& _name) {
                this->name = _name.name;
                this->symbol = _name.symbol;
                this->designations = _name.designations;
            }
            /**
             * @brief Assign Operator
             * @param _name 
             * @return Name& 
             */
            Name& operator=(const Name& _name) {
                this->name = _name.name;
                this->symbol = _name.symbol;
                this->designations = _name.designations;
                return *this;
            }
            /**
             * @brief Name of Celestial Object
             */
            char* name;
            /**
             * @brief Symbol of Celestial Object
             */
            char* symbol;
            /**
             * @brief Designations of Celestial Object
             */
            char** designations;
    };
# endif // QSSL_CELESTIAL_OBJECTS_NAME