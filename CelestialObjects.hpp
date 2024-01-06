# ifndef QSSL_CELESTIAL_OBJECTS
    /**
     * @file CelestialObjects.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSSL Open Source Astronomy and Astrophysics Library's Celestial Objects
     * @date 2024-01-06
     */
    # define QSSL_CELESTIAL_OBJECTS
    //-- Include Celestial Objects' Names
    # ifndef QSSL_CELESTIAL_OBJECTS_NAME
        # include "Name.hpp"
    # endif // QSSL_CELESTIAL_OBJECTS_NAME
    /**
     * @brief Celestial Object IDs
     */
    enum CelestialObjectIDs {
        UNKNOWN_ID = -1
    };
    /**
     * @brief Celestial Object Load Methods
     */
    enum CelestialObjectLoadMethods {
        LOAD_FROM_USER_INPUT =  5,
        LOAD_FROM_DATABASE =    4,
        LOAD_FROM_INTERNET =    3,
        LOAD_FROM_DEFAULT =     2,
        LOAD_FROM_FILE =        1
    };
    enum CelestialObjectSaveMethods {
        SAVE_TO_DATABASE =      4,
        SAVE_TO_INTERNET =      3,
        SAVE_TO_DEFAULT =       2,
        SAVE_TO_FILE =          1
    };
    /**
     * @brief Celestial Objects Class
     * @note Parameters of Celestial Objects :
     * @note 1. Name
     * @note 2. Coordinates
     * @note 3. Physical Properties
     * @note 4. Orbital Elements
     * @note 5. Ephemerides
     */
    class CelestialObjects {
        public:
            /**
             * @brief Celestial Object's ID
             * @note Used for Celestial Objects' Database and Searching
             */
            int id;
            /**
             * @brief Name of Celestial Object
             * @note Parameters of Celestial Objects' Names :
             * @note 1. Main Name
             * @note 2. Symbol
             * @note 3. Designations
             */
            Name name;
            /**
             * @brief Construct a New Celestial Objects
             */
            CelestialObjects() {
                id = UNKNOWN_ID;
            }
            /**
             * @brief Construct a new Celestial Objects
             * @param _celestialObject Celestial Object
             */
            CelestialObjects(const CelestialObjects& _celestialObject) {
                id = _celestialObject.id;
                name = _celestialObject.name;
            }
            /**
             * @brief Assign Operator
             * @param _celestialObject Celestial Object 
             * @return CelestialObjects& 
             */
            CelestialObjects& operator=(const CelestialObjects& _celestialObject) {
                id = _celestialObject.id;
                name = _celestialObject.name;
                return *this;
            }
            /**
             * @brief Load Celestial Object with These Methods :
             * @brief 1. Load from Database
             * @brief 2. Load from File
             * @brief 3. Load from Internet
             * @brief 4. Load from User Input
             * @brief 5. Load from Default
             * @brief 6. Load from Other Celestial Object
             * @note Default Method is Loading Planet Earth
             */
            void load(int _loadMethod = LOAD_FROM_DEFAULT);
            /**
             * @brief Save Celestial Object to Database
             * @brief 1. Save to Database
             * @brief 2. Save to File
             * @brief 3. Save to Internet
             * @brief 4. Save to Default
             * @note Default Method is Saving to File
             */
            void save(int _saveMethod = SAVE_TO_FILE);
    };
# endif // QSSL_CELESTIAL_OBJECTS