#ifndef HUMAN_HPP_
#define HUMAN_HPP_

#include <SDL_joystick.h>
#include "Player.hpp"
#include "Grid.hpp"


class Human : public Player
{
    public:
        const SDL_Joystick* getJoystick() const noexcept;

        explicit Human(const Grid::PlayerMark& CEplayerMark = Grid::PlayerMark::GRID_TYPE_NONE);
        Human(const Human& Chuman) = delete;
        Human(Human&& human) = delete;
        virtual ~Human() noexcept;

    private:
        SDL_Joystick* _pSdlJoystick;

};


inline const SDL_Joystick* Human::getJoystick() const noexcept { return _pSdlJoystick; }


#endif