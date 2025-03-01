// === Region: Project Declaration ===
//
//  COMP2011 Spring 2025
//  PA1: Monster Game
//
//  Your name: LAM, Pak Ho
//  Your ITSC email:  phlamah@connect.ust.hk
//
//  Note: Generative AI is NOT allowed in completing your lab exercises or programming assignments
//  Reference: https://course.cse.ust.hk/comp2011/web/code.html
//
//  Declaration:
//  I declare that I am not involved in plagiarism
//  I understand that both parties (i.e., students providing the codes and students copying the codes) will receive 0 marks.
//
//  Project TA: Peter CHUNG (cspeter@cse.ust.hk)
//
//  For code-level questions, please send a direct email to the above TA.
//  Asking questions with code blocks in a public discussion forum (e.g., Piazza) may cause plagiarism issues
//  Usually, you will get the quickest response via a direct email.
//
// =====================================

/* void handleActionDuel
 * @param aliceMonsterType: an array storing the monster types of Alice
 * @param aliceMonsterPower: an array storing the monster powers of alice
 * @param bobMonsterType: an array storing the monster types of Bob
 * @param bobMonsterPower: an array storing the monster powers of Bob
 * @param aliceIndex: The chosen monster index for Alice
 * @param bobIndex: The chosen monster index for Bob
 *
 * In this function, we have some return values and they are pass-by-reference
 *
 * @return alicePoint: The updated point for Alice
 * @return bobPoint: The updated point for bob
 *
 * @return a suitable ActionStatus (see the provided enum)
 */
ActionStatus handleActionDuel(const char aliceMonsterType[MAX_NUM_MONSTERS],
                              const char aliceMonsterPower[MAX_NUM_MONSTERS],
                              const char bobMonsterType[MAX_NUM_MONSTERS],
                              const char bobMonsterPower[MAX_NUM_MONSTERS],
                              int aliceIndex,
                              int bobIndex,
                              int &alicePoint,
                              int &bobPoint)
{
    // TODO: Implement handleActionDuel
    // Task 1 Done!
    int alice_power = aliceMonsterPower[aliceIndex];
    int bob_power = bobMonsterPower[bobIndex];
    if ((aliceMonsterType[aliceIndex] == MONSTER_TYPE_FIRE && bobMonsterType[bobIndex] == MONSTER_TYPE_ICE) ||
        (aliceMonsterType[aliceIndex] == MONSTER_TYPE_ICE && bobMonsterType[bobIndex] == MONSTER_TYPE_WIND) ||
        (aliceMonsterType[aliceIndex] == MONSTER_TYPE_WIND && bobMonsterType[bobIndex] == MONSTER_TYPE_FIRE))
    {
        alice_power += MONSTER_TYPE_ADVANTAGE;
    }
    if ((bobMonsterType[bobIndex] == MONSTER_TYPE_FIRE && aliceMonsterType[aliceIndex] == MONSTER_TYPE_ICE) ||
        (bobMonsterType[bobIndex] == MONSTER_TYPE_ICE && aliceMonsterType[aliceIndex] == MONSTER_TYPE_WIND) ||
        (bobMonsterType[bobIndex] == MONSTER_TYPE_WIND && aliceMonsterType[aliceIndex] == MONSTER_TYPE_FIRE))
    {
        bob_power += MONSTER_TYPE_ADVANTAGE;
    }
    if (alice_power > bob_power)
    {
        // Alice win
        alicePoint += POINT_WIN;
        return ACTION_STATUS_ALICE_WIN;
    }
    else if (alice_power < bob_power)
    {
        // Bob win
        bobPoint += POINT_WIN;
        return ACTION_STATUS_BOB_WIN;
    }
    else
    {
        // Draw
        alicePoint += POINT_DRAW;
        bobPoint += POINT_DRAW;
        return ACTION_STATUS_DRAW;
    }
}

/* void handleActionBattle
 * @param numMonsters: The number of monsters
 * @param aliceMonsterType: an array storing the monster types of Alice
 * @param aliceMonsterPower: an array storing the monster powers of alice
 * @param bobMonsterType: an array storing the monster types of Bob
 * @param bobMonsterPower: an array storing the monster powers of Bob
 *
 * In this function, we have some return values and they are pass-by-reference
 *
 * @return alicePoint: The updated point for Alice
 * @return bobPoint: The updated point for bob
 * @return countAliceWin: The number of wins for Alice
 * @return countBobWin: The number of wins for Bob
 * @return countDraw: The number of draws
 *
 * @return a suitable ActionStatus (see the provided enum).
 * Alice wins if Alice's totalPointChange > Bob's totalPointChange.
 * Draws if they are equal, otherwise, Bob wins.
 */
ActionStatus handleActionBattle(int numMonsters,
                                const char aliceMonsterType[MAX_NUM_MONSTERS],
                                const char aliceMonsterPower[MAX_NUM_MONSTERS],
                                const char bobMonsterType[MAX_NUM_MONSTERS],
                                const char bobMonsterPower[MAX_NUM_MONSTERS],
                                int &alicePoint,
                                int &bobPoint,
                                int &countAliceWin,
                                int &countBobWin,
                                int &countDraw)
{
    // TODO: Implement handleActionBattle
    // Task 2 Done
    // i is the index counting from 0,1,2 to the MAX
    for (int i = 0; i < numMonsters; i++)
    {
        switch (handleActionDuel(aliceMonsterType, aliceMonsterPower, bobMonsterType, bobMonsterPower,
                                 i, i, alicePoint, bobPoint))
        {
        case ACTION_STATUS_ALICE_WIN:
            countAliceWin += 1;
            break;
        case ACTION_STATUS_BOB_WIN:
            countBobWin += 1;
            break;
        case ACTION_STATUS_DRAW:
            countDraw += 1;
            break;
        default:
            break;
        }
    }
    if (countAliceWin > countBobWin)
        return ACTION_STATUS_ALICE_WIN;
    else if (countAliceWin < countBobWin)
        return ACTION_STATUS_BOB_WIN;
    else
        return ACTION_STATUS_DRAW;
}

/* void handleActionMiniBattle
 * @param numMonstersForMiniBattle: The number of monsters for mini battle
 * @param aliceMonsterType: an array storing the monster types of Alice
 * @param aliceMonsterPower: an array storing the monster powers of alice
 * @param bobMonsterType: an array storing the monster types of Bob
 * @param bobMonsterPower: an array storing the monster powers of Bob
 *
 * In this function, we have some return values and they are pass-by-reference
 *
 * @return alicePoint: The updated point for Alice
 * @return bobPoint: The updated point for bob
 * @return countAliceWin: The number of wins for Alice
 * @return countBobWin: The number of wins for Bob
 * @return countDraw: The number of draws
 *
 * @return a suitable ActionStatus (see the provided enum).
 * Alice wins if Alice's totalPointChange > Bob's totalPointChange.
 * Draws if they are equal, otherwise, Bob wins.
 */
ActionStatus handleActionMiniBattle(int numMonstersForMiniBattle,
                                    const char aliceMonsterType[MAX_NUM_MONSTERS],
                                    const char aliceMonsterPower[MAX_NUM_MONSTERS],
                                    const char bobMonsterType[MAX_NUM_MONSTERS],
                                    const char bobMonsterPower[MAX_NUM_MONSTERS],
                                    const int aliceMiniBattleIndices[MAX_NUM_MONSTERS],
                                    const int bobMiniBattleIndices[MAX_NUM_MONSTERS],
                                    int &alicePoint,
                                    int &bobPoint,
                                    int &countAliceWin,
                                    int &countBobWin,
                                    int &countDraw)
{
    // TODO: Implement handleActionMiniBattle
    // Task 3 done
    // i is the index counting from 0,1,2 to the MAX
    for (int i = 0; i < numMonstersForMiniBattle; i++)
    {
        switch (handleActionDuel(aliceMonsterType, aliceMonsterPower, bobMonsterType, bobMonsterPower,
                                 aliceMiniBattleIndices[i], bobMiniBattleIndices[i], alicePoint, bobPoint))
        // Use these array to replace i so that they jump between things like 0,3,5
        {
        case ACTION_STATUS_ALICE_WIN:
            countAliceWin += 1;
            break;
        case ACTION_STATUS_BOB_WIN:
            countBobWin += 1;
            break;
        case ACTION_STATUS_DRAW:
            countDraw += 1;
            break;
        default:
            break;
        }
    }
    if (countAliceWin > countBobWin)
        return ACTION_STATUS_ALICE_WIN;
    else if (countAliceWin < countBobWin)
        return ACTION_STATUS_BOB_WIN;
    else
        return ACTION_STATUS_DRAW;
}

/* void handleActionReorder
 * @param numMonsters: The number of monsters
 * @param monsterType: an array storing the monster types (array content should be reordered after this function)
 * @param monsterPower: an array storing the monster powers  (array content should be reordered after this function)
 * @param reorderIndices: The reorder indices
 *
 * No return value for this function
 */
void handleActionRecorder(int numMonsters,
                          char monsterType[MAX_NUM_MONSTERS],
                          char monsterPower[MAX_NUM_MONSTERS],
                          const int reorderIndices[MAX_NUM_MONSTERS])
{
    // TODO: Implement handleActionRecorder
    char original_monsterType[MAX_NUM_MONSTERS];
    char original_monsterPower[MAX_NUM_MONSTERS];
    
    for (int i = 0; i < numMonsters; i++)
    {
        // the loop is the copy the original array order
        original_monsterType[i] = monsterType[i];
        original_monsterPower[i] = monsterPower[i];
    }
    for (int i = 0; i < numMonsters; i++)
    {
        monsterType[i] = original_monsterType[reorderIndices[i]];
        monsterPower[i] = original_monsterPower[reorderIndices[i]];
    }
    return;
}
