#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00300C04
// Address: 0x300c04 - 0x300f30
void sub_00300C04_0x300c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300C04_0x300c04");
#endif

    switch (ctx->pc) {
        case 0x300c28u: goto label_300c28;
        case 0x300c80u: goto label_300c80;
        case 0x300cbcu: goto label_300cbc;
        case 0x300cd0u: goto label_300cd0;
        case 0x300d00u: goto label_300d00;
        case 0x300d2cu: goto label_300d2c;
        case 0x300d40u: goto label_300d40;
        case 0x300d68u: goto label_300d68;
        case 0x300d78u: goto label_300d78;
        case 0x300d98u: goto label_300d98;
        case 0x300db8u: goto label_300db8;
        case 0x300dd0u: goto label_300dd0;
        case 0x300de0u: goto label_300de0;
        case 0x300e00u: goto label_300e00;
        case 0x300e10u: goto label_300e10;
        case 0x300e18u: goto label_300e18;
        case 0x300e2cu: goto label_300e2c;
        case 0x300e44u: goto label_300e44;
        case 0x300e50u: goto label_300e50;
        case 0x300e60u: goto label_300e60;
        case 0x300e80u: goto label_300e80;
        case 0x300e9cu: goto label_300e9c;
        case 0x300eb0u: goto label_300eb0;
        case 0x300ec0u: goto label_300ec0;
        case 0x300eccu: goto label_300ecc;
        case 0x300ef4u: goto label_300ef4;
        case 0x300efcu: goto label_300efc;
        case 0x300f0cu: goto label_300f0c;
        case 0x300f20u: goto label_300f20;
        default: break;
    }

    ctx->pc = 0x300c04u;

    // 0x300c04: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300C04u;
    {
        const bool branch_taken_0x300c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300c04) {
            ctx->pc = 0x300C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300C04u;
            // 0x300c08: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300C30u;
            goto label_300c30;
        }
    }
    ctx->pc = 0x300C0Cu;
    // 0x300c0c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300c14: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300c18: 0x24a5da70  addiu       $a1, $a1, -0x2590
    ctx->pc = 0x300c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
    // 0x300c1c: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x300c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
    // 0x300c20: 0xc0bf834  jal         func_2FE0D0
    ctx->pc = 0x300C20u;
    SET_GPR_U32(ctx, 31, 0x300C28u);
    ctx->pc = 0x300C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C20u;
            // 0x300c24: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D0u;
    if (runtime->hasFunction(0x2FE0D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C28u; }
        if (ctx->pc != 0x300C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE0D0_0x2fe0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C28u; }
        if (ctx->pc != 0x300C28u) { return; }
    }
    ctx->pc = 0x300C28u;
label_300c28:
    // 0x300c28: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x300C28u;
    {
        const bool branch_taken_0x300c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C28u;
            // 0x300c2c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c28) {
            ctx->pc = 0x300D30u;
            goto label_300d30;
        }
    }
    ctx->pc = 0x300C30u;
label_300c30:
    // 0x300c30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x300c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x300c34: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x300C34u;
    {
        const bool branch_taken_0x300c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300c34) {
            ctx->pc = 0x300CD8u;
            goto label_300cd8;
        }
    }
    ctx->pc = 0x300C3Cu;
    // 0x300c3c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x300C3Cu;
    {
        const bool branch_taken_0x300c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c3c) {
            ctx->pc = 0x300C90u;
            goto label_300c90;
        }
    }
    ctx->pc = 0x300C44u;
    // 0x300c44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x300c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300c48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300C48u;
    {
        const bool branch_taken_0x300c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300c48) {
            ctx->pc = 0x300C58u;
            goto label_300c58;
        }
    }
    ctx->pc = 0x300C50u;
    // 0x300c50: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x300C50u;
    {
        const bool branch_taken_0x300c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300C50u;
            // 0x300c54: 0x3c050030  lui         $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c50) {
            ctx->pc = 0x300D20u;
            goto label_300d20;
        }
    }
    ctx->pc = 0x300C58u;
label_300c58:
    // 0x300c58: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300c5c: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x300c5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x300c60: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x300C60u;
    {
        const bool branch_taken_0x300c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c60) {
            ctx->pc = 0x300C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300C60u;
            // 0x300c64: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300C88u;
            goto label_300c88;
        }
    }
    ctx->pc = 0x300C68u;
    // 0x300c68: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300c6c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300c70: 0x24a50bb0  addiu       $a1, $a1, 0xBB0
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2992));
    // 0x300c74: 0x24c6da70  addiu       $a2, $a2, -0x2590
    ctx->pc = 0x300c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957680));
    // 0x300c78: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300C78u;
    SET_GPR_U32(ctx, 31, 0x300C80u);
    ctx->pc = 0x300C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300C78u;
            // 0x300c7c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C80u; }
        if (ctx->pc != 0x300C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300C80u; }
        if (ctx->pc != 0x300C80u) { return; }
    }
    ctx->pc = 0x300C80u;
label_300c80:
    // 0x300c80: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x300C80u;
    {
        const bool branch_taken_0x300c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300c80) {
            ctx->pc = 0x300D2Cu;
            goto label_300d2c;
        }
    }
    ctx->pc = 0x300C88u;
label_300c88:
    // 0x300c88: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300c8c: 0xa0430c20  sb          $v1, 0xC20($v0)
    ctx->pc = 0x300c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
label_300c90:
    // 0x300c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x300c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x300c94: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x300C94u;
    {
        const bool branch_taken_0x300c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300c94) {
            ctx->pc = 0x300CC4u;
            goto label_300cc4;
        }
    }
    ctx->pc = 0x300C9Cu;
    // 0x300c9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x300ca0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x300ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x300ca4: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x300CA4u;
    {
        const bool branch_taken_0x300ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300ca4) {
            ctx->pc = 0x300CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300CA4u;
            // 0x300ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300BD8u;
            return;
        }
    }
    ctx->pc = 0x300CACu;
    // 0x300cac: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300cb0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x300cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x300cb4: 0xc0c0238  jal         func_3008E0
    ctx->pc = 0x300CB4u;
    SET_GPR_U32(ctx, 31, 0x300CBCu);
    ctx->pc = 0x300CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CB4u;
            // 0x300cb8: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3008E0u;
    if (runtime->hasFunction(0x3008E0u)) {
        auto targetFn = runtime->lookupFunction(0x3008E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CBCu; }
        if (ctx->pc != 0x300CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003008E0_0x3008e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CBCu; }
        if (ctx->pc != 0x300CBCu) { return; }
    }
    ctx->pc = 0x300CBCu;
label_300cbc:
    // 0x300cbc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x300CBCu;
    {
        const bool branch_taken_0x300cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300cbc) {
            ctx->pc = 0x300D2Cu;
            goto label_300d2c;
        }
    }
    ctx->pc = 0x300CC4u;
label_300cc4:
    // 0x300cc4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x300cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x300cc8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x300CC8u;
    SET_GPR_U32(ctx, 31, 0x300CD0u);
    ctx->pc = 0x300CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CC8u;
            // 0x300ccc: 0x24840d40  addiu       $a0, $a0, 0xD40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CD0u; }
        if (ctx->pc != 0x300CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CD0u; }
        if (ctx->pc != 0x300CD0u) { return; }
    }
    ctx->pc = 0x300CD0u;
label_300cd0:
    // 0x300cd0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x300CD0u;
    {
        const bool branch_taken_0x300cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300cd0) {
            ctx->pc = 0x300D2Cu;
            goto label_300d2c;
        }
    }
    ctx->pc = 0x300CD8u;
label_300cd8:
    // 0x300cd8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300cdc: 0x90420c20  lbu         $v0, 0xC20($v0)
    ctx->pc = 0x300cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x300ce0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x300CE0u;
    {
        const bool branch_taken_0x300ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300ce0) {
            ctx->pc = 0x300CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300CE0u;
            // 0x300ce4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300D08u;
            goto label_300d08;
        }
    }
    ctx->pc = 0x300CE8u;
    // 0x300ce8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300cec: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x300cecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x300cf0: 0x24a50bb0  addiu       $a1, $a1, 0xBB0
    ctx->pc = 0x300cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2992));
    // 0x300cf4: 0x24c6da70  addiu       $a2, $a2, -0x2590
    ctx->pc = 0x300cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957680));
    // 0x300cf8: 0xc0bf86c  jal         func_2FE1B0
    ctx->pc = 0x300CF8u;
    SET_GPR_U32(ctx, 31, 0x300D00u);
    ctx->pc = 0x300CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300CF8u;
            // 0x300cfc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1B0u;
    if (runtime->hasFunction(0x2FE1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D00u; }
        if (ctx->pc != 0x300D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE1B0_0x2fe1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D00u; }
        if (ctx->pc != 0x300D00u) { return; }
    }
    ctx->pc = 0x300D00u;
label_300d00:
    // 0x300d00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x300D00u;
    {
        const bool branch_taken_0x300d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d00) {
            ctx->pc = 0x300D18u;
            goto label_300d18;
        }
    }
    ctx->pc = 0x300D08u;
label_300d08:
    // 0x300d08: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x300d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x300d0c: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x300D0Cu;
    {
        const bool branch_taken_0x300d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300D0Cu;
            // 0x300d10: 0xa0430c20  sb          $v1, 0xC20($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 3104), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d0c) {
            ctx->pc = 0x300BD4u;
            return;
        }
    }
    ctx->pc = 0x300D14u;
    // 0x300d14: 0x0  nop
    ctx->pc = 0x300d14u;
    // NOP
label_300d18:
    // 0x300d18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300D18u;
    {
        const bool branch_taken_0x300d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d18) {
            ctx->pc = 0x300D2Cu;
            goto label_300d2c;
        }
    }
    ctx->pc = 0x300D20u;
label_300d20:
    // 0x300d20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x300d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x300d24: 0xc0c0238  jal         func_3008E0
    ctx->pc = 0x300D24u;
    SET_GPR_U32(ctx, 31, 0x300D2Cu);
    ctx->pc = 0x300D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D24u;
            // 0x300d28: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3008E0u;
    if (runtime->hasFunction(0x3008E0u)) {
        auto targetFn = runtime->lookupFunction(0x3008E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D2Cu; }
        if (ctx->pc != 0x300D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003008E0_0x3008e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D2Cu; }
        if (ctx->pc != 0x300D2Cu) { return; }
    }
    ctx->pc = 0x300D2Cu;
label_300d2c:
    // 0x300d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_300d30:
    // 0x300d30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300d34: 0x3e00008  jr          $ra
    ctx->pc = 0x300D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300D34u;
            // 0x300d38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300D3Cu;
    // 0x300d3c: 0x0  nop
    ctx->pc = 0x300d3cu;
    // NOP
label_300d40:
    // 0x300d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300d44: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x300d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x300d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300d4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d54: 0x24c631a0  addiu       $a2, $a2, 0x31A0
    ctx->pc = 0x300d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12704));
    // 0x300d58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d5c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x300d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x300d60: 0xc047c0a  jal         func_11F028
    ctx->pc = 0x300D60u;
    SET_GPR_U32(ctx, 31, 0x300D68u);
    ctx->pc = 0x300D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D60u;
            // 0x300d64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F028u;
    if (runtime->hasFunction(0x11F028u)) {
        auto targetFn = runtime->lookupFunction(0x11F028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D68u; }
        if (ctx->pc != 0x300D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F028_0x11f028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D68u; }
        if (ctx->pc != 0x300D68u) { return; }
    }
    ctx->pc = 0x300D68u;
label_300d68:
    // 0x300d68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d70: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300D70u;
    SET_GPR_U32(ctx, 31, 0x300D78u);
    ctx->pc = 0x300D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D70u;
            // 0x300d74: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D78u; }
        if (ctx->pc != 0x300D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D78u; }
        if (ctx->pc != 0x300D78u) { return; }
    }
    ctx->pc = 0x300D78u;
label_300d78:
    // 0x300d78: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x300d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x300d7c: 0x2841fff6  slti        $at, $v0, -0xA
    ctx->pc = 0x300d7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x300d80: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x300D80u;
    {
        const bool branch_taken_0x300d80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d80) {
            ctx->pc = 0x300DA0u;
            goto label_300da0;
        }
    }
    ctx->pc = 0x300D88u;
    // 0x300d88: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300d8c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x300d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x300d90: 0xc0c0238  jal         func_3008E0
    ctx->pc = 0x300D90u;
    SET_GPR_U32(ctx, 31, 0x300D98u);
    ctx->pc = 0x300D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300D90u;
            // 0x300d94: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3008E0u;
    if (runtime->hasFunction(0x3008E0u)) {
        auto targetFn = runtime->lookupFunction(0x3008E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D98u; }
        if (ctx->pc != 0x300D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003008E0_0x3008e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D98u; }
        if (ctx->pc != 0x300D98u) { return; }
    }
    ctx->pc = 0x300D98u;
label_300d98:
    // 0x300d98: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x300D98u;
    {
        const bool branch_taken_0x300d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300D98u;
            // 0x300d9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d98) {
            ctx->pc = 0x300DD4u;
            goto label_300dd4;
        }
    }
    ctx->pc = 0x300DA0u;
label_300da0:
    // 0x300da0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300DA0u;
    {
        const bool branch_taken_0x300da0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300da0) {
            ctx->pc = 0x300DC0u;
            goto label_300dc0;
        }
    }
    ctx->pc = 0x300DA8u;
    // 0x300da8: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300dac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x300dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x300db0: 0xc0c0238  jal         func_3008E0
    ctx->pc = 0x300DB0u;
    SET_GPR_U32(ctx, 31, 0x300DB8u);
    ctx->pc = 0x300DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DB0u;
            // 0x300db4: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3008E0u;
    if (runtime->hasFunction(0x3008E0u)) {
        auto targetFn = runtime->lookupFunction(0x3008E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DB8u; }
        if (ctx->pc != 0x300DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003008E0_0x3008e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DB8u; }
        if (ctx->pc != 0x300DB8u) { return; }
    }
    ctx->pc = 0x300DB8u;
label_300db8:
    // 0x300db8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x300DB8u;
    {
        const bool branch_taken_0x300db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300db8) {
            ctx->pc = 0x300DD0u;
            goto label_300dd0;
        }
    }
    ctx->pc = 0x300DC0u;
label_300dc0:
    // 0x300dc0: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300dc4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x300dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x300dc8: 0xc0c0258  jal         func_300960
    ctx->pc = 0x300DC8u;
    SET_GPR_U32(ctx, 31, 0x300DD0u);
    ctx->pc = 0x300DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DC8u;
            // 0x300dcc: 0x24a50de0  addiu       $a1, $a1, 0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x300960u;
    if (runtime->hasFunction(0x300960u)) {
        auto targetFn = runtime->lookupFunction(0x300960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DD0u; }
        if (ctx->pc != 0x300DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00300960_0x300960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DD0u; }
        if (ctx->pc != 0x300DD0u) { return; }
    }
    ctx->pc = 0x300DD0u;
label_300dd0:
    // 0x300dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300dd4:
    // 0x300dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x300DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300DD4u;
            // 0x300dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300DDCu;
    // 0x300ddc: 0x0  nop
    ctx->pc = 0x300ddcu;
    // NOP
label_300de0:
    // 0x300de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300de4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300df4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x300df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300df8: 0xc047b8e  jal         func_11EE38
    ctx->pc = 0x300DF8u;
    SET_GPR_U32(ctx, 31, 0x300E00u);
    ctx->pc = 0x300DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300DF8u;
            // 0x300dfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EE38u;
    if (runtime->hasFunction(0x11EE38u)) {
        auto targetFn = runtime->lookupFunction(0x11EE38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E00u; }
        if (ctx->pc != 0x300E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EE38_0x11ee38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E00u; }
        if (ctx->pc != 0x300E00u) { return; }
    }
    ctx->pc = 0x300E00u;
label_300e00:
    // 0x300e00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300e08: 0xc047b46  jal         func_11ED18
    ctx->pc = 0x300E08u;
    SET_GPR_U32(ctx, 31, 0x300E10u);
    ctx->pc = 0x300E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E08u;
            // 0x300e0c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11ED18u;
    if (runtime->hasFunction(0x11ED18u)) {
        auto targetFn = runtime->lookupFunction(0x11ED18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E10u; }
        if (ctx->pc != 0x300E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011ED18_0x11ed18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E10u; }
        if (ctx->pc != 0x300E10u) { return; }
    }
    ctx->pc = 0x300E10u;
label_300e10:
    // 0x300e10: 0xc0c0298  jal         func_300A60
    ctx->pc = 0x300E10u;
    SET_GPR_U32(ctx, 31, 0x300E18u);
    ctx->pc = 0x300A60u;
    if (runtime->hasFunction(0x300A60u)) {
        auto targetFn = runtime->lookupFunction(0x300A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E18u; }
        if (ctx->pc != 0x300E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00300A60_0x300a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E18u; }
        if (ctx->pc != 0x300E18u) { return; }
    }
    ctx->pc = 0x300E18u;
label_300e18:
    // 0x300e18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300E18u;
    {
        const bool branch_taken_0x300e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300e18) {
            ctx->pc = 0x300E34u;
            goto label_300e34;
        }
    }
    ctx->pc = 0x300E20u;
    // 0x300e20: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x300e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x300e24: 0xc0c0278  jal         func_3009E0
    ctx->pc = 0x300E24u;
    SET_GPR_U32(ctx, 31, 0x300E2Cu);
    ctx->pc = 0x300E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E24u;
            // 0x300e28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3009E0u;
    if (runtime->hasFunction(0x3009E0u)) {
        auto targetFn = runtime->lookupFunction(0x3009E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E2Cu; }
        if (ctx->pc != 0x300E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003009E0_0x3009e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E2Cu; }
        if (ctx->pc != 0x300E2Cu) { return; }
    }
    ctx->pc = 0x300E2Cu;
label_300e2c:
    // 0x300e2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x300E2Cu;
    {
        const bool branch_taken_0x300e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E2Cu;
            // 0x300e30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e2c) {
            ctx->pc = 0x300E48u;
            goto label_300e48;
        }
    }
    ctx->pc = 0x300E34u;
label_300e34:
    // 0x300e34: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x300e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x300e38: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x300e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x300e3c: 0xc0c0238  jal         func_3008E0
    ctx->pc = 0x300E3Cu;
    SET_GPR_U32(ctx, 31, 0x300E44u);
    ctx->pc = 0x300E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E3Cu;
            // 0x300e40: 0x24a5da70  addiu       $a1, $a1, -0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3008E0u;
    if (runtime->hasFunction(0x3008E0u)) {
        auto targetFn = runtime->lookupFunction(0x3008E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E44u; }
        if (ctx->pc != 0x300E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003008E0_0x3008e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E44u; }
        if (ctx->pc != 0x300E44u) { return; }
    }
    ctx->pc = 0x300E44u;
label_300e44:
    // 0x300e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300e48:
    // 0x300e48: 0x3e00008  jr          $ra
    ctx->pc = 0x300E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E48u;
            // 0x300e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300E50u;
label_300e50:
    // 0x300e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x300e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300e58: 0xc069184  jal         func_1A4610
    ctx->pc = 0x300E58u;
    SET_GPR_U32(ctx, 31, 0x300E60u);
    ctx->pc = 0x300E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E58u;
            // 0x300e5c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (runtime->hasFunction(0x1A4610u)) {
        auto targetFn = runtime->lookupFunction(0x1A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E60u; }
        if (ctx->pc != 0x300E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4610_0x1a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E60u; }
        if (ctx->pc != 0x300E60u) { return; }
    }
    ctx->pc = 0x300E60u;
label_300e60:
    // 0x300e60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x300e64: 0x8c4297b0  lw          $v0, -0x6850($v0)
    ctx->pc = 0x300e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940592)));
    // 0x300e68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300E68u;
    {
        const bool branch_taken_0x300e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300e68) {
            ctx->pc = 0x300E88u;
            goto label_300e88;
        }
    }
    ctx->pc = 0x300E70u;
    // 0x300e70: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x300e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x300e74: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x300e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x300e78: 0xc0bf854  jal         func_2FE150
    ctx->pc = 0x300E78u;
    SET_GPR_U32(ctx, 31, 0x300E80u);
    ctx->pc = 0x300E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E78u;
            // 0x300e7c: 0x24a5fba0  addiu       $a1, $a1, -0x460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE150u;
    if (runtime->hasFunction(0x2FE150u)) {
        auto targetFn = runtime->lookupFunction(0x2FE150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E80u; }
        if (ctx->pc != 0x300E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE150_0x2fe150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E80u; }
        if (ctx->pc != 0x300E80u) { return; }
    }
    ctx->pc = 0x300E80u;
label_300e80:
    // 0x300e80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x300E80u;
    {
        const bool branch_taken_0x300e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300E80u;
            // 0x300e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300e80) {
            ctx->pc = 0x300EA0u;
            goto label_300ea0;
        }
    }
    ctx->pc = 0x300E88u;
label_300e88:
    // 0x300e88: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x300e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x300e8c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x300e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x300e90: 0x24c6fba0  addiu       $a2, $a2, -0x460
    ctx->pc = 0x300e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966176));
    // 0x300e94: 0xc0bf89c  jal         func_2FE270
    ctx->pc = 0x300E94u;
    SET_GPR_U32(ctx, 31, 0x300E9Cu);
    ctx->pc = 0x300E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300E94u;
            // 0x300e98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE270u;
    if (runtime->hasFunction(0x2FE270u)) {
        auto targetFn = runtime->lookupFunction(0x2FE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E9Cu; }
        if (ctx->pc != 0x300E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE270_0x2fe270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E9Cu; }
        if (ctx->pc != 0x300E9Cu) { return; }
    }
    ctx->pc = 0x300E9Cu;
label_300e9c:
    // 0x300e9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_300ea0:
    // 0x300ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x300EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300EA0u;
            // 0x300ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300EA8u;
    // 0x300ea8: 0x0  nop
    ctx->pc = 0x300ea8u;
    // NOP
    // 0x300eac: 0x0  nop
    ctx->pc = 0x300eacu;
    // NOP
label_300eb0:
    // 0x300eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x300eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300eb8: 0xc0c03cc  jal         func_300F30
    ctx->pc = 0x300EB8u;
    SET_GPR_U32(ctx, 31, 0x300EC0u);
    ctx->pc = 0x300F30u;
    if (runtime->hasFunction(0x300F30u)) {
        auto targetFn = runtime->lookupFunction(0x300F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EC0u; }
        if (ctx->pc != 0x300EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00300F30_0x300f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EC0u; }
        if (ctx->pc != 0x300EC0u) { return; }
    }
    ctx->pc = 0x300EC0u;
label_300ec0:
    // 0x300ec0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x300ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x300ec4: 0xc055684  jal         func_155A10
    ctx->pc = 0x300EC4u;
    SET_GPR_U32(ctx, 31, 0x300ECCu);
    ctx->pc = 0x300EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EC4u;
            // 0x300ec8: 0xa0409738  sb          $zero, -0x68C8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ECCu; }
        if (ctx->pc != 0x300ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300ECCu; }
        if (ctx->pc != 0x300ECCu) { return; }
    }
    ctx->pc = 0x300ECCu;
label_300ecc:
    // 0x300ecc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300ed0: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x300ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x300ed4: 0xac40beb0  sw          $zero, -0x4150($v0)
    ctx->pc = 0x300ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950576), GPR_U32(ctx, 0));
    // 0x300ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300edc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300ee0: 0xac60beb4  sw          $zero, -0x414C($v1)
    ctx->pc = 0x300ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950580), GPR_U32(ctx, 0));
    // 0x300ee4: 0xac40beb8  sw          $zero, -0x4148($v0)
    ctx->pc = 0x300ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950584), GPR_U32(ctx, 0));
    // 0x300ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300eec: 0xc0c79fc  jal         func_31E7F0
    ctx->pc = 0x300EECu;
    SET_GPR_U32(ctx, 31, 0x300EF4u);
    ctx->pc = 0x300EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EECu;
            // 0x300ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (runtime->hasFunction(0x31E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x31E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF4u; }
        if (ctx->pc != 0x300EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E7F0_0x31e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EF4u; }
        if (ctx->pc != 0x300EF4u) { return; }
    }
    ctx->pc = 0x300EF4u;
label_300ef4:
    // 0x300ef4: 0xc069184  jal         func_1A4610
    ctx->pc = 0x300EF4u;
    SET_GPR_U32(ctx, 31, 0x300EFCu);
    ctx->pc = 0x300EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300EF4u;
            // 0x300ef8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4610u;
    if (runtime->hasFunction(0x1A4610u)) {
        auto targetFn = runtime->lookupFunction(0x1A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EFCu; }
        if (ctx->pc != 0x300EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4610_0x1a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EFCu; }
        if (ctx->pc != 0x300EFCu) { return; }
    }
    ctx->pc = 0x300EFCu;
label_300efc:
    // 0x300efc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x300efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x300f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300f04: 0xc082678  jal         func_2099E0
    ctx->pc = 0x300F04u;
    SET_GPR_U32(ctx, 31, 0x300F0Cu);
    ctx->pc = 0x300F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300F04u;
            // 0x300f08: 0x248433f0  addiu       $a0, $a0, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (runtime->hasFunction(0x2099E0u)) {
        auto targetFn = runtime->lookupFunction(0x2099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F0Cu; }
        if (ctx->pc != 0x300F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099E0_0x2099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F0Cu; }
        if (ctx->pc != 0x300F0Cu) { return; }
    }
    ctx->pc = 0x300F0Cu;
label_300f0c:
    // 0x300f0c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x300f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x300f10: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x300f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x300f14: 0x24c641f0  addiu       $a2, $a2, 0x41F0
    ctx->pc = 0x300f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16880));
    // 0x300f18: 0xc0bf8f4  jal         func_2FE3D0
    ctx->pc = 0x300F18u;
    SET_GPR_U32(ctx, 31, 0x300F20u);
    ctx->pc = 0x300F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300F18u;
            // 0x300f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FE3D0u;
    if (runtime->hasFunction(0x2FE3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2FE3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F20u; }
        if (ctx->pc != 0x300F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FE3D0_0x2fe3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F20u; }
        if (ctx->pc != 0x300F20u) { return; }
    }
    ctx->pc = 0x300F20u;
label_300f20:
    // 0x300f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300f24: 0x3e00008  jr          $ra
    ctx->pc = 0x300F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x300F24u;
            // 0x300f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x300F2Cu;
    // 0x300f2c: 0x0  nop
    ctx->pc = 0x300f2cu;
    // NOP
    ctx->pc = 0x300f30u;
}
