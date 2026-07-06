#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152840
// Address: 0x152840 - 0x152930
void sub_00152840_0x152840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152840_0x152840");
#endif

    ctx->pc = 0x152840u;

    // 0x152840: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152844: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x152844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152848: 0x9465f348  lhu         $a1, -0xCB8($v1)
    ctx->pc = 0x152848u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x15284c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15284cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152850: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x152850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
    // 0x152854: 0x10870022  beq         $a0, $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x152854u;
    {
        const bool branch_taken_0x152854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x152858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152854u;
            // 0x152858: 0xa465f348  sh          $a1, -0xCB8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294964040), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152854) {
            ctx->pc = 0x1528E0u;
            goto label_1528e0;
        }
    }
    ctx->pc = 0x15285Cu;
    // 0x15285c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15285cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152860: 0x10860012  beq         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x152860u;
    {
        const bool branch_taken_0x152860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x152860) {
            ctx->pc = 0x1528ACu;
            goto label_1528ac;
        }
    }
    ctx->pc = 0x152868u;
    // 0x152868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152868u;
    {
        const bool branch_taken_0x152868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152868) {
            ctx->pc = 0x152878u;
            goto label_152878;
        }
    }
    ctx->pc = 0x152870u;
    // 0x152870: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x152870u;
    {
        const bool branch_taken_0x152870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152870) {
            ctx->pc = 0x152918u;
            goto label_152918;
        }
    }
    ctx->pc = 0x152878u;
label_152878:
    // 0x152878: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15287c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15287cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152880: 0xa086efdf  sb          $a2, -0x1021($a0)
    ctx->pc = 0x152880u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963167), (uint8_t)GPR_U32(ctx, 6));
    // 0x152884: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x152888: 0xa460efe2  sh          $zero, -0x101E($v1)
    ctx->pc = 0x152888u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963170), (uint16_t)GPR_U32(ctx, 0));
    // 0x15288c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x15288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152890: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152894: 0xa464efe4  sh          $a0, -0x101C($v1)
    ctx->pc = 0x152894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963172), (uint16_t)GPR_U32(ctx, 4));
    // 0x152898: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15289c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15289cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528a0: 0xa085efdd  sb          $a1, -0x1023($a0)
    ctx->pc = 0x1528a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963165), (uint8_t)GPR_U32(ctx, 5));
    // 0x1528a4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1528A4u;
    {
        const bool branch_taken_0x1528a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528A4u;
            // 0x1528a8: 0xa066efdc  sb          $a2, -0x1024($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294963164), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528a4) {
            ctx->pc = 0x152918u;
            goto label_152918;
        }
    }
    ctx->pc = 0x1528ACu;
label_1528ac:
    // 0x1528ac: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1528acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1528b0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528b4: 0xa086efdf  sb          $a2, -0x1021($a0)
    ctx->pc = 0x1528b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963167), (uint8_t)GPR_U32(ctx, 6));
    // 0x1528b8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1528bc: 0xa460efe2  sh          $zero, -0x101E($v1)
    ctx->pc = 0x1528bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1528c0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1528c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1528c4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528c8: 0xa464efe4  sh          $a0, -0x101C($v1)
    ctx->pc = 0x1528c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963172), (uint16_t)GPR_U32(ctx, 4));
    // 0x1528cc: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1528d0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528d4: 0xa085efdd  sb          $a1, -0x1023($a0)
    ctx->pc = 0x1528d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963165), (uint8_t)GPR_U32(ctx, 5));
    // 0x1528d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1528D8u;
    {
        const bool branch_taken_0x1528d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1528DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1528D8u;
            // 0x1528dc: 0xa067efdc  sb          $a3, -0x1024($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294963164), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528d8) {
            ctx->pc = 0x152918u;
            goto label_152918;
        }
    }
    ctx->pc = 0x1528E0u;
label_1528e0:
    // 0x1528e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1528e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1528e4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528e8: 0xa064efdf  sb          $a0, -0x1021($v1)
    ctx->pc = 0x1528e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963167), (uint8_t)GPR_U32(ctx, 4));
    // 0x1528ec: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1528f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1528f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1528f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1528f8: 0xa460efe2  sh          $zero, -0x101E($v1)
    ctx->pc = 0x1528f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963170), (uint16_t)GPR_U32(ctx, 0));
    // 0x1528fc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152900: 0xa465efe4  sh          $a1, -0x101C($v1)
    ctx->pc = 0x152900u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963172), (uint16_t)GPR_U32(ctx, 5));
    // 0x152904: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152908: 0xa064efdd  sb          $a0, -0x1023($v1)
    ctx->pc = 0x152908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963165), (uint8_t)GPR_U32(ctx, 4));
    // 0x15290c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15290cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152910: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152914: 0xa064efdc  sb          $a0, -0x1024($v1)
    ctx->pc = 0x152914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963164), (uint8_t)GPR_U32(ctx, 4));
label_152918:
    // 0x152918: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x15291c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15291cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152920: 0xa080efe0  sb          $zero, -0x1020($a0)
    ctx->pc = 0x152920u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294963168), (uint8_t)GPR_U32(ctx, 0));
    // 0x152924: 0x3e00008  jr          $ra
    ctx->pc = 0x152924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152924u;
            // 0x152928: 0xa060efde  sb          $zero, -0x1022($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294963166), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15292Cu;
    // 0x15292c: 0x0  nop
    ctx->pc = 0x15292cu;
    // NOP
    ctx->pc = 0x152930u;
}
