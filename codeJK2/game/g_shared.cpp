#include "g_local.h"
#include "g_shared.h"
#include "qcommon/ojk_i_saved_game.h"


void clientInfo_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(infoValid);
    saved_game->write<int8_t>(name);
    saved_game->write<int32_t>(team);
    saved_game->write<int32_t>(score);
    saved_game->write<int32_t>(handicap);
    saved_game->write<int32_t>(legsModel);
    saved_game->write<int32_t>(legsSkin);
    saved_game->write<int32_t>(torsoModel);
    saved_game->write<int32_t>(torsoSkin);
    saved_game->write<int32_t>(headModel);
    saved_game->write<int32_t>(headSkin);
    saved_game->write<int32_t>(extensions);
    saved_game->write<int32_t>(animFileIndex);
    saved_game->write<int32_t>(sounds);
    saved_game->write<int32_t>(customBasicSoundDir);
    saved_game->write<int32_t>(customCombatSoundDir);
    saved_game->write<int32_t>(customExtraSoundDir);
    saved_game->write<int32_t>(customJediSoundDir);
}

void clientInfo_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(infoValid);
    saved_game->read<int8_t>(name);
    saved_game->read<int32_t>(team);
    saved_game->read<int32_t>(score);
    saved_game->read<int32_t>(handicap);
    saved_game->read<int32_t>(legsModel);
    saved_game->read<int32_t>(legsSkin);
    saved_game->read<int32_t>(torsoModel);
    saved_game->read<int32_t>(torsoSkin);
    saved_game->read<int32_t>(headModel);
    saved_game->read<int32_t>(headSkin);
    saved_game->read<int32_t>(extensions);
    saved_game->read<int32_t>(animFileIndex);
    saved_game->read<int32_t>(sounds);
    saved_game->read<int32_t>(customBasicSoundDir);
    saved_game->read<int32_t>(customCombatSoundDir);
    saved_game->read<int32_t>(customExtraSoundDir);
    saved_game->read<int32_t>(customJediSoundDir);
}


void modelInfo_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(modelIndex);
    saved_game->write<float>(customRGB);
    saved_game->write<int32_t>(customAlpha);
}

void modelInfo_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(modelIndex);
    saved_game->read<float>(customRGB);
    saved_game->read<int32_t>(customAlpha);
}


void renderInfo_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<>(legsModel);
    saved_game->write<int8_t>(legsModelName);
    saved_game->write<>(torsoModel);
    saved_game->write<>(headModel);
    saved_game->write<int8_t>(torsoModelName);
    saved_game->write<int8_t>(headModelName);
    saved_game->write<int32_t>(headYawRangeLeft);
    saved_game->write<int32_t>(headYawRangeRight);
    saved_game->write<int32_t>(headPitchRangeUp);
    saved_game->write<int32_t>(headPitchRangeDown);
    saved_game->write<int32_t>(torsoYawRangeLeft);
    saved_game->write<int32_t>(torsoYawRangeRight);
    saved_game->write<int32_t>(torsoPitchRangeUp);
    saved_game->write<int32_t>(torsoPitchRangeDown);
    saved_game->write<int32_t>(legsFrame);
    saved_game->write<int32_t>(torsoFrame);
    saved_game->write<float>(legsFpsMod);
    saved_game->write<float>(torsoFpsMod);
    saved_game->write<float>(customRGB);
    saved_game->write<int32_t>(customAlpha);
    saved_game->write<int32_t>(renderFlags);
    saved_game->write<float>(muzzlePoint);
    saved_game->write<float>(muzzleDir);
    saved_game->write<float>(muzzlePointOld);
    saved_game->write<float>(muzzleDirOld);
    saved_game->write<int32_t>(mPCalcTime);
    saved_game->write<float>(lockYaw);
    saved_game->write<float>(headPoint);
    saved_game->write<float>(headAngles);
    saved_game->write<float>(handRPoint);
    saved_game->write<float>(handLPoint);
    saved_game->write<float>(crotchPoint);
    saved_game->write<float>(footRPoint);
    saved_game->write<float>(footLPoint);
    saved_game->write<float>(torsoPoint);
    saved_game->write<float>(torsoAngles);
    saved_game->write<float>(eyePoint);
    saved_game->write<float>(eyeAngles);
    saved_game->write<int32_t>(lookTarget);
    saved_game->write<int32_t>(lookMode);
    saved_game->write<int32_t>(lookTargetClearTime);
    saved_game->write<int32_t>(lastVoiceVolume);
    saved_game->write<float>(lastHeadAngles);
    saved_game->write<float>(headBobAngles);
    saved_game->write<float>(targetHeadBobAngles);
    saved_game->write<int32_t>(lookingDebounceTime);
    saved_game->write<float>(legsYaw);
}

void renderInfo_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<>(legsModel);
    saved_game->read<int8_t>(legsModelName);
    saved_game->read<>(torsoModel);
    saved_game->read<>(headModel);
    saved_game->read<int8_t>(torsoModelName);
    saved_game->read<int8_t>(headModelName);
    saved_game->read<int32_t>(headYawRangeLeft);
    saved_game->read<int32_t>(headYawRangeRight);
    saved_game->read<int32_t>(headPitchRangeUp);
    saved_game->read<int32_t>(headPitchRangeDown);
    saved_game->read<int32_t>(torsoYawRangeLeft);
    saved_game->read<int32_t>(torsoYawRangeRight);
    saved_game->read<int32_t>(torsoPitchRangeUp);
    saved_game->read<int32_t>(torsoPitchRangeDown);
    saved_game->read<int32_t>(legsFrame);
    saved_game->read<int32_t>(torsoFrame);
    saved_game->read<float>(legsFpsMod);
    saved_game->read<float>(torsoFpsMod);
    saved_game->read<float>(customRGB);
    saved_game->read<int32_t>(customAlpha);
    saved_game->read<int32_t>(renderFlags);
    saved_game->read<float>(muzzlePoint);
    saved_game->read<float>(muzzleDir);
    saved_game->read<float>(muzzlePointOld);
    saved_game->read<float>(muzzleDirOld);
    saved_game->read<int32_t>(mPCalcTime);
    saved_game->read<float>(lockYaw);
    saved_game->read<float>(headPoint);
    saved_game->read<float>(headAngles);
    saved_game->read<float>(handRPoint);
    saved_game->read<float>(handLPoint);
    saved_game->read<float>(crotchPoint);
    saved_game->read<float>(footRPoint);
    saved_game->read<float>(footLPoint);
    saved_game->read<float>(torsoPoint);
    saved_game->read<float>(torsoAngles);
    saved_game->read<float>(eyePoint);
    saved_game->read<float>(eyeAngles);
    saved_game->read<int32_t>(lookTarget);
    saved_game->read<int32_t>(lookMode);
    saved_game->read<int32_t>(lookTargetClearTime);
    saved_game->read<int32_t>(lastVoiceVolume);
    saved_game->read<float>(lastHeadAngles);
    saved_game->read<float>(headBobAngles);
    saved_game->read<float>(targetHeadBobAngles);
    saved_game->read<int32_t>(lookingDebounceTime);
    saved_game->read<float>(legsYaw);
}


void playerTeamState_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(state);
    saved_game->write<int32_t>(captures);
    saved_game->write<int32_t>(basedefense);
    saved_game->write<int32_t>(carrierdefense);
    saved_game->write<int32_t>(flagrecovery);
    saved_game->write<int32_t>(fragcarrier);
    saved_game->write<int32_t>(assists);
    saved_game->write<float>(lasthurtcarrier);
    saved_game->write<float>(lastreturnedflag);
    saved_game->write<float>(flagsince);
    saved_game->write<float>(lastfraggedcarrier);
}

void playerTeamState_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(state);
    saved_game->read<int32_t>(captures);
    saved_game->read<int32_t>(basedefense);
    saved_game->read<int32_t>(carrierdefense);
    saved_game->read<int32_t>(flagrecovery);
    saved_game->read<int32_t>(fragcarrier);
    saved_game->read<int32_t>(assists);
    saved_game->read<float>(lasthurtcarrier);
    saved_game->read<float>(lastreturnedflag);
    saved_game->read<float>(flagsince);
    saved_game->read<float>(lastfraggedcarrier);
}


void objectives_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(display);
    saved_game->write<int32_t>(status);
}

void objectives_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(display);
    saved_game->read<int32_t>(status);
}


void missionStats_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(secretsFound);
    saved_game->write<int32_t>(totalSecrets);
    saved_game->write<int32_t>(shotsFired);
    saved_game->write<int32_t>(hits);
    saved_game->write<int32_t>(enemiesSpawned);
    saved_game->write<int32_t>(enemiesKilled);
    saved_game->write<int32_t>(saberThrownCnt);
    saved_game->write<int32_t>(saberBlocksCnt);
    saved_game->write<int32_t>(legAttacksCnt);
    saved_game->write<int32_t>(armAttacksCnt);
    saved_game->write<int32_t>(torsoAttacksCnt);
    saved_game->write<int32_t>(otherAttacksCnt);
    saved_game->write<int32_t>(forceUsed);
    saved_game->write<int32_t>(weaponUsed);
}

void missionStats_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(secretsFound);
    saved_game->read<int32_t>(totalSecrets);
    saved_game->read<int32_t>(shotsFired);
    saved_game->read<int32_t>(hits);
    saved_game->read<int32_t>(enemiesSpawned);
    saved_game->read<int32_t>(enemiesKilled);
    saved_game->read<int32_t>(saberThrownCnt);
    saved_game->read<int32_t>(saberBlocksCnt);
    saved_game->read<int32_t>(legAttacksCnt);
    saved_game->read<int32_t>(armAttacksCnt);
    saved_game->read<int32_t>(torsoAttacksCnt);
    saved_game->read<int32_t>(otherAttacksCnt);
    saved_game->read<int32_t>(forceUsed);
    saved_game->read<int32_t>(weaponUsed);
}


void clientSession_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(missionObjectivesShown);
    saved_game->write<int32_t>(sessionTeam);
    saved_game->write<>(mission_objectives);
    saved_game->write<>(missionStats);
}

void clientSession_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(missionObjectivesShown);
    saved_game->read<int32_t>(sessionTeam);
    saved_game->read<>(mission_objectives);
    saved_game->read<>(missionStats);
}


void clientPersistant_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(connected);
    saved_game->write<>(lastCommand);
    saved_game->write<int32_t>(localClient);
    saved_game->write<int8_t>(netname);
    saved_game->write<int32_t>(maxHealth);
    saved_game->write<int32_t>(enterTime);
    saved_game->write<int16_t>(cmd_angles);
    saved_game->write<>(teamState);
}

void clientPersistant_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(connected);
    saved_game->read<>(lastCommand);
    saved_game->read<int32_t>(localClient);
    saved_game->read<int8_t>(netname);
    saved_game->read<int32_t>(maxHealth);
    saved_game->read<int32_t>(enterTime);
    saved_game->read<int16_t>(cmd_angles);
    saved_game->read<>(teamState);
}


void gclient_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<>(ps);
    saved_game->write<>(pers);
    saved_game->write<>(sess);
    saved_game->write<int32_t>(noclip);
    saved_game->write<int32_t>(lastCmdTime);
    saved_game->write<>(usercmd);
    saved_game->write<int32_t>(buttons);
    saved_game->write<int32_t>(oldbuttons);
    saved_game->write<int32_t>(latched_buttons);
    saved_game->write<int32_t>(damage_armor);
    saved_game->write<int32_t>(damage_blood);
    saved_game->write<int32_t>(damage_knockback);
    saved_game->write<float>(damage_from);
    saved_game->write<int32_t>(damage_fromWorld);
    saved_game->write<int32_t>(accurateCount);
    saved_game->write<int32_t>(respawnTime);
    saved_game->write<int32_t>(inactivityTime);
    saved_game->write<int32_t>(inactivityWarning);
    saved_game->write<int32_t>(idleTime);
    saved_game->write<int32_t>(airOutTime);
    saved_game->write<int32_t>(timeResidual);
    saved_game->write<float>(facial_blink);
    saved_game->write<float>(facial_frown);
    saved_game->write<float>(facial_aux);
    saved_game->write<>(clientInfo);
    saved_game->write<int8_t>(forced_forwardmove);
    saved_game->write<int8_t>(forced_rightmove);
    saved_game->write<int32_t>(fireDelay);
    saved_game->write<int32_t>(playerTeam);
    saved_game->write<int32_t>(enemyTeam);
    saved_game->write<int32_t>(squadname);
    saved_game->write<int32_t>(team_leader);
    saved_game->write<int32_t>(leader);
    saved_game->write<int32_t>(follower);
    saved_game->write<int32_t>(numFollowers);
    saved_game->write<int32_t>(formationGoal);
    saved_game->write<int32_t>(nextFormGoal);
    saved_game->write<int32_t>(NPC_class);
    saved_game->write<float>(hiddenDist);
    saved_game->write<float>(hiddenDir);
    saved_game->write<>(renderInfo);
    saved_game->write<>(saberTrail);
    saved_game->write<int32_t>(dismembered);
    saved_game->write<int8_t>(dismemberProbLegs);
    saved_game->write<int8_t>(dismemberProbHead);
    saved_game->write<int8_t>(dismemberProbArms);
    saved_game->write<int8_t>(dismemberProbHands);
    saved_game->write<int8_t>(dismemberProbWaist);
    saved_game->write<int32_t>(standheight);
    saved_game->write<int32_t>(crouchheight);
    saved_game->write<int32_t>(poisonDamage);
    saved_game->write<int32_t>(poisonTime);
    saved_game->write<int32_t>(slopeRecalcTime);
    saved_game->write<float>(pushVec);
    saved_game->write<int32_t>(pushVecTime);
}

void gclient_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<>(ps);
    saved_game->read<>(pers);
    saved_game->read<>(sess);
    saved_game->read<int32_t>(noclip);
    saved_game->read<int32_t>(lastCmdTime);
    saved_game->read<>(usercmd);
    saved_game->read<int32_t>(buttons);
    saved_game->read<int32_t>(oldbuttons);
    saved_game->read<int32_t>(latched_buttons);
    saved_game->read<int32_t>(damage_armor);
    saved_game->read<int32_t>(damage_blood);
    saved_game->read<int32_t>(damage_knockback);
    saved_game->read<float>(damage_from);
    saved_game->read<int32_t>(damage_fromWorld);
    saved_game->read<int32_t>(accurateCount);
    saved_game->read<int32_t>(respawnTime);
    saved_game->read<int32_t>(inactivityTime);
    saved_game->read<int32_t>(inactivityWarning);
    saved_game->read<int32_t>(idleTime);
    saved_game->read<int32_t>(airOutTime);
    saved_game->read<int32_t>(timeResidual);
    saved_game->read<float>(facial_blink);
    saved_game->read<float>(facial_frown);
    saved_game->read<float>(facial_aux);
    saved_game->read<>(clientInfo);
    saved_game->read<int8_t>(forced_forwardmove);
    saved_game->read<int8_t>(forced_rightmove);
    saved_game->read<int32_t>(fireDelay);
    saved_game->read<int32_t>(playerTeam);
    saved_game->read<int32_t>(enemyTeam);
    saved_game->read<int32_t>(squadname);
    saved_game->read<int32_t>(team_leader);
    saved_game->read<int32_t>(leader);
    saved_game->read<int32_t>(follower);
    saved_game->read<int32_t>(numFollowers);
    saved_game->read<int32_t>(formationGoal);
    saved_game->read<int32_t>(nextFormGoal);
    saved_game->read<int32_t>(NPC_class);
    saved_game->read<float>(hiddenDist);
    saved_game->read<float>(hiddenDir);
    saved_game->read<>(renderInfo);
    saved_game->read<>(saberTrail);
    saved_game->read<int32_t>(dismembered);
    saved_game->read<int8_t>(dismemberProbLegs);
    saved_game->read<int8_t>(dismemberProbHead);
    saved_game->read<int8_t>(dismemberProbArms);
    saved_game->read<int8_t>(dismemberProbHands);
    saved_game->read<int8_t>(dismemberProbWaist);
    saved_game->read<int32_t>(standheight);
    saved_game->read<int32_t>(crouchheight);
    saved_game->read<int32_t>(poisonDamage);
    saved_game->read<int32_t>(poisonTime);
    saved_game->read<int32_t>(slopeRecalcTime);
    saved_game->read<float>(pushVec);
    saved_game->read<int32_t>(pushVecTime);
}


void parms_t::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int8_t>(parm);
}

void parms_t::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int8_t>(parm);
}


void gentity_s::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<>(s);
    saved_game->write<int32_t>(client);
    saved_game->write<int32_t>(inuse);
    saved_game->write<int32_t>(linked);
    saved_game->write<int32_t>(svFlags);
    saved_game->write<int32_t>(bmodel);
    saved_game->write<float>(mins);
    saved_game->write<float>(maxs);
    saved_game->write<int32_t>(contents);
    saved_game->write<float>(absmin);
    saved_game->write<float>(absmax);
    saved_game->write<float>(currentOrigin);
    saved_game->write<float>(currentAngles);
    saved_game->write<int32_t>(owner);
    saved_game->write<>(ghoul2);
    saved_game->write<int32_t>(classname);
    saved_game->write<int32_t>(spawnflags);
    saved_game->write<int32_t>(flags);
    saved_game->write<int32_t>(model);
    saved_game->write<int32_t>(model2);
    saved_game->write<int32_t>(freetime);
    saved_game->write<int32_t>(eventTime);
    saved_game->write<int32_t>(freeAfterEvent);
    saved_game->write<int32_t>(unlinkAfterEvent);
    saved_game->write<float>(physicsBounce);
    saved_game->write<int32_t>(clipmask);
    saved_game->write<float>(speed);
    saved_game->write<float>(movedir);
    saved_game->write<float>(lastOrigin);
    saved_game->write<float>(lastAngles);
    saved_game->write<float>(mass);
    saved_game->write<int32_t>(lastImpact);
    saved_game->write<int32_t>(watertype);
    saved_game->write<int32_t>(waterlevel);
    saved_game->write<float>(angle);
    saved_game->write<int32_t>(target);
    saved_game->write<int32_t>(target2);
    saved_game->write<int32_t>(target3);
    saved_game->write<int32_t>(target4);
    saved_game->write<int32_t>(targetname);
    saved_game->write<int32_t>(team);
    saved_game->write<int32_t>(roff);
    saved_game->write<int32_t>(roff_ctr);
    saved_game->write<int32_t>(next_roff_time);
    saved_game->write<int32_t>(fx_time);
    saved_game->write<int32_t>(nextthink);
    saved_game->write<int32_t>(e_ThinkFunc);
    saved_game->write<int32_t>(e_clThinkFunc);
    saved_game->write<int32_t>(e_ReachedFunc);
    saved_game->write<int32_t>(e_BlockedFunc);
    saved_game->write<int32_t>(e_TouchFunc);
    saved_game->write<int32_t>(e_UseFunc);
    saved_game->write<int32_t>(e_PainFunc);
    saved_game->write<int32_t>(e_DieFunc);
    saved_game->write<int32_t>(health);
    saved_game->write<int32_t>(max_health);
    saved_game->write<int32_t>(takedamage);
    saved_game->write<int32_t>(material);
    saved_game->write<int32_t>(damage);
    saved_game->write<int32_t>(dflags);
    saved_game->write<int32_t>(splashDamage);
    saved_game->write<int32_t>(splashRadius);
    saved_game->write<int32_t>(methodOfDeath);
    saved_game->write<int32_t>(splashMethodOfDeath);
    saved_game->write<int32_t>(locationDamage);
    saved_game->write<int32_t>(chain);
    saved_game->write<int32_t>(enemy);
    saved_game->write<int32_t>(activator);
    saved_game->write<int32_t>(teamchain);
    saved_game->write<int32_t>(teammaster);
    saved_game->write<int32_t>(lastEnemy);
    saved_game->write<float>(wait);
    saved_game->write<float>(random);
    saved_game->write<int32_t>(delay);
    saved_game->write<int32_t>(alt_fire);
    saved_game->write<int32_t>(count);
    saved_game->write<int32_t>(bounceCount);
    saved_game->write<int32_t>(fly_sound_debounce_time);
    saved_game->write<int32_t>(painDebounceTime);
    saved_game->write<int32_t>(disconnectDebounceTime);
    saved_game->write<int32_t>(attackDebounceTime);
    saved_game->write<int32_t>(pushDebounceTime);
    saved_game->write<int32_t>(aimDebounceTime);
    saved_game->write<int32_t>(useDebounceTime);
    saved_game->write<int32_t>(trigger_formation);
    saved_game->write<int32_t>(waypoint);
    saved_game->write<int32_t>(lastWaypoint);
    saved_game->write<int32_t>(lastValidWaypoint);
    saved_game->write<int32_t>(noWaypointTime);
    saved_game->write<int32_t>(combatPoint);
    saved_game->write<int32_t>(failedWaypoints);
    saved_game->write<int32_t>(failedWaypointCheckTime);
    saved_game->write<int32_t>(loopAnim);
    saved_game->write<int32_t>(startFrame);
    saved_game->write<int32_t>(endFrame);
    saved_game->write<int32_t>(sequencer);
    saved_game->write<int32_t>(taskManager);
    saved_game->write<int32_t>(taskID);
    saved_game->write<int32_t>(parms);
    saved_game->write<int32_t>(behaviorSet);
    saved_game->write<int32_t>(script_targetname);
    saved_game->write<int32_t>(delayScriptTime);
    saved_game->write<int32_t>(fullName);
    saved_game->write<int32_t>(soundSet);
    saved_game->write<int32_t>(setTime);
    saved_game->write<int32_t>(cameraGroup);
    saved_game->write<int32_t>(noDamageTeam);
    saved_game->write<int32_t>(playerModel);
    saved_game->write<int32_t>(weaponModel);
    saved_game->write<int32_t>(handRBolt);
    saved_game->write<int32_t>(handLBolt);
    saved_game->write<int32_t>(headBolt);
    saved_game->write<int32_t>(cervicalBolt);
    saved_game->write<int32_t>(chestBolt);
    saved_game->write<int32_t>(gutBolt);
    saved_game->write<int32_t>(torsoBolt);
    saved_game->write<int32_t>(crotchBolt);
    saved_game->write<int32_t>(motionBolt);
    saved_game->write<int32_t>(kneeLBolt);
    saved_game->write<int32_t>(kneeRBolt);
    saved_game->write<int32_t>(elbowLBolt);
    saved_game->write<int32_t>(elbowRBolt);
    saved_game->write<int32_t>(footLBolt);
    saved_game->write<int32_t>(footRBolt);
    saved_game->write<int32_t>(faceBone);
    saved_game->write<int32_t>(craniumBone);
    saved_game->write<int32_t>(cervicalBone);
    saved_game->write<int32_t>(thoracicBone);
    saved_game->write<int32_t>(upperLumbarBone);
    saved_game->write<int32_t>(lowerLumbarBone);
    saved_game->write<int32_t>(hipsBone);
    saved_game->write<int32_t>(motionBone);
    saved_game->write<int32_t>(rootBone);
    saved_game->write<int32_t>(footLBone);
    saved_game->write<int32_t>(footRBone);
    saved_game->write<int32_t>(genericBone1);
    saved_game->write<int32_t>(genericBone2);
    saved_game->write<int32_t>(genericBone3);
    saved_game->write<int32_t>(genericBolt1);
    saved_game->write<int32_t>(genericBolt2);
    saved_game->write<int32_t>(genericBolt3);
    saved_game->write<int32_t>(genericBolt4);
    saved_game->write<int32_t>(genericBolt5);
    saved_game->write<int32_t>(cinematicModel);
    saved_game->write<int32_t>(NPC);
    saved_game->write<int32_t>(ownername);
    saved_game->write<int32_t>(cantHitEnemyCounter);
    saved_game->write<int32_t>(NPC_type);
    saved_game->write<int32_t>(NPC_targetname);
    saved_game->write<int32_t>(NPC_target);
    saved_game->write<int32_t>(moverState);
    saved_game->write<int32_t>(soundPos1);
    saved_game->write<int32_t>(sound1to2);
    saved_game->write<int32_t>(sound2to1);
    saved_game->write<int32_t>(soundPos2);
    saved_game->write<int32_t>(soundLoop);
    saved_game->write<int32_t>(nextTrain);
    saved_game->write<int32_t>(prevTrain);
    saved_game->write<float>(pos1);
    saved_game->write<float>(pos2);
    saved_game->write<float>(pos3);
    saved_game->write<int32_t>(sounds);
    saved_game->write<int32_t>(closetarget);
    saved_game->write<int32_t>(opentarget);
    saved_game->write<int32_t>(paintarget);
    saved_game->write<int32_t>(lockCount);
    saved_game->write<float>(radius);
    saved_game->write<int32_t>(wpIndex);
    saved_game->write<int32_t>(noise_index);
    saved_game->write<float>(startRGBA);
    saved_game->write<float>(finalRGBA);
    saved_game->write<int32_t>(item);
    saved_game->write<int32_t>(message);
    saved_game->write<float>(lightLevel);
    saved_game->write<int32_t>(forcePushTime);
    saved_game->write<int32_t>(forcePuller);
}

void gentity_s::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<>(s);
    saved_game->read<int32_t>(client);
    saved_game->read<int32_t>(inuse);
    saved_game->read<int32_t>(linked);
    saved_game->read<int32_t>(svFlags);
    saved_game->read<int32_t>(bmodel);
    saved_game->read<float>(mins);
    saved_game->read<float>(maxs);
    saved_game->read<int32_t>(contents);
    saved_game->read<float>(absmin);
    saved_game->read<float>(absmax);
    saved_game->read<float>(currentOrigin);
    saved_game->read<float>(currentAngles);
    saved_game->read<int32_t>(owner);
    saved_game->read<>(ghoul2);
    saved_game->read<int32_t>(classname);
    saved_game->read<int32_t>(spawnflags);
    saved_game->read<int32_t>(flags);
    saved_game->read<int32_t>(model);
    saved_game->read<int32_t>(model2);
    saved_game->read<int32_t>(freetime);
    saved_game->read<int32_t>(eventTime);
    saved_game->read<int32_t>(freeAfterEvent);
    saved_game->read<int32_t>(unlinkAfterEvent);
    saved_game->read<float>(physicsBounce);
    saved_game->read<int32_t>(clipmask);
    saved_game->read<float>(speed);
    saved_game->read<float>(movedir);
    saved_game->read<float>(lastOrigin);
    saved_game->read<float>(lastAngles);
    saved_game->read<float>(mass);
    saved_game->read<int32_t>(lastImpact);
    saved_game->read<int32_t>(watertype);
    saved_game->read<int32_t>(waterlevel);
    saved_game->read<float>(angle);
    saved_game->read<int32_t>(target);
    saved_game->read<int32_t>(target2);
    saved_game->read<int32_t>(target3);
    saved_game->read<int32_t>(target4);
    saved_game->read<int32_t>(targetname);
    saved_game->read<int32_t>(team);
    saved_game->read<int32_t>(roff);
    saved_game->read<int32_t>(roff_ctr);
    saved_game->read<int32_t>(next_roff_time);
    saved_game->read<int32_t>(fx_time);
    saved_game->read<int32_t>(nextthink);
    saved_game->read<int32_t>(e_ThinkFunc);
    saved_game->read<int32_t>(e_clThinkFunc);
    saved_game->read<int32_t>(e_ReachedFunc);
    saved_game->read<int32_t>(e_BlockedFunc);
    saved_game->read<int32_t>(e_TouchFunc);
    saved_game->read<int32_t>(e_UseFunc);
    saved_game->read<int32_t>(e_PainFunc);
    saved_game->read<int32_t>(e_DieFunc);
    saved_game->read<int32_t>(health);
    saved_game->read<int32_t>(max_health);
    saved_game->read<int32_t>(takedamage);
    saved_game->read<int32_t>(material);
    saved_game->read<int32_t>(damage);
    saved_game->read<int32_t>(dflags);
    saved_game->read<int32_t>(splashDamage);
    saved_game->read<int32_t>(splashRadius);
    saved_game->read<int32_t>(methodOfDeath);
    saved_game->read<int32_t>(splashMethodOfDeath);
    saved_game->read<int32_t>(locationDamage);
    saved_game->read<int32_t>(chain);
    saved_game->read<int32_t>(enemy);
    saved_game->read<int32_t>(activator);
    saved_game->read<int32_t>(teamchain);
    saved_game->read<int32_t>(teammaster);
    saved_game->read<int32_t>(lastEnemy);
    saved_game->read<float>(wait);
    saved_game->read<float>(random);
    saved_game->read<int32_t>(delay);
    saved_game->read<int32_t>(alt_fire);
    saved_game->read<int32_t>(count);
    saved_game->read<int32_t>(bounceCount);
    saved_game->read<int32_t>(fly_sound_debounce_time);
    saved_game->read<int32_t>(painDebounceTime);
    saved_game->read<int32_t>(disconnectDebounceTime);
    saved_game->read<int32_t>(attackDebounceTime);
    saved_game->read<int32_t>(pushDebounceTime);
    saved_game->read<int32_t>(aimDebounceTime);
    saved_game->read<int32_t>(useDebounceTime);
    saved_game->read<int32_t>(trigger_formation);
    saved_game->read<int32_t>(waypoint);
    saved_game->read<int32_t>(lastWaypoint);
    saved_game->read<int32_t>(lastValidWaypoint);
    saved_game->read<int32_t>(noWaypointTime);
    saved_game->read<int32_t>(combatPoint);
    saved_game->read<int32_t>(failedWaypoints);
    saved_game->read<int32_t>(failedWaypointCheckTime);
    saved_game->read<int32_t>(loopAnim);
    saved_game->read<int32_t>(startFrame);
    saved_game->read<int32_t>(endFrame);
    saved_game->read<int32_t>(sequencer);
    saved_game->read<int32_t>(taskManager);
    saved_game->read<int32_t>(taskID);
    saved_game->read<int32_t>(parms);
    saved_game->read<int32_t>(behaviorSet);
    saved_game->read<int32_t>(script_targetname);
    saved_game->read<int32_t>(delayScriptTime);
    saved_game->read<int32_t>(fullName);
    saved_game->read<int32_t>(soundSet);
    saved_game->read<int32_t>(setTime);
    saved_game->read<int32_t>(cameraGroup);
    saved_game->read<int32_t>(noDamageTeam);
    saved_game->read<int32_t>(playerModel);
    saved_game->read<int32_t>(weaponModel);
    saved_game->read<int32_t>(handRBolt);
    saved_game->read<int32_t>(handLBolt);
    saved_game->read<int32_t>(headBolt);
    saved_game->read<int32_t>(cervicalBolt);
    saved_game->read<int32_t>(chestBolt);
    saved_game->read<int32_t>(gutBolt);
    saved_game->read<int32_t>(torsoBolt);
    saved_game->read<int32_t>(crotchBolt);
    saved_game->read<int32_t>(motionBolt);
    saved_game->read<int32_t>(kneeLBolt);
    saved_game->read<int32_t>(kneeRBolt);
    saved_game->read<int32_t>(elbowLBolt);
    saved_game->read<int32_t>(elbowRBolt);
    saved_game->read<int32_t>(footLBolt);
    saved_game->read<int32_t>(footRBolt);
    saved_game->read<int32_t>(faceBone);
    saved_game->read<int32_t>(craniumBone);
    saved_game->read<int32_t>(cervicalBone);
    saved_game->read<int32_t>(thoracicBone);
    saved_game->read<int32_t>(upperLumbarBone);
    saved_game->read<int32_t>(lowerLumbarBone);
    saved_game->read<int32_t>(hipsBone);
    saved_game->read<int32_t>(motionBone);
    saved_game->read<int32_t>(rootBone);
    saved_game->read<int32_t>(footLBone);
    saved_game->read<int32_t>(footRBone);
    saved_game->read<int32_t>(genericBone1);
    saved_game->read<int32_t>(genericBone2);
    saved_game->read<int32_t>(genericBone3);
    saved_game->read<int32_t>(genericBolt1);
    saved_game->read<int32_t>(genericBolt2);
    saved_game->read<int32_t>(genericBolt3);
    saved_game->read<int32_t>(genericBolt4);
    saved_game->read<int32_t>(genericBolt5);
    saved_game->read<int32_t>(cinematicModel);
    saved_game->read<int32_t>(NPC);
    saved_game->read<int32_t>(ownername);
    saved_game->read<int32_t>(cantHitEnemyCounter);
    saved_game->read<int32_t>(NPC_type);
    saved_game->read<int32_t>(NPC_targetname);
    saved_game->read<int32_t>(NPC_target);
    saved_game->read<int32_t>(moverState);
    saved_game->read<int32_t>(soundPos1);
    saved_game->read<int32_t>(sound1to2);
    saved_game->read<int32_t>(sound2to1);
    saved_game->read<int32_t>(soundPos2);
    saved_game->read<int32_t>(soundLoop);
    saved_game->read<int32_t>(nextTrain);
    saved_game->read<int32_t>(prevTrain);
    saved_game->read<float>(pos1);
    saved_game->read<float>(pos2);
    saved_game->read<float>(pos3);
    saved_game->read<int32_t>(sounds);
    saved_game->read<int32_t>(closetarget);
    saved_game->read<int32_t>(opentarget);
    saved_game->read<int32_t>(paintarget);
    saved_game->read<int32_t>(lockCount);
    saved_game->read<float>(radius);
    saved_game->read<int32_t>(wpIndex);
    saved_game->read<int32_t>(noise_index);
    saved_game->read<float>(startRGBA);
    saved_game->read<float>(finalRGBA);
    saved_game->read<int32_t>(item);
    saved_game->read<int32_t>(message);
    saved_game->read<float>(lightLevel);
    saved_game->read<int32_t>(forcePushTime);
    saved_game->read<int32_t>(forcePuller);
}


void CGhoul2Info_v::sg_export(
    ojk::ISavedGame* saved_game) const
{
    saved_game->write<int32_t>(mItem);
}

void CGhoul2Info_v::sg_import(
    ojk::ISavedGame* saved_game)
{
    saved_game->read<int32_t>(mItem);
}
