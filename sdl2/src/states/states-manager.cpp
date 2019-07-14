#include "states-manager.h"

#include "level-state.h"

StatesManager::StatesManager() {
    m_states.fill(nullptr);
    m_states.at(LEVEL) = new LevelState();
}

StatesManager::~StatesManager()
{
}

/////////////////////////////////////////////////////////////////////////////
////////////////////////////// PUBLIC METHODS ///////////////////////////////
/////////////////////////////////////////////////////////////////////////////


void StatesManager::push(GameState state) {
    m_stateStack.push(m_states.at(state));
}

void StatesManager::pop()
{
}

void StatesManager::update()
{
}

/////////////////////////////////////////////////////////////////////////////
//////////////////////////// GETTERS & SETTERS //////////////////////////////
/////////////////////////////////////////////////////////////////////////////


IState *StatesManager::getActiveState() const {
    return m_stateStack.top();
}

bool StatesManager::isEmpty() const
{
}
