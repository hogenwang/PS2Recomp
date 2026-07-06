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

// Function: sub_00232CE8
// Address: 0x232ce8 - 0x232de0
void sub_00232CE8_0x232ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232CE8_0x232ce8");
#endif

    switch (ctx->pc) {
        case 0x232ce8u: goto label_232ce8;
        case 0x232cecu: goto label_232cec;
        case 0x232cf0u: goto label_232cf0;
        case 0x232cf4u: goto label_232cf4;
        case 0x232cf8u: goto label_232cf8;
        case 0x232cfcu: goto label_232cfc;
        case 0x232d00u: goto label_232d00;
        case 0x232d04u: goto label_232d04;
        case 0x232d08u: goto label_232d08;
        case 0x232d0cu: goto label_232d0c;
        case 0x232d10u: goto label_232d10;
        case 0x232d14u: goto label_232d14;
        case 0x232d18u: goto label_232d18;
        case 0x232d1cu: goto label_232d1c;
        case 0x232d20u: goto label_232d20;
        case 0x232d24u: goto label_232d24;
        case 0x232d28u: goto label_232d28;
        case 0x232d2cu: goto label_232d2c;
        case 0x232d30u: goto label_232d30;
        case 0x232d34u: goto label_232d34;
        case 0x232d38u: goto label_232d38;
        case 0x232d3cu: goto label_232d3c;
        case 0x232d40u: goto label_232d40;
        case 0x232d44u: goto label_232d44;
        case 0x232d48u: goto label_232d48;
        case 0x232d4cu: goto label_232d4c;
        case 0x232d50u: goto label_232d50;
        case 0x232d54u: goto label_232d54;
        case 0x232d58u: goto label_232d58;
        case 0x232d5cu: goto label_232d5c;
        case 0x232d60u: goto label_232d60;
        case 0x232d64u: goto label_232d64;
        case 0x232d68u: goto label_232d68;
        case 0x232d6cu: goto label_232d6c;
        case 0x232d70u: goto label_232d70;
        case 0x232d74u: goto label_232d74;
        case 0x232d78u: goto label_232d78;
        case 0x232d7cu: goto label_232d7c;
        case 0x232d80u: goto label_232d80;
        case 0x232d84u: goto label_232d84;
        case 0x232d88u: goto label_232d88;
        case 0x232d8cu: goto label_232d8c;
        case 0x232d90u: goto label_232d90;
        case 0x232d94u: goto label_232d94;
        case 0x232d98u: goto label_232d98;
        case 0x232d9cu: goto label_232d9c;
        case 0x232da0u: goto label_232da0;
        case 0x232da4u: goto label_232da4;
        case 0x232da8u: goto label_232da8;
        case 0x232dacu: goto label_232dac;
        case 0x232db0u: goto label_232db0;
        case 0x232db4u: goto label_232db4;
        case 0x232db8u: goto label_232db8;
        case 0x232dbcu: goto label_232dbc;
        case 0x232dc0u: goto label_232dc0;
        case 0x232dc4u: goto label_232dc4;
        case 0x232dc8u: goto label_232dc8;
        case 0x232dccu: goto label_232dcc;
        case 0x232dd0u: goto label_232dd0;
        case 0x232dd4u: goto label_232dd4;
        case 0x232dd8u: goto label_232dd8;
        case 0x232ddcu: goto label_232ddc;
        default: break;
    }

    ctx->pc = 0x232ce8u;

label_232ce8:
    // 0x232ce8: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x232ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_232cec:
    // 0x232cec: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232cf0:
    // 0x232cf0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x232cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_232cf4:
    // 0x232cf4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_232cf8:
    // 0x232cf8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x232cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_232cfc:
    // 0x232cfc: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x232cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
label_232d00:
    // 0x232d00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x232d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_232d04:
    // 0x232d04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x232d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232d08:
    // 0x232d08: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x232d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_232d0c:
    // 0x232d0c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x232d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_232d10:
    // 0x232d10: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x232d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_232d14:
    // 0x232d14: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x232d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_232d18:
    // 0x232d18: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_232d1c:
    // 0x232d1c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_232d20:
    if (ctx->pc == 0x232D20u) {
        ctx->pc = 0x232D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D1Cu;
        // 0x232d20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D24u;
        goto label_232d24;
    }
    ctx->pc = 0x232D1Cu;
    {
        const bool branch_taken_0x232d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D1Cu;
        // 0x232d20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d1c) {
            ctx->pc = 0x232DC0u;
            goto label_232dc0;
        }
    }
    ctx->pc = 0x232D24u;
label_232d24:
    // 0x232d24: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x232d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_232d28:
    // 0x232d28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_232d2c:
    if (ctx->pc == 0x232D2Cu) {
        ctx->pc = 0x232D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D28u;
        // 0x232d2c: 0x8c720014  lw          $s2, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D30u;
        goto label_232d30;
    }
    ctx->pc = 0x232D28u;
    {
        const bool branch_taken_0x232d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D28u;
        // 0x232d2c: 0x8c720014  lw          $s2, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d28) {
            ctx->pc = 0x232D38u;
            goto label_232d38;
        }
    }
    ctx->pc = 0x232D30u;
label_232d30:
    // 0x232d30: 0x10000023  b           . + 4 + (0x23 << 2)
label_232d34:
    if (ctx->pc == 0x232D34u) {
        ctx->pc = 0x232D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D30u;
        // 0x232d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D38u;
        goto label_232d38;
    }
    ctx->pc = 0x232D30u;
    {
        const bool branch_taken_0x232d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D30u;
        // 0x232d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d30) {
            ctx->pc = 0x232DC0u;
            goto label_232dc0;
        }
    }
    ctx->pc = 0x232D38u;
label_232d38:
    // 0x232d38: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x232d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_232d3c:
    // 0x232d3c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x232d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_232d40:
    // 0x232d40: 0x2453acc8  addiu       $s3, $v0, -0x5338
    ctx->pc = 0x232d40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945992));
label_232d44:
    // 0x232d44: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x232d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_232d48:
    // 0x232d48: 0x8e460040  lw          $a2, 0x40($s2)
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_232d4c:
    // 0x232d4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x232d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_232d50:
    // 0x232d50: 0xc08c9b8  jal         func_2326E0
label_232d54:
    if (ctx->pc == 0x232D54u) {
        ctx->pc = 0x232D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D50u;
        // 0x232d54: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D58u;
        goto label_232d58;
    }
    ctx->pc = 0x232D50u;
    SET_GPR_U32(ctx, 31, 0x232D58u);
    ctx->pc = 0x232D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D50u;
    // 0x232d54: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2326E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326E0u, 0x232D50u, 0x232D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D58u;
label_232d58:
    // 0x232d58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232d5c:
    // 0x232d5c: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_232d60:
    if (ctx->pc == 0x232D60u) {
        ctx->pc = 0x232D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D5Cu;
        // 0x232d60: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D64u;
        goto label_232d64;
    }
    ctx->pc = 0x232D5Cu;
    {
        const bool branch_taken_0x232d5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x232D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D5Cu;
        // 0x232d60: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d5c) {
            ctx->pc = 0x232DC4u;
            goto label_232dc4;
        }
    }
    ctx->pc = 0x232D64u;
label_232d64:
    // 0x232d64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x232d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_232d68:
    // 0x232d68: 0xde430040  ld          $v1, 0x40($s2)
    ctx->pc = 0x232d68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_232d6c:
    // 0x232d6c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_232d70:
    // 0x232d70: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x232d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_232d74:
    // 0x232d74: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_232d78:
    if (ctx->pc == 0x232D78u) {
        ctx->pc = 0x232D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D74u;
        // 0x232d78: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D7Cu;
        goto label_232d7c;
    }
    ctx->pc = 0x232D74u;
    {
        const bool branch_taken_0x232d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D74u;
        // 0x232d78: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d74) {
            ctx->pc = 0x232DC4u;
            goto label_232dc4;
        }
    }
    ctx->pc = 0x232D7Cu;
label_232d7c:
    // 0x232d7c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x232d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_232d80:
    // 0x232d80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_232d84:
    if (ctx->pc == 0x232D84u) {
        ctx->pc = 0x232D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D80u;
        // 0x232d84: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D88u;
        goto label_232d88;
    }
    ctx->pc = 0x232D80u;
    {
        const bool branch_taken_0x232d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D80u;
        // 0x232d84: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d80) {
            ctx->pc = 0x232D8Cu;
            goto label_232d8c;
        }
    }
    ctx->pc = 0x232D88u;
label_232d88:
    // 0x232d88: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x232d88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_232d8c:
    // 0x232d8c: 0xc08c682  jal         func_231A08
label_232d90:
    if (ctx->pc == 0x232D90u) {
        ctx->pc = 0x232D94u;
        goto label_232d94;
    }
    ctx->pc = 0x232D8Cu;
    SET_GPR_U32(ctx, 31, 0x232D94u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x232D8Cu, 0x232D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D94u;
label_232d94:
    // 0x232d94: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x232d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_232d98:
    // 0x232d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232d9c:
    // 0x232d9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x232d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_232da0:
    // 0x232da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232da4:
    // 0x232da4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x232da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_232da8:
    // 0x232da8: 0x60f809  jalr        $v1
label_232dac:
    if (ctx->pc == 0x232DACu) {
        ctx->pc = 0x232DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DA8u;
        // 0x232dac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DB0u;
        goto label_232db0;
    }
    ctx->pc = 0x232DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x232DB0u);
        ctx->pc = 0x232DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DA8u;
        // 0x232dac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DA8u, 0x232DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232DB0u;
label_232db0:
    // 0x232db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232db4:
    // 0x232db4: 0xc08c698  jal         func_231A60
label_232db8:
    if (ctx->pc == 0x232DB8u) {
        ctx->pc = 0x232DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DB4u;
        // 0x232db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DBCu;
        goto label_232dbc;
    }
    ctx->pc = 0x232DB4u;
    SET_GPR_U32(ctx, 31, 0x232DBCu);
    ctx->pc = 0x232DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DB4u;
    // 0x232db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x232DB4u, 0x232DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DBCu;
label_232dbc:
    // 0x232dbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x232dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232dc0:
    // 0x232dc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x232dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_232dc4:
    // 0x232dc4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x232dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_232dc8:
    // 0x232dc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x232dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_232dcc:
    // 0x232dcc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x232dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232dd0:
    // 0x232dd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_232dd4:
    // 0x232dd4: 0x3e00008  jr          $ra
label_232dd8:
    if (ctx->pc == 0x232DD8u) {
        ctx->pc = 0x232DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD4u;
        // 0x232dd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232DDCu;
        goto label_232ddc;
    }
    ctx->pc = 0x232DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DD4u;
        // 0x232dd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232DDCu;
label_232ddc:
    // 0x232ddc: 0x0  nop
    ctx->pc = 0x232ddcu;
    // NOP
}
