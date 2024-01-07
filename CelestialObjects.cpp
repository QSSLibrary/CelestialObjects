# ifndef QSSL_CELESTIAL_OBJECTS
    # include "CelestialObjects.hpp"
    /**
     * @brief Construct a New Celestial Objects
     */
    CelestialObjects::CelestialObjects() {
        id = UNKNOWN_ID;
    }
    /**
     * @brief Construct a new Celestial Objects
     * @param _celestialObject Celestial Object
     */
    CelestialObjects::CelestialObjects(const CelestialObjects& _celestialObject) {
        id = _celestialObject.id;
        name = _celestialObject.name;
    }
    /**
     * @brief Assign Operator
     * @param _celestialObject Celestial Object 
     * @return CelestialObjects& 
     */
    CelestialObjects& CelestialObjects::operator=(const CelestialObjects& _celestialObject) {
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
    void CelestialObjects::load(int _loadMethod = LOAD_FROM_DEFAULT) {
    }
    /**
     * @brief Save Celestial Object to Database
     * @brief 1. Save to Database
     * @brief 2. Save to File
     * @brief 3. Save to Internet
     * @brief 4. Save to Default
     * @note Default Method is Saving to File
     */
    void CelestialObjects::save(int _saveMethod = SAVE_TO_FILE) {
    }
# endif // QSSL_CELESTIAL_OBJECTS