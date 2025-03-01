// === Region: Project Declaration ===
//
//  COMP2011 Spring 2025
//  PA1: Monster Game
//
//  Your name:
//  Your ITSC email:           @connect.ust.hk
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
}
