#include <iostream>
#include <string>

using namespace std;

// State machine structure
struct StateMachine
{
    enum State
    {
        STATE_A,
        STATE_B,
        STATE_C,
        NUM_STATES
    };

    enum Event
    {
        EVENT_X,
        EVENT_Y,
        EVENT_Z,
        NUM_EVENTS
    };

    State currentState;

    // Transition table
    State transitions[NUM_STATES][NUM_EVENTS] = {
        {STATE_B, STATE_C, STATE_A},
        {STATE_A, STATE_C, STATE_B},
        {STATE_A, STATE_B, STATE_C}};

    // Function to trigger state transition
    void triggerEvent(Event event)
    {
        currentState = transitions[currentState][event];
    }

    // Function to get current state
    State getCurrentState()
    {
        return currentState;
    }
};

int main()
{
    StateMachine machine;

    // Test case 1
    machine.currentState = StateMachine::STATE_A;
    machine.triggerEvent(StateMachine::EVENT_X);
    cout << "Test case 1: " << (machine.getCurrentState() == StateMachine::STATE_B ? "Pass" : "Fail") << endl;

    // Test case 2
    machine.currentState = StateMachine::STATE_B;
    machine.triggerEvent(StateMachine::EVENT_Y);
    cout << "Test case 2: " << (machine.getCurrentState() == StateMachine::STATE_C ? "Pass" : "Fail") << endl;

    // Test case 3
    machine.currentState = StateMachine::STATE_C;
    machine.triggerEvent(StateMachine::EVENT_Z);
    cout << "Test case 3: " << (machine.getCurrentState() == StateMachine::STATE_A ? "Pass" : "Fail") << endl;

    return 0;
}

// Program di atas merupakan implementasi dari State Transition Testing pada state
// machine sederhana dengan tiga state (STATE_A, STATE_B, STATE_C) dan tiga
// event (EVENT_X, EVENT_Y, EVENT_Z). Pada program ini, transisi antar state
// dapat diakses melalui sebuah tabel transisi yang telah didefinisikan sebelumnya.
// Untuk melakukan state transition, kita hanya perlu memanggil fungsi triggerEvent
// dengan parameter event yang ingin diproses. Setelah itu, kita dapat memanggil fungsi
// getCurrentState untuk mendapatkan state saat ini.

// Pada contoh di atas, terdapat tiga test case yang dilakukan untuk memastikan program
// berjalan sesuai dengan spesifikasi. Jika hasil test case sesuai dengan yang diharapkan,
// maka program dianggap berhasil melewati test case tersebut.