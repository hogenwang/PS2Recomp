#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A2D18
// Address: 0x2a2d18 - 0x2a2df0
void sub_002A2D18_0x2a2d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2D18_0x2a2d18");
#endif

    switch (ctx->pc) {
        case 0x2a2d18u: goto label_2a2d18;
        case 0x2a2d1cu: goto label_2a2d1c;
        case 0x2a2d20u: goto label_2a2d20;
        case 0x2a2d24u: goto label_2a2d24;
        case 0x2a2d28u: goto label_2a2d28;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d30u: goto label_2a2d30;
        case 0x2a2d34u: goto label_2a2d34;
        case 0x2a2d38u: goto label_2a2d38;
        case 0x2a2d3cu: goto label_2a2d3c;
        case 0x2a2d40u: goto label_2a2d40;
        case 0x2a2d44u: goto label_2a2d44;
        case 0x2a2d48u: goto label_2a2d48;
        case 0x2a2d4cu: goto label_2a2d4c;
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d54u: goto label_2a2d54;
        case 0x2a2d58u: goto label_2a2d58;
        case 0x2a2d5cu: goto label_2a2d5c;
        case 0x2a2d60u: goto label_2a2d60;
        case 0x2a2d64u: goto label_2a2d64;
        case 0x2a2d68u: goto label_2a2d68;
        case 0x2a2d6cu: goto label_2a2d6c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d74u: goto label_2a2d74;
        case 0x2a2d78u: goto label_2a2d78;
        case 0x2a2d7cu: goto label_2a2d7c;
        case 0x2a2d80u: goto label_2a2d80;
        case 0x2a2d84u: goto label_2a2d84;
        case 0x2a2d88u: goto label_2a2d88;
        case 0x2a2d8cu: goto label_2a2d8c;
        case 0x2a2d90u: goto label_2a2d90;
        case 0x2a2d94u: goto label_2a2d94;
        case 0x2a2d98u: goto label_2a2d98;
        case 0x2a2d9cu: goto label_2a2d9c;
        case 0x2a2da0u: goto label_2a2da0;
        case 0x2a2da4u: goto label_2a2da4;
        case 0x2a2da8u: goto label_2a2da8;
        case 0x2a2dacu: goto label_2a2dac;
        case 0x2a2db0u: goto label_2a2db0;
        case 0x2a2db4u: goto label_2a2db4;
        case 0x2a2db8u: goto label_2a2db8;
        case 0x2a2dbcu: goto label_2a2dbc;
        case 0x2a2dc0u: goto label_2a2dc0;
        case 0x2a2dc4u: goto label_2a2dc4;
        case 0x2a2dc8u: goto label_2a2dc8;
        case 0x2a2dccu: goto label_2a2dcc;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2dd4u: goto label_2a2dd4;
        case 0x2a2dd8u: goto label_2a2dd8;
        case 0x2a2ddcu: goto label_2a2ddc;
        case 0x2a2de0u: goto label_2a2de0;
        case 0x2a2de4u: goto label_2a2de4;
        case 0x2a2de8u: goto label_2a2de8;
        case 0x2a2decu: goto label_2a2dec;
        default: break;
    }

    ctx->pc = 0x2a2d18u;

label_2a2d18:
    // 0x2a2d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a2d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a2d1c:
    // 0x2a2d1c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a2d20:
    // 0x2a2d20: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2a2d24:
    // 0x2a2d24: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2a2d28:
    // 0x2a2d28: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a2d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d2c:
    // 0x2a2d2c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a2d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a2d30:
    // 0x2a2d30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a2d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d34:
    // 0x2a2d34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a2d38:
    // 0x2a2d38: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2a2d38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d3c:
    // 0x2a2d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2d40:
    // 0x2a2d40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a2d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d44:
    // 0x2a2d44: 0x8c42698c  lw          $v0, 0x698C($v0)
    ctx->pc = 0x2a2d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27020)));
label_2a2d48:
    // 0x2a2d48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a2d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d4c:
    // 0x2a2d4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a2d50:
    if (ctx->pc == 0x2A2D50u) {
        ctx->pc = 0x2A2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D4Cu;
        // 0x2a2d50: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D54u;
        goto label_2a2d54;
    }
    ctx->pc = 0x2A2D4Cu;
    {
        const bool branch_taken_0x2a2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D4Cu;
        // 0x2a2d50: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d4c) {
            ctx->pc = 0x2A2D64u;
            goto label_2a2d64;
        }
    }
    ctx->pc = 0x2A2D54u;
label_2a2d54:
    // 0x2a2d54: 0x40f809  jalr        $v0
label_2a2d58:
    if (ctx->pc == 0x2A2D58u) {
        ctx->pc = 0x2A2D5Cu;
        goto label_2a2d5c;
    }
    ctx->pc = 0x2A2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2D5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D54u, 0x2A2D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2D5Cu;
label_2a2d5c:
    // 0x2a2d5c: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a2d60:
    if (ctx->pc == 0x2A2D60u) {
        ctx->pc = 0x2A2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D5Cu;
        // 0x2a2d60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D64u;
        goto label_2a2d64;
    }
    ctx->pc = 0x2A2D5Cu;
    {
        const bool branch_taken_0x2a2d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D5Cu;
        // 0x2a2d60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d5c) {
            ctx->pc = 0x2A2DACu;
            goto label_2a2dac;
        }
    }
    ctx->pc = 0x2A2D64u;
label_2a2d64:
    // 0x2a2d64: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a2d68:
    // 0x2a2d68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d6c:
    // 0x2a2d6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d70:
    // 0x2a2d70: 0xc0a8b3a  jal         func_2A2CE8
label_2a2d74:
    if (ctx->pc == 0x2A2D74u) {
        ctx->pc = 0x2A2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D70u;
        // 0x2a2d74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D78u;
        goto label_2a2d78;
    }
    ctx->pc = 0x2A2D70u;
    SET_GPR_U32(ctx, 31, 0x2A2D78u);
    ctx->pc = 0x2A2D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D70u;
    // 0x2a2d74: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2A2D70u, 0x2A2D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D78u;
label_2a2d78:
    // 0x2a2d78: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2a2d7c:
    if (ctx->pc == 0x2A2D7Cu) {
        ctx->pc = 0x2A2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D78u;
        // 0x2a2d7c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D80u;
        goto label_2a2d80;
    }
    ctx->pc = 0x2A2D78u;
    {
        const bool branch_taken_0x2a2d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a2d78) {
            ctx->pc = 0x2A2D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2D78u;
            // 0x2a2d7c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2D88u;
            goto label_2a2d88;
        }
    }
    ctx->pc = 0x2A2D80u;
label_2a2d80:
    // 0x2a2d80: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a2d84:
    if (ctx->pc == 0x2A2D84u) {
        ctx->pc = 0x2A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D80u;
        // 0x2a2d84: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D88u;
        goto label_2a2d88;
    }
    ctx->pc = 0x2A2D80u;
    {
        const bool branch_taken_0x2a2d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D80u;
        // 0x2a2d84: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d80) {
            ctx->pc = 0x2A2DACu;
            goto label_2a2dac;
        }
    }
    ctx->pc = 0x2A2D88u;
label_2a2d88:
    // 0x2a2d88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a2d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d8c:
    // 0x2a2d8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d90:
    // 0x2a2d90: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a2d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d94:
    // 0x2a2d94: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2a2d98:
    // 0x2a2d98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a2d9c:
    // 0x2a2d9c: 0xc0a8b3a  jal         func_2A2CE8
label_2a2da0:
    if (ctx->pc == 0x2A2DA0u) {
        ctx->pc = 0x2A2DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D9Cu;
        // 0x2a2da0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DA4u;
        goto label_2a2da4;
    }
    ctx->pc = 0x2A2D9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2DA4u);
    ctx->pc = 0x2A2DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D9Cu;
    // 0x2a2da0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2CE8u, 0x2A2D9Cu, 0x2A2DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DA4u;
label_2a2da4:
    // 0x2a2da4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2da8:
    // 0x2a2da8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2a2da8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_2a2dac:
    // 0x2a2dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2db0:
    // 0x2a2db0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a2db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a2db4:
    // 0x2a2db4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a2db4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a2db8:
    // 0x2a2db8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a2db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a2dbc:
    // 0x2a2dbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2dc0:
    // 0x2a2dc0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2dc4:
    // 0x2a2dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2dc8:
    // 0x2a2dc8: 0x3e00008  jr          $ra
label_2a2dcc:
    if (ctx->pc == 0x2A2DCCu) {
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DD0u;
        goto label_2a2dd0;
    }
    ctx->pc = 0x2A2DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2dd4:
    // 0x2a2dd4: 0x3e00008  jr          $ra
label_2a2dd8:
    if (ctx->pc == 0x2A2DD8u) {
        ctx->pc = 0x2A2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DD4u;
        // 0x2a2dd8: 0x8c626990  lw          $v0, 0x6990($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DDCu;
        goto label_2a2ddc;
    }
    ctx->pc = 0x2A2DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DD4u;
        // 0x2a2dd8: 0x8c626990  lw          $v0, 0x6990($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27024)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2DDCu;
label_2a2ddc:
    // 0x2a2ddc: 0x0  nop
    ctx->pc = 0x2a2ddcu;
    // NOP
label_2a2de0:
    // 0x2a2de0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a2de4:
    // 0x2a2de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2de8:
    // 0x2a2de8: 0x3e00008  jr          $ra
label_2a2dec:
    if (ctx->pc == 0x2A2DECu) {
        ctx->pc = 0x2A2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DE8u;
        // 0x2a2dec: 0xac646990  sw          $a0, 0x6990($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DF0u;
        goto label_fallthrough_0x2a2de8;
    }
    ctx->pc = 0x2A2DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DE8u;
        // 0x2a2dec: 0xac646990  sw          $a0, 0x6990($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a2de8:
    ctx->pc = 0x2A2DF0u;
}
