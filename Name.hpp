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
             * @brief Construct a New Name
             */
            Name() {
                this->common = nullptr;
                this->symbol = nullptr;
                this->designations = nullptr;
            }
            /** 
             * @brief Construct a New Name
             */
            Name(const Name& _name) {
                this->common = _name.common;
                this->symbol = _name.symbol;
                this->designations = _name.designations;
            }
            /**
             * @brief Assign Operator
             * @param _name 
             * @return Name& 
             */
            Name& operator=(const Name& _name) {
                this->common = _name.common;
                this->symbol = _name.symbol;
                this->designations = _name.designations;
                return *this;
            }
            /**
             * @brief Main Name of Celestial Object
             */
            char* common;
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