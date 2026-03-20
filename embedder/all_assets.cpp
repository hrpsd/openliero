#include <string>
#include <fmemopen/libfmemopen.h>
FILE* embeddedFOpen(std::string const& name)
{
if (name == "./TC/openliero/tc.cfg") {
#include "tc.cfg.c"
return fmemopen(TC_openliero_tc_cfg, TC_openliero_tc_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/blood.cfg") {
#include "blood.cfg.c"
return fmemopen(TC_openliero_nobjects_blood_cfg, TC_openliero_nobjects_blood_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/chiquitabomb_bombs.cfg") {
#include "chiquitabomb_bombs.cfg.c"
return fmemopen(TC_openliero_nobjects_chiquitabomb_bombs_cfg, TC_openliero_nobjects_chiquitabomb_bombs_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/clusterbomb_bombs.cfg") {
#include "clusterbomb_bombs.cfg.c"
return fmemopen(TC_openliero_nobjects_clusterbomb_bombs_cfg, TC_openliero_nobjects_clusterbomb_bombs_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/dirt.cfg") {
#include "dirt.cfg.c"
return fmemopen(TC_openliero_nobjects_dirt_cfg, TC_openliero_nobjects_dirt_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/flag_1.cfg") {
#include "flag_1.cfg.c"
return fmemopen(TC_openliero_nobjects_flag_1_cfg, TC_openliero_nobjects_flag_1_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/flag_2.cfg") {
#include "flag_2.cfg.c"
return fmemopen(TC_openliero_nobjects_flag_2_cfg, TC_openliero_nobjects_flag_2_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_1.cfg") {
#include "grasshopper_1.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_1_cfg, TC_openliero_nobjects_grasshopper_1_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_2.cfg") {
#include "grasshopper_2.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_2_cfg, TC_openliero_nobjects_grasshopper_2_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_3.cfg") {
#include "grasshopper_3.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_3_cfg, TC_openliero_nobjects_grasshopper_3_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_4.cfg") {
#include "grasshopper_4.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_4_cfg, TC_openliero_nobjects_grasshopper_4_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_5.cfg") {
#include "grasshopper_5.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_5_cfg, TC_openliero_nobjects_grasshopper_5_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_6.cfg") {
#include "grasshopper_6.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_6_cfg, TC_openliero_nobjects_grasshopper_6_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/grasshopper_7.cfg") {
#include "grasshopper_7.cfg.c"
return fmemopen(TC_openliero_nobjects_grasshopper_7_cfg, TC_openliero_nobjects_grasshopper_7_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/hellraider_bullets.cfg") {
#include "hellraider_bullets.cfg.c"
return fmemopen(TC_openliero_nobjects_hellraider_bullets_cfg, TC_openliero_nobjects_hellraider_bullets_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/large_nukes.cfg") {
#include "large_nukes.cfg.c"
return fmemopen(TC_openliero_nobjects_large_nukes_cfg, TC_openliero_nobjects_large_nukes_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/napalm_fireballs.cfg") {
#include "napalm_fireballs.cfg.c"
return fmemopen(TC_openliero_nobjects_napalm_fireballs_cfg, TC_openliero_nobjects_napalm_fireballs_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/particle__disappearing.cfg") {
#include "particle__disappearing.cfg.c"
return fmemopen(TC_openliero_nobjects_particle__disappearing_cfg, TC_openliero_nobjects_particle__disappearing_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/particle__larger_damage.cfg") {
#include "particle__larger_damage.cfg.c"
return fmemopen(TC_openliero_nobjects_particle__larger_damage_cfg, TC_openliero_nobjects_particle__larger_damage_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/particle__medium_damage.cfg") {
#include "particle__medium_damage.cfg.c"
return fmemopen(TC_openliero_nobjects_particle__medium_damage_cfg, TC_openliero_nobjects_particle__medium_damage_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/particle__small_damage.cfg") {
#include "particle__small_damage.cfg.c"
return fmemopen(TC_openliero_nobjects_particle__small_damage_cfg, TC_openliero_nobjects_particle__small_damage_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/shells.cfg") {
#include "shells.cfg.c"
return fmemopen(TC_openliero_nobjects_shells_cfg, TC_openliero_nobjects_shells_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/small_nukes.cfg") {
#include "small_nukes.cfg.c"
return fmemopen(TC_openliero_nobjects_small_nukes_cfg, TC_openliero_nobjects_small_nukes_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/worm_1_parts.cfg") {
#include "worm_1_parts.cfg.c"
return fmemopen(TC_openliero_nobjects_worm_1_parts_cfg, TC_openliero_nobjects_worm_1_parts_cfg_len, "r");
}
if (name == "./TC/openliero/nobjects/worm_2_parts.cfg") {
#include "worm_2_parts.cfg.c"
return fmemopen(TC_openliero_nobjects_worm_2_parts_cfg, TC_openliero_nobjects_worm_2_parts_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/flashing_pixel.cfg") {
#include "flashing_pixel.cfg.c"
return fmemopen(TC_openliero_sobjects_flashing_pixel_cfg, TC_openliero_sobjects_flashing_pixel_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/hellraider_smoke.cfg") {
#include "hellraider_smoke.cfg.c"
return fmemopen(TC_openliero_sobjects_hellraider_smoke_cfg, TC_openliero_sobjects_hellraider_smoke_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/large_explosion.cfg") {
#include "large_explosion.cfg.c"
return fmemopen(TC_openliero_sobjects_large_explosion_cfg, TC_openliero_sobjects_large_explosion_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/large_explosion__smaller.cfg") {
#include "large_explosion__smaller.cfg.c"
return fmemopen(TC_openliero_sobjects_large_explosion__smaller_cfg, TC_openliero_sobjects_large_explosion__smaller_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/medium_explosion.cfg") {
#include "medium_explosion.cfg.c"
return fmemopen(TC_openliero_sobjects_medium_explosion_cfg, TC_openliero_sobjects_medium_explosion_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/medium_explosion__bigger.cfg") {
#include "medium_explosion__bigger.cfg.c"
return fmemopen(TC_openliero_sobjects_medium_explosion__bigger_cfg, TC_openliero_sobjects_medium_explosion__bigger_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/medium_explosion__smaller.cfg") {
#include "medium_explosion__smaller.cfg.c"
return fmemopen(TC_openliero_sobjects_medium_explosion__smaller_cfg, TC_openliero_sobjects_medium_explosion__smaller_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/nuke_smoke.cfg") {
#include "nuke_smoke.cfg.c"
return fmemopen(TC_openliero_sobjects_nuke_smoke_cfg, TC_openliero_sobjects_nuke_smoke_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/small_explosion.cfg") {
#include "small_explosion.cfg.c"
return fmemopen(TC_openliero_sobjects_small_explosion_cfg, TC_openliero_sobjects_small_explosion_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/small_explosion__silent.cfg") {
#include "small_explosion__silent.cfg.c"
return fmemopen(TC_openliero_sobjects_small_explosion__silent_cfg, TC_openliero_sobjects_small_explosion__silent_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/teleport_flash.cfg") {
#include "teleport_flash.cfg.c"
return fmemopen(TC_openliero_sobjects_teleport_flash_cfg, TC_openliero_sobjects_teleport_flash_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/unknown.cfg") {
#include "unknown.cfg.c"
return fmemopen(TC_openliero_sobjects_unknown_cfg, TC_openliero_sobjects_unknown_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/very_small_explosion__silent.cfg") {
#include "very_small_explosion__silent.cfg.c"
return fmemopen(TC_openliero_sobjects_very_small_explosion__silent_cfg, TC_openliero_sobjects_very_small_explosion__silent_cfg_len, "r");
}
if (name == "./TC/openliero/sobjects/zimm_flash.cfg") {
#include "zimm_flash.cfg.c"
return fmemopen(TC_openliero_sobjects_zimm_flash_cfg, TC_openliero_sobjects_zimm_flash_cfg_len, "r");
}
if (name == "./TC/openliero/sounds/alive.wav") {
#include "alive.wav.c"
return fmemopen(TC_openliero_sounds_alive_wav, TC_openliero_sounds_alive_wav_len, "r");
}
if (name == "./TC/openliero/sounds/bazooka.wav") {
#include "bazooka.wav.c"
return fmemopen(TC_openliero_sounds_bazooka_wav, TC_openliero_sounds_bazooka_wav_len, "r");
}
if (name == "./TC/openliero/sounds/begin.wav") {
#include "begin.wav.c"
return fmemopen(TC_openliero_sounds_begin_wav, TC_openliero_sounds_begin_wav_len, "r");
}
if (name == "./TC/openliero/sounds/blaster.wav") {
#include "blaster.wav.c"
return fmemopen(TC_openliero_sounds_blaster_wav, TC_openliero_sounds_blaster_wav_len, "r");
}
if (name == "./TC/openliero/sounds/boing.wav") {
#include "boing.wav.c"
return fmemopen(TC_openliero_sounds_boing_wav, TC_openliero_sounds_boing_wav_len, "r");
}
if (name == "./TC/openliero/sounds/bump.wav") {
#include "bump.wav.c"
return fmemopen(TC_openliero_sounds_bump_wav, TC_openliero_sounds_bump_wav_len, "r");
}
if (name == "./TC/openliero/sounds/burner.wav") {
#include "burner.wav.c"
return fmemopen(TC_openliero_sounds_burner_wav, TC_openliero_sounds_burner_wav_len, "r");
}
if (name == "./TC/openliero/sounds/death1.wav") {
#include "death1.wav.c"
return fmemopen(TC_openliero_sounds_death1_wav, TC_openliero_sounds_death1_wav_len, "r");
}
if (name == "./TC/openliero/sounds/death2.wav") {
#include "death2.wav.c"
return fmemopen(TC_openliero_sounds_death2_wav, TC_openliero_sounds_death2_wav_len, "r");
}
if (name == "./TC/openliero/sounds/death3.wav") {
#include "death3.wav.c"
return fmemopen(TC_openliero_sounds_death3_wav, TC_openliero_sounds_death3_wav_len, "r");
}
if (name == "./TC/openliero/sounds/dirt.wav") {
#include "dirt.wav.c"
return fmemopen(TC_openliero_sounds_dirt_wav, TC_openliero_sounds_dirt_wav_len, "r");
}
if (name == "./TC/openliero/sounds/dropshel.wav") {
#include "dropshel.wav.c"
return fmemopen(TC_openliero_sounds_dropshel_wav, TC_openliero_sounds_dropshel_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp2.wav") {
#include "exp2.wav.c"
return fmemopen(TC_openliero_sounds_exp2_wav, TC_openliero_sounds_exp2_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp3.wav") {
#include "exp3.wav.c"
return fmemopen(TC_openliero_sounds_exp3_wav, TC_openliero_sounds_exp3_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp3a.wav") {
#include "exp3a.wav.c"
return fmemopen(TC_openliero_sounds_exp3a_wav, TC_openliero_sounds_exp3a_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp3b.wav") {
#include "exp3b.wav.c"
return fmemopen(TC_openliero_sounds_exp3b_wav, TC_openliero_sounds_exp3b_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp4.wav") {
#include "exp4.wav.c"
return fmemopen(TC_openliero_sounds_exp4_wav, TC_openliero_sounds_exp4_wav_len, "r");
}
if (name == "./TC/openliero/sounds/exp5.wav") {
#include "exp5.wav.c"
return fmemopen(TC_openliero_sounds_exp5_wav, TC_openliero_sounds_exp5_wav_len, "r");
}
if (name == "./TC/openliero/sounds/hurt1.wav") {
#include "hurt1.wav.c"
return fmemopen(TC_openliero_sounds_hurt1_wav, TC_openliero_sounds_hurt1_wav_len, "r");
}
if (name == "./TC/openliero/sounds/hurt2.wav") {
#include "hurt2.wav.c"
return fmemopen(TC_openliero_sounds_hurt2_wav, TC_openliero_sounds_hurt2_wav_len, "r");
}
if (name == "./TC/openliero/sounds/hurt3.wav") {
#include "hurt3.wav.c"
return fmemopen(TC_openliero_sounds_hurt3_wav, TC_openliero_sounds_hurt3_wav_len, "r");
}
if (name == "./TC/openliero/sounds/larpa.wav") {
#include "larpa.wav.c"
return fmemopen(TC_openliero_sounds_larpa_wav, TC_openliero_sounds_larpa_wav_len, "r");
}
if (name == "./TC/openliero/sounds/movedown.wav") {
#include "movedown.wav.c"
return fmemopen(TC_openliero_sounds_movedown_wav, TC_openliero_sounds_movedown_wav_len, "r");
}
if (name == "./TC/openliero/sounds/moveup.wav") {
#include "moveup.wav.c"
return fmemopen(TC_openliero_sounds_moveup_wav, TC_openliero_sounds_moveup_wav_len, "r");
}
if (name == "./TC/openliero/sounds/reloaded.wav") {
#include "reloaded.wav.c"
return fmemopen(TC_openliero_sounds_reloaded_wav, TC_openliero_sounds_reloaded_wav_len, "r");
}
if (name == "./TC/openliero/sounds/rifle.wav") {
#include "rifle.wav.c"
return fmemopen(TC_openliero_sounds_rifle_wav, TC_openliero_sounds_rifle_wav_len, "r");
}
if (name == "./TC/openliero/sounds/select.wav") {
#include "select.wav.c"
return fmemopen(TC_openliero_sounds_select_wav, TC_openliero_sounds_select_wav_len, "r");
}
if (name == "./TC/openliero/sounds/shot.wav") {
#include "shot.wav.c"
return fmemopen(TC_openliero_sounds_shot_wav, TC_openliero_sounds_shot_wav_len, "r");
}
if (name == "./TC/openliero/sounds/shotgun.wav") {
#include "shotgun.wav.c"
return fmemopen(TC_openliero_sounds_shotgun_wav, TC_openliero_sounds_shotgun_wav_len, "r");
}
if (name == "./TC/openliero/sounds/throw.wav") {
#include "throw.wav.c"
return fmemopen(TC_openliero_sounds_throw_wav, TC_openliero_sounds_throw_wav_len, "r");
}
if (name == "./TC/openliero/sprites/font.tga") {
#include "font.tga.c"
return fmemopen(TC_openliero_sprites_font_tga, TC_openliero_sprites_font_tga_len, "r");
}
if (name == "./TC/openliero/sprites/large.tga") {
#include "large.tga.c"
return fmemopen(TC_openliero_sprites_large_tga, TC_openliero_sprites_large_tga_len, "r");
}
if (name == "./TC/openliero/sprites/small.tga") {
#include "small.tga.c"
return fmemopen(TC_openliero_sprites_small_tga, TC_openliero_sprites_small_tga_len, "r");
}
if (name == "./TC/openliero/sprites/text.tga") {
#include "text.tga.c"
return fmemopen(TC_openliero_sprites_text_tga, TC_openliero_sprites_text_tga_len, "r");
}
if (name == "./TC/openliero/weapons/bazooka.cfg") {
#include "bazooka.cfg.c"
return fmemopen(TC_openliero_weapons_bazooka_cfg, TC_openliero_weapons_bazooka_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/big_nuke.cfg") {
#include "big_nuke.cfg.c"
return fmemopen(TC_openliero_weapons_big_nuke_cfg, TC_openliero_weapons_big_nuke_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/blaster.cfg") {
#include "blaster.cfg.c"
return fmemopen(TC_openliero_weapons_blaster_cfg, TC_openliero_weapons_blaster_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/booby_trap.cfg") {
#include "booby_trap.cfg.c"
return fmemopen(TC_openliero_weapons_booby_trap_cfg, TC_openliero_weapons_booby_trap_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/bouncy_larpa.cfg") {
#include "bouncy_larpa.cfg.c"
return fmemopen(TC_openliero_weapons_bouncy_larpa_cfg, TC_openliero_weapons_bouncy_larpa_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/bouncy_mine.cfg") {
#include "bouncy_mine.cfg.c"
return fmemopen(TC_openliero_weapons_bouncy_mine_cfg, TC_openliero_weapons_bouncy_mine_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/cannon.cfg") {
#include "cannon.cfg.c"
return fmemopen(TC_openliero_weapons_cannon_cfg, TC_openliero_weapons_cannon_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/chaingun.cfg") {
#include "chaingun.cfg.c"
return fmemopen(TC_openliero_weapons_chaingun_cfg, TC_openliero_weapons_chaingun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/chiquita_bomb.cfg") {
#include "chiquita_bomb.cfg.c"
return fmemopen(TC_openliero_weapons_chiquita_bomb_cfg, TC_openliero_weapons_chiquita_bomb_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/cluster_bomb.cfg") {
#include "cluster_bomb.cfg.c"
return fmemopen(TC_openliero_weapons_cluster_bomb_cfg, TC_openliero_weapons_cluster_bomb_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/crackler.cfg") {
#include "crackler.cfg.c"
return fmemopen(TC_openliero_weapons_crackler_cfg, TC_openliero_weapons_crackler_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/dart.cfg") {
#include "dart.cfg.c"
return fmemopen(TC_openliero_weapons_dart_cfg, TC_openliero_weapons_dart_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/dirtball.cfg") {
#include "dirtball.cfg.c"
return fmemopen(TC_openliero_weapons_dirtball_cfg, TC_openliero_weapons_dirtball_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/doomsday.cfg") {
#include "doomsday.cfg.c"
return fmemopen(TC_openliero_weapons_doomsday_cfg, TC_openliero_weapons_doomsday_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/explosives.cfg") {
#include "explosives.cfg.c"
return fmemopen(TC_openliero_weapons_explosives_cfg, TC_openliero_weapons_explosives_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/fan.cfg") {
#include "fan.cfg.c"
return fmemopen(TC_openliero_weapons_fan_cfg, TC_openliero_weapons_fan_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/flamer.cfg") {
#include "flamer.cfg.c"
return fmemopen(TC_openliero_weapons_flamer_cfg, TC_openliero_weapons_flamer_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/float_mine.cfg") {
#include "float_mine.cfg.c"
return fmemopen(TC_openliero_weapons_float_mine_cfg, TC_openliero_weapons_float_mine_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/gauss_gun.cfg") {
#include "gauss_gun.cfg.c"
return fmemopen(TC_openliero_weapons_gauss_gun_cfg, TC_openliero_weapons_gauss_gun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/grasshopper.cfg") {
#include "grasshopper.cfg.c"
return fmemopen(TC_openliero_weapons_grasshopper_cfg, TC_openliero_weapons_grasshopper_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/greenball.cfg") {
#include "greenball.cfg.c"
return fmemopen(TC_openliero_weapons_greenball_cfg, TC_openliero_weapons_greenball_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/grenade.cfg") {
#include "grenade.cfg.c"
return fmemopen(TC_openliero_weapons_grenade_cfg, TC_openliero_weapons_grenade_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/handgun.cfg") {
#include "handgun.cfg.c"
return fmemopen(TC_openliero_weapons_handgun_cfg, TC_openliero_weapons_handgun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/hellraider.cfg") {
#include "hellraider.cfg.c"
return fmemopen(TC_openliero_weapons_hellraider_cfg, TC_openliero_weapons_hellraider_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/larpa.cfg") {
#include "larpa.cfg.c"
return fmemopen(TC_openliero_weapons_larpa_cfg, TC_openliero_weapons_larpa_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/laser.cfg") {
#include "laser.cfg.c"
return fmemopen(TC_openliero_weapons_laser_cfg, TC_openliero_weapons_laser_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/mine.cfg") {
#include "mine.cfg.c"
return fmemopen(TC_openliero_weapons_mine_cfg, TC_openliero_weapons_mine_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/minigun.cfg") {
#include "minigun.cfg.c"
return fmemopen(TC_openliero_weapons_minigun_cfg, TC_openliero_weapons_minigun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/mini_nuke.cfg") {
#include "mini_nuke.cfg.c"
return fmemopen(TC_openliero_weapons_mini_nuke_cfg, TC_openliero_weapons_mini_nuke_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/mini_rockets.cfg") {
#include "mini_rockets.cfg.c"
return fmemopen(TC_openliero_weapons_mini_rockets_cfg, TC_openliero_weapons_mini_rockets_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/missile.cfg") {
#include "missile.cfg.c"
return fmemopen(TC_openliero_weapons_missile_cfg, TC_openliero_weapons_missile_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/napalm.cfg") {
#include "napalm.cfg.c"
return fmemopen(TC_openliero_weapons_napalm_cfg, TC_openliero_weapons_napalm_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/rb_rampage.cfg") {
#include "rb_rampage.cfg.c"
return fmemopen(TC_openliero_weapons_rb_rampage_cfg, TC_openliero_weapons_rb_rampage_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/rifle.cfg") {
#include "rifle.cfg.c"
return fmemopen(TC_openliero_weapons_rifle_cfg, TC_openliero_weapons_rifle_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/shotgun.cfg") {
#include "shotgun.cfg.c"
return fmemopen(TC_openliero_weapons_shotgun_cfg, TC_openliero_weapons_shotgun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/spikeballs.cfg") {
#include "spikeballs.cfg.c"
return fmemopen(TC_openliero_weapons_spikeballs_cfg, TC_openliero_weapons_spikeballs_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/super_shotgun.cfg") {
#include "super_shotgun.cfg.c"
return fmemopen(TC_openliero_weapons_super_shotgun_cfg, TC_openliero_weapons_super_shotgun_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/uzi.cfg") {
#include "uzi.cfg.c"
return fmemopen(TC_openliero_weapons_uzi_cfg, TC_openliero_weapons_uzi_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/winchester.cfg") {
#include "winchester.cfg.c"
return fmemopen(TC_openliero_weapons_winchester_cfg, TC_openliero_weapons_winchester_cfg_len, "r");
}
if (name == "./TC/openliero/weapons/zimm.cfg") {
#include "zimm.cfg.c"
return fmemopen(TC_openliero_weapons_zimm_cfg, TC_openliero_weapons_zimm_cfg_len, "r");
}
return 0;
}
