#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205D60
// Address: 0x205d60 - 0x205ea0
void sub_00205D60_0x205d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205D60_0x205d60");
#endif

    ctx->pc = 0x205d60u;

    // 0x205d60: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205d64: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x205d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x205d68: 0x8c699bf8  lw          $t1, -0x6408($v1)
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205d6c: 0x91280500  lbu         $t0, 0x500($t1)
    ctx->pc = 0x205d6cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1280)));
    // 0x205d70: 0x14e80006  bne         $a3, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x205D70u;
    {
        const bool branch_taken_0x205d70 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x205D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205D70u;
            // 0x205d74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205d70) {
            ctx->pc = 0x205D8Cu;
            goto label_205d8c;
        }
    }
    ctx->pc = 0x205D78u;
    // 0x205d78: 0x91230501  lbu         $v1, 0x501($t1)
    ctx->pc = 0x205d78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1281)));
    // 0x205d7c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x205d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x205d80: 0x54c30003  bnel        $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x205D80u;
    {
        const bool branch_taken_0x205d80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x205d80) {
            ctx->pc = 0x205D84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205D80u;
            // 0x205d84: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205D90u;
            goto label_205d90;
        }
    }
    ctx->pc = 0x205D88u;
    // 0x205d88: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x205d88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_205d8c:
    // 0x205d8c: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_205d90:
    // 0x205d90: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x205D90u;
    {
        const bool branch_taken_0x205d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x205d90) {
            ctx->pc = 0x205DF0u;
            goto label_205df0;
        }
    }
    ctx->pc = 0x205D98u;
    // 0x205d98: 0xa12004fb  sb          $zero, 0x4FB($t1)
    ctx->pc = 0x205d98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1275), (uint8_t)GPR_U32(ctx, 0));
    // 0x205d9c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x205d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x205da0: 0x8c869bf8  lw          $a2, -0x6408($a0)
    ctx->pc = 0x205da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x205da4: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x205da8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205dac: 0xa0c704fd  sb          $a3, 0x4FD($a2)
    ctx->pc = 0x205dacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1277), (uint8_t)GPR_U32(ctx, 7));
    // 0x205db0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x205db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x205db4: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x205db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205db8: 0x90c30501  lbu         $v1, 0x501($a2)
    ctx->pc = 0x205db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1281)));
    // 0x205dbc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x205dbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x205dc0: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205DC0u;
    {
        const bool branch_taken_0x205dc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205dc0) {
            ctx->pc = 0x205DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205DC0u;
            // 0x205dc4: 0xa0c504fc  sb          $a1, 0x4FC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1276), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205DDCu;
            goto label_205ddc;
        }
    }
    ctx->pc = 0x205DC8u;
    // 0x205dc8: 0xa0c304fc  sb          $v1, 0x4FC($a2)
    ctx->pc = 0x205dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1276), (uint8_t)GPR_U32(ctx, 3));
    // 0x205dcc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205dd0: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205dd4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x205DD4u;
    {
        const bool branch_taken_0x205dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DD4u;
            // 0x205dd8: 0xa06504fe  sb          $a1, 0x4FE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1278), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205dd4) {
            ctx->pc = 0x205E94u;
            goto label_205e94;
        }
    }
    ctx->pc = 0x205DDCu;
label_205ddc:
    // 0x205ddc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205de0: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205de4: 0x90830501  lbu         $v1, 0x501($a0)
    ctx->pc = 0x205de4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1281)));
    // 0x205de8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x205DE8u;
    {
        const bool branch_taken_0x205de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205DE8u;
            // 0x205dec: 0xa08304fe  sb          $v1, 0x4FE($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1278), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205de8) {
            ctx->pc = 0x205E94u;
            goto label_205e94;
        }
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x5140000d  beql        $t2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x205DF0u;
    {
        const bool branch_taken_0x205df0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x205df0) {
            ctx->pc = 0x205DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205DF0u;
            // 0x205df4: 0x107082a  slt         $at, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x205E28u;
            goto label_205e28;
        }
    }
    ctx->pc = 0x205DF8u;
    // 0x205df8: 0xa12804fd  sb          $t0, 0x4FD($t1)
    ctx->pc = 0x205df8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1277), (uint8_t)GPR_U32(ctx, 8));
    // 0x205dfc: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e00: 0x8c659bf8  lw          $a1, -0x6408($v1)
    ctx->pc = 0x205e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e04: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x205e08: 0xa0a804fb  sb          $t0, 0x4FB($a1)
    ctx->pc = 0x205e08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1275), (uint8_t)GPR_U32(ctx, 8));
    // 0x205e0c: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e10: 0x8c859bf8  lw          $a1, -0x6408($a0)
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941688)));
    // 0x205e14: 0x90a40501  lbu         $a0, 0x501($a1)
    ctx->pc = 0x205e14u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1281)));
    // 0x205e18: 0xa0a404fe  sb          $a0, 0x4FE($a1)
    ctx->pc = 0x205e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1278), (uint8_t)GPR_U32(ctx, 4));
    // 0x205e1c: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x205E20u;
    {
        const bool branch_taken_0x205e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E20u;
            // 0x205e24: 0xa06404fc  sb          $a0, 0x4FC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1276), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e20) {
            ctx->pc = 0x205E94u;
            goto label_205e94;
        }
    }
    ctx->pc = 0x205E28u;
label_205e28:
    // 0x205e28: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205E28u;
    {
        const bool branch_taken_0x205e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e28) {
            ctx->pc = 0x205E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205E28u;
            // 0x205e2c: 0xa12404fb  sb          $a0, 0x4FB($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 1275), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205E44u;
            goto label_205e44;
        }
    }
    ctx->pc = 0x205E30u;
    // 0x205e30: 0xa12804fb  sb          $t0, 0x4FB($t1)
    ctx->pc = 0x205e30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1275), (uint8_t)GPR_U32(ctx, 8));
    // 0x205e34: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e38: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e3c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205E3Cu;
    {
        const bool branch_taken_0x205e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E3Cu;
            // 0x205e40: 0xa06404fd  sb          $a0, 0x4FD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1277), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e3c) {
            ctx->pc = 0x205E54u;
            goto label_205e54;
        }
    }
    ctx->pc = 0x205E44u;
label_205e44:
    // 0x205e44: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e48: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e4c: 0x90830500  lbu         $v1, 0x500($a0)
    ctx->pc = 0x205e4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x205e50: 0xa08304fd  sb          $v1, 0x4FD($a0)
    ctx->pc = 0x205e50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1277), (uint8_t)GPR_U32(ctx, 3));
label_205e54:
    // 0x205e54: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e58: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x205e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x205e5c: 0x8c669bf8  lw          $a2, -0x6408($v1)
    ctx->pc = 0x205e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e60: 0x90c30501  lbu         $v1, 0x501($a2)
    ctx->pc = 0x205e60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1281)));
    // 0x205e64: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x205e64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x205e68: 0x50200006  beql        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x205E68u;
    {
        const bool branch_taken_0x205e68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x205e68) {
            ctx->pc = 0x205E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205E68u;
            // 0x205e6c: 0xa0c504fc  sb          $a1, 0x4FC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1276), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x205E84u;
            goto label_205e84;
        }
    }
    ctx->pc = 0x205E70u;
    // 0x205e70: 0xa0c304fc  sb          $v1, 0x4FC($a2)
    ctx->pc = 0x205e70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1276), (uint8_t)GPR_U32(ctx, 3));
    // 0x205e74: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e78: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x205e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x205E7Cu;
    {
        const bool branch_taken_0x205e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x205E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205E7Cu;
            // 0x205e80: 0xa06504fe  sb          $a1, 0x4FE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1278), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205e7c) {
            ctx->pc = 0x205E94u;
            goto label_205e94;
        }
    }
    ctx->pc = 0x205E84u;
label_205e84:
    // 0x205e84: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x205e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x205e88: 0x8c649bf8  lw          $a0, -0x6408($v1)
    ctx->pc = 0x205e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x205e8c: 0x90830501  lbu         $v1, 0x501($a0)
    ctx->pc = 0x205e8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1281)));
    // 0x205e90: 0xa08304fe  sb          $v1, 0x4FE($a0)
    ctx->pc = 0x205e90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1278), (uint8_t)GPR_U32(ctx, 3));
label_205e94:
    // 0x205e94: 0x3e00008  jr          $ra
    ctx->pc = 0x205E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205E9Cu;
    // 0x205e9c: 0x0  nop
    ctx->pc = 0x205e9cu;
    // NOP
    ctx->pc = 0x205ea0u;
}
