#ifndef __TA3D__INGAM__BATTLE_H__
# define __TA3D__INGAM__BATTLE_H__

# include "../stdafx.h"
# include "gamedata.h"
# include <memory> // auto_ptr
# include "../gfx/gui/area.h"
# include "../tdf.h"
# include "../EngineClass.h"



namespace TA3D
{


    class Battle
    {
    public:
        //! Results about the battle
        enum Result {brUnknown, brVictory, brDefeat, brPat};

        /*!
        ** \brief Launch a game
        ** \param g Data about the game
        ** \return The result of the game
        */
        static Result Execute(GameData* g);

    public:
        //! \name Constructors & Destructor
        //@{
        //! Constructor with a GameData
        Battle(GameData* g);
        //! Destructor
        ~Battle();
        //@}

        /*!
        ** \brief Launch the battle
        */
        Result execute();

        /*!
        ** \brief The result of the battle
        */
        Result result() const {return pResult;}

    private:
        /*!
        ** \brief Reset the cache for the GUI name
        **
        ** To avoid multiple and expensive string manipulations
        */
        void updateCurrentGUICacheNames();

    private:
        //! \name Preparing all data about a battle
        //@{
        /*!
        ** \brief Load Game Data
        */
        bool loadFromGameData(GameData* g);
        //! PreInitialization
        bool initPreflight(GameData* g);
        //! Load textures
        bool initTextures();
        //! Load 3D models
        bool init3DModels();
        //! Load graphical features
        bool initGraphicalFeatures();
        //! Load Weapons
        bool initWeapons();
        //! Load units
        bool initUnits();
        //! Intermediate clean up
        bool initIntermediateCleanup();
        //! Init the engine
        bool initEngine();
        //! Add players
        bool initPlayers();
        //! Init restrictions
        bool initRestrictions();
        //! Load the GUI
        bool initGUI();
        //! Init the map
        bool initTheMap();
        //@}

    private:
        //! Results
        Result pResult;
        //! Data about the current game
        GameData* pGameData;

        //! Use network communications
        bool pNetworkEnabled;
        //! Host a game
        bool pNetworkIsServer;

    private:
        enum CurrentGUICache {cgcDot, cgcShow, cgcHide, cgcEnd};
        //! The current GUI
        String pCurrentGUI;
        String pCurrentGUICache[cgcEnd];

    private:
        struct FPSInfos
        {
            int countSinceLastTime;
            int average;
            int lastTime;
            String toStr;
        };
        //! Informations about FPS
        FPSInfos fps;

    private:
        AREA pArea;
        //! The map of the game - TODO The auto_ptr is deprecated
        std::auto_ptr<MAP> map;
        //! The sky - TODO The auto_ptr is deprecated
        std::auto_ptr<SKY_DATA> pSkyData;
        bool pSkyIsSpherical;

    }; // class Battle


} // namespace TA3D

#endif // __TA3D__INGAM__BATTLE_H__