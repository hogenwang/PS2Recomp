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

// Function: sub_002B6CB0
// Address: 0x2b6cb0 - 0x2b6df8
void sub_002B6CB0_0x2b6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6CB0_0x2b6cb0");
#endif

    switch (ctx->pc) {
        case 0x2b6cb0u: goto label_2b6cb0;
        case 0x2b6cb4u: goto label_2b6cb4;
        case 0x2b6cb8u: goto label_2b6cb8;
        case 0x2b6cbcu: goto label_2b6cbc;
        case 0x2b6cc0u: goto label_2b6cc0;
        case 0x2b6cc4u: goto label_2b6cc4;
        case 0x2b6cc8u: goto label_2b6cc8;
        case 0x2b6cccu: goto label_2b6ccc;
        case 0x2b6cd0u: goto label_2b6cd0;
        case 0x2b6cd4u: goto label_2b6cd4;
        case 0x2b6cd8u: goto label_2b6cd8;
        case 0x2b6cdcu: goto label_2b6cdc;
        case 0x2b6ce0u: goto label_2b6ce0;
        case 0x2b6ce4u: goto label_2b6ce4;
        case 0x2b6ce8u: goto label_2b6ce8;
        case 0x2b6cecu: goto label_2b6cec;
        case 0x2b6cf0u: goto label_2b6cf0;
        case 0x2b6cf4u: goto label_2b6cf4;
        case 0x2b6cf8u: goto label_2b6cf8;
        case 0x2b6cfcu: goto label_2b6cfc;
        case 0x2b6d00u: goto label_2b6d00;
        case 0x2b6d04u: goto label_2b6d04;
        case 0x2b6d08u: goto label_2b6d08;
        case 0x2b6d0cu: goto label_2b6d0c;
        case 0x2b6d10u: goto label_2b6d10;
        case 0x2b6d14u: goto label_2b6d14;
        case 0x2b6d18u: goto label_2b6d18;
        case 0x2b6d1cu: goto label_2b6d1c;
        case 0x2b6d20u: goto label_2b6d20;
        case 0x2b6d24u: goto label_2b6d24;
        case 0x2b6d28u: goto label_2b6d28;
        case 0x2b6d2cu: goto label_2b6d2c;
        case 0x2b6d30u: goto label_2b6d30;
        case 0x2b6d34u: goto label_2b6d34;
        case 0x2b6d38u: goto label_2b6d38;
        case 0x2b6d3cu: goto label_2b6d3c;
        case 0x2b6d40u: goto label_2b6d40;
        case 0x2b6d44u: goto label_2b6d44;
        case 0x2b6d48u: goto label_2b6d48;
        case 0x2b6d4cu: goto label_2b6d4c;
        case 0x2b6d50u: goto label_2b6d50;
        case 0x2b6d54u: goto label_2b6d54;
        case 0x2b6d58u: goto label_2b6d58;
        case 0x2b6d5cu: goto label_2b6d5c;
        case 0x2b6d60u: goto label_2b6d60;
        case 0x2b6d64u: goto label_2b6d64;
        case 0x2b6d68u: goto label_2b6d68;
        case 0x2b6d6cu: goto label_2b6d6c;
        case 0x2b6d70u: goto label_2b6d70;
        case 0x2b6d74u: goto label_2b6d74;
        case 0x2b6d78u: goto label_2b6d78;
        case 0x2b6d7cu: goto label_2b6d7c;
        case 0x2b6d80u: goto label_2b6d80;
        case 0x2b6d84u: goto label_2b6d84;
        case 0x2b6d88u: goto label_2b6d88;
        case 0x2b6d8cu: goto label_2b6d8c;
        case 0x2b6d90u: goto label_2b6d90;
        case 0x2b6d94u: goto label_2b6d94;
        case 0x2b6d98u: goto label_2b6d98;
        case 0x2b6d9cu: goto label_2b6d9c;
        case 0x2b6da0u: goto label_2b6da0;
        case 0x2b6da4u: goto label_2b6da4;
        case 0x2b6da8u: goto label_2b6da8;
        case 0x2b6dacu: goto label_2b6dac;
        case 0x2b6db0u: goto label_2b6db0;
        case 0x2b6db4u: goto label_2b6db4;
        case 0x2b6db8u: goto label_2b6db8;
        case 0x2b6dbcu: goto label_2b6dbc;
        case 0x2b6dc0u: goto label_2b6dc0;
        case 0x2b6dc4u: goto label_2b6dc4;
        case 0x2b6dc8u: goto label_2b6dc8;
        case 0x2b6dccu: goto label_2b6dcc;
        case 0x2b6dd0u: goto label_2b6dd0;
        case 0x2b6dd4u: goto label_2b6dd4;
        case 0x2b6dd8u: goto label_2b6dd8;
        case 0x2b6ddcu: goto label_2b6ddc;
        case 0x2b6de0u: goto label_2b6de0;
        case 0x2b6de4u: goto label_2b6de4;
        case 0x2b6de8u: goto label_2b6de8;
        case 0x2b6decu: goto label_2b6dec;
        case 0x2b6df0u: goto label_2b6df0;
        case 0x2b6df4u: goto label_2b6df4;
        default: break;
    }

    ctx->pc = 0x2b6cb0u;

label_2b6cb0:
    // 0x2b6cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b6cb4:
    // 0x2b6cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b6cb8:
    // 0x2b6cb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b6cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b6cbc:
    // 0x2b6cbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6cc0:
    // 0x2b6cc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b6cc4:
    // 0x2b6cc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b6cc8:
    // 0x2b6cc8: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x2b6cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2b6ccc:
    // 0x2b6ccc: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x2b6cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
label_2b6cd0:
    // 0x2b6cd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b6cd4:
    if (ctx->pc == 0x2B6CD4u) {
        ctx->pc = 0x2B6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD0u;
        // 0x2b6cd4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6CD8u;
        goto label_2b6cd8;
    }
    ctx->pc = 0x2B6CD0u;
    {
        const bool branch_taken_0x2b6cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD0u;
        // 0x2b6cd4: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cd0) {
            ctx->pc = 0x2B6CE0u;
            goto label_2b6ce0;
        }
    }
    ctx->pc = 0x2B6CD8u;
label_2b6cd8:
    // 0x2b6cd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b6cdc:
    if (ctx->pc == 0x2B6CDCu) {
        ctx->pc = 0x2B6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD8u;
        // 0x2b6cdc: 0x240311a0  addiu       $v1, $zero, 0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6CE0u;
        goto label_2b6ce0;
    }
    ctx->pc = 0x2B6CD8u;
    {
        const bool branch_taken_0x2b6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CD8u;
        // 0x2b6cdc: 0x240311a0  addiu       $v1, $zero, 0x11A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cd8) {
            ctx->pc = 0x2B6CE8u;
            goto label_2b6ce8;
        }
    }
    ctx->pc = 0x2B6CE0u;
label_2b6ce0:
    // 0x2b6ce0: 0x24120011  addiu       $s2, $zero, 0x11
    ctx->pc = 0x2b6ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2b6ce4:
    // 0x2b6ce4: 0x240311c0  addiu       $v1, $zero, 0x11C0
    ctx->pc = 0x2b6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4544));
label_2b6ce8:
    // 0x2b6ce8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2b6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2b6cec:
    // 0x2b6cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b6cf0:
    if (ctx->pc == 0x2B6CF0u) {
        ctx->pc = 0x2B6CF4u;
        goto label_2b6cf4;
    }
    ctx->pc = 0x2B6CECu;
    {
        const bool branch_taken_0x2b6cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cec) {
            ctx->pc = 0x2B6CFCu;
            goto label_2b6cfc;
        }
    }
    ctx->pc = 0x2B6CF4u;
label_2b6cf4:
    // 0x2b6cf4: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2b6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b6cf8:
    // 0x2b6cf8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x2b6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2b6cfc:
    // 0x2b6cfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b6d00:
    if (ctx->pc == 0x2B6D00u) {
        ctx->pc = 0x2B6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CFCu;
        // 0x2b6d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D04u;
        goto label_2b6d04;
    }
    ctx->pc = 0x2B6CFCu;
    {
        const bool branch_taken_0x2b6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CFCu;
        // 0x2b6d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cfc) {
            ctx->pc = 0x2B6D18u;
            goto label_2b6d18;
        }
    }
    ctx->pc = 0x2B6D04u;
label_2b6d04:
    // 0x2b6d04: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x2b6d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_2b6d08:
    // 0x2b6d08: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2b6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2b6d0c:
    // 0x2b6d0c: 0x40f809  jalr        $v0
label_2b6d10:
    if (ctx->pc == 0x2B6D10u) {
        ctx->pc = 0x2B6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D0Cu;
        // 0x2b6d10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D14u;
        goto label_2b6d14;
    }
    ctx->pc = 0x2B6D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6D14u);
        ctx->pc = 0x2B6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D0Cu;
        // 0x2b6d10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D0Cu, 0x2B6D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6D14u;
label_2b6d14:
    // 0x2b6d14: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x2b6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
label_2b6d18:
    // 0x2b6d18: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6d1c:
    // 0x2b6d1c: 0x8c620188  lw          $v0, 0x188($v1)
    ctx->pc = 0x2b6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
label_2b6d20:
    // 0x2b6d20: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_2b6d24:
    if (ctx->pc == 0x2B6D24u) {
        ctx->pc = 0x2B6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D20u;
        // 0x2b6d24: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D28u;
        goto label_2b6d28;
    }
    ctx->pc = 0x2B6D20u;
    {
        const bool branch_taken_0x2b6d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6d20) {
            ctx->pc = 0x2B6D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D20u;
            // 0x2b6d24: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D54u;
            goto label_2b6d54;
        }
    }
    ctx->pc = 0x2B6D28u;
label_2b6d28:
    // 0x2b6d28: 0x8c65015c  lw          $a1, 0x15C($v1)
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_2b6d2c:
    // 0x2b6d2c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2b6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2b6d30:
    // 0x2b6d30: 0xac4500ac  sw          $a1, 0xAC($v0)
    ctx->pc = 0x2b6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 5));
label_2b6d34:
    // 0x2b6d34: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b6d38:
    // 0x2b6d38: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b6d3c:
    // 0x2b6d3c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2b6d40:
    // 0x2b6d40: 0x40f809  jalr        $v0
label_2b6d44:
    if (ctx->pc == 0x2B6D44u) {
        ctx->pc = 0x2B6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D40u;
        // 0x2b6d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D48u;
        goto label_2b6d48;
    }
    ctx->pc = 0x2B6D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6D48u);
        ctx->pc = 0x2B6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D40u;
        // 0x2b6d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D40u, 0x2B6D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6D48u;
label_2b6d48:
    // 0x2b6d48: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_2b6d4c:
    if (ctx->pc == 0x2B6D4Cu) {
        ctx->pc = 0x2B6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D48u;
        // 0x2b6d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D50u;
        goto label_2b6d50;
    }
    ctx->pc = 0x2B6D48u;
    {
        const bool branch_taken_0x2b6d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D48u;
        // 0x2b6d4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d48) {
            ctx->pc = 0x2B6DDCu;
            goto label_2b6ddc;
        }
    }
    ctx->pc = 0x2B6D50u;
label_2b6d50:
    // 0x2b6d50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b6d54:
    // 0x2b6d54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b6d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6d58:
    // 0x2b6d58: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b6d5c:
    // 0x2b6d5c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2b6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2b6d60:
    // 0x2b6d60: 0x40f809  jalr        $v0
label_2b6d64:
    if (ctx->pc == 0x2B6D64u) {
        ctx->pc = 0x2B6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D60u;
        // 0x2b6d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D68u;
        goto label_2b6d68;
    }
    ctx->pc = 0x2B6D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6D68u);
        ctx->pc = 0x2B6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D60u;
        // 0x2b6d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D60u, 0x2B6D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6D68u;
label_2b6d68:
    // 0x2b6d68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2b6d6c:
    if (ctx->pc == 0x2B6D6Cu) {
        ctx->pc = 0x2B6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D68u;
        // 0x2b6d6c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D70u;
        goto label_2b6d70;
    }
    ctx->pc = 0x2B6D68u;
    {
        const bool branch_taken_0x2b6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6d68) {
            ctx->pc = 0x2B6D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6D68u;
            // 0x2b6d6c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6D78u;
            goto label_2b6d78;
        }
    }
    ctx->pc = 0x2B6D70u;
label_2b6d70:
    // 0x2b6d70: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2b6d74:
    if (ctx->pc == 0x2B6D74u) {
        ctx->pc = 0x2B6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D70u;
        // 0x2b6d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D78u;
        goto label_2b6d78;
    }
    ctx->pc = 0x2B6D70u;
    {
        const bool branch_taken_0x2b6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D70u;
        // 0x2b6d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d70) {
            ctx->pc = 0x2B6DDCu;
            goto label_2b6ddc;
        }
    }
    ctx->pc = 0x2B6D78u;
label_2b6d78:
    // 0x2b6d78: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b6d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2b6d7c:
    // 0x2b6d7c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b6d80:
    if (ctx->pc == 0x2B6D80u) {
        ctx->pc = 0x2B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D7Cu;
        // 0x2b6d80: 0x8e090054  lw          $t1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D84u;
        goto label_2b6d84;
    }
    ctx->pc = 0x2B6D7Cu;
    {
        const bool branch_taken_0x2b6d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D7Cu;
        // 0x2b6d80: 0x8e090054  lw          $t1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d7c) {
            ctx->pc = 0x2B6D9Cu;
            goto label_2b6d9c;
        }
    }
    ctx->pc = 0x2B6D84u;
label_2b6d84:
    // 0x2b6d84: 0xdd220000  ld          $v0, 0x0($t1)
    ctx->pc = 0x2b6d84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 0)));
label_2b6d88:
    // 0x2b6d88: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2b6d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2b6d8c:
    // 0x2b6d8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b6d90:
    if (ctx->pc == 0x2B6D90u) {
        ctx->pc = 0x2B6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D8Cu;
        // 0x2b6d90: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D94u;
        goto label_2b6d94;
    }
    ctx->pc = 0x2B6D8Cu;
    {
        const bool branch_taken_0x2b6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D8Cu;
        // 0x2b6d90: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d8c) {
            ctx->pc = 0x2B6DB0u;
            goto label_2b6db0;
        }
    }
    ctx->pc = 0x2B6D94u;
label_2b6d94:
    // 0x2b6d94: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b6d98:
    if (ctx->pc == 0x2B6D98u) {
        ctx->pc = 0x2B6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D94u;
        // 0x2b6d98: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6D9Cu;
        goto label_2b6d9c;
    }
    ctx->pc = 0x2B6D94u;
    {
        const bool branch_taken_0x2b6d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D94u;
        // 0x2b6d98: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d94) {
            ctx->pc = 0x2B6DA4u;
            goto label_2b6da4;
        }
    }
    ctx->pc = 0x2B6D9Cu;
label_2b6d9c:
    // 0x2b6d9c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2b6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b6da0:
    // 0x2b6da0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b6da4:
    // 0x2b6da4: 0x8c48004c  lw          $t0, 0x4C($v0)
    ctx->pc = 0x2b6da4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2b6da8:
    // 0x2b6da8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b6dac:
    if (ctx->pc == 0x2B6DACu) {
        ctx->pc = 0x2B6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DA8u;
        // 0x2b6dac: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DB0u;
        goto label_2b6db0;
    }
    ctx->pc = 0x2B6DA8u;
    {
        const bool branch_taken_0x2b6da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DA8u;
        // 0x2b6dac: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6da8) {
            ctx->pc = 0x2B6DBCu;
            goto label_2b6dbc;
        }
    }
    ctx->pc = 0x2B6DB0u;
label_2b6db0:
    // 0x2b6db0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2b6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b6db4:
    // 0x2b6db4: 0x8c480034  lw          $t0, 0x34($v0)
    ctx->pc = 0x2b6db4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2b6db8:
    // 0x2b6db8: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x2b6db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2b6dbc:
    // 0x2b6dbc: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2b6dc0:
    // 0x2b6dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6dc4:
    // 0x2b6dc4: 0x8d2500f8  lw          $a1, 0xF8($t1)
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 248)));
label_2b6dc8:
    // 0x2b6dc8: 0x8d2600fc  lw          $a2, 0xFC($t1)
    ctx->pc = 0x2b6dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 252)));
label_2b6dcc:
    // 0x2b6dcc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b6dd0:
    // 0x2b6dd0: 0x40f809  jalr        $v0
label_2b6dd4:
    if (ctx->pc == 0x2B6DD4u) {
        ctx->pc = 0x2B6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DD0u;
        // 0x2b6dd4: 0x25290128  addiu       $t1, $t1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DD8u;
        goto label_2b6dd8;
    }
    ctx->pc = 0x2B6DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6DD8u);
        ctx->pc = 0x2B6DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DD0u;
        // 0x2b6dd4: 0x25290128  addiu       $t1, $t1, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DD0u, 0x2B6DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6DD8u;
label_2b6dd8:
    // 0x2b6dd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b6dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b6ddc:
    // 0x2b6ddc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b6ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6de0:
    // 0x2b6de0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b6de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6de4:
    // 0x2b6de4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b6de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6de8:
    // 0x2b6de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6dec:
    // 0x2b6dec: 0x3e00008  jr          $ra
label_2b6df0:
    if (ctx->pc == 0x2B6DF0u) {
        ctx->pc = 0x2B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DECu;
        // 0x2b6df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6DF4u;
        goto label_2b6df4;
    }
    ctx->pc = 0x2B6DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DECu;
        // 0x2b6df0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DF4u;
label_2b6df4:
    // 0x2b6df4: 0x0  nop
    ctx->pc = 0x2b6df4u;
    // NOP
}
