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

// Function: sub_002F7C78
// Address: 0x2f7c78 - 0x2f7dc0
void sub_002F7C78_0x2f7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C78_0x2f7c78");
#endif

    switch (ctx->pc) {
        case 0x2f7cd4u: goto label_2f7cd4;
        case 0x2f7ce8u: goto label_2f7ce8;
        case 0x2f7d04u: goto label_2f7d04;
        case 0x2f7d24u: goto label_2f7d24;
        case 0x2f7d3cu: goto label_2f7d3c;
        case 0x2f7d44u: goto label_2f7d44;
        case 0x2f7d50u: goto label_2f7d50;
        case 0x2f7d9cu: goto label_2f7d9c;
        default: break;
    }

    ctx->pc = 0x2f7c78u;

    // 0x2f7c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f7c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f7c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7c80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f7c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f7c8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f7c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f7c90: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f7c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f7c94: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7C94u;
    {
        const bool branch_taken_0x2f7c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7c94) {
            ctx->pc = 0x2F7C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7C94u;
            // 0x2f7c98: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7CA8u;
            goto label_2f7ca8;
        }
    }
    ctx->pc = 0x2F7C9Cu;
    // 0x2f7c9c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F7C9Cu;
    {
        const bool branch_taken_0x2f7c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C9Cu;
        // 0x2f7ca0: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c9c) {
            ctx->pc = 0x2F7D70u;
            goto label_2f7d70;
        }
    }
    ctx->pc = 0x2F7CA4u;
    // 0x2f7ca4: 0x0  nop
    ctx->pc = 0x2f7ca4u;
    // NOP
label_2f7ca8:
    // 0x2f7ca8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f7ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7cac: 0xae050140  sw          $a1, 0x140($s0)
    ctx->pc = 0x2f7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 5));
    // 0x2f7cb0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f7cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2f7cb4: 0xae060144  sw          $a2, 0x144($s0)
    ctx->pc = 0x2f7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 6));
    // 0x2f7cb8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x2f7cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2f7cbc: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F7CBCu;
    {
        const bool branch_taken_0x2f7cbc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CBCu;
        // 0x2f7cc0: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cbc) {
            ctx->pc = 0x2F7CF8u;
            goto label_2f7cf8;
        }
    }
    ctx->pc = 0x2F7CC4u;
    // 0x2f7cc4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2f7cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cc8: 0xae070164  sw          $a3, 0x164($s0)
    ctx->pc = 0x2f7cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 7));
    // 0x2f7ccc: 0xc046278  jal         func_1189E0
    ctx->pc = 0x2F7CCCu;
    SET_GPR_U32(ctx, 31, 0x2F7CD4u);
    ctx->pc = 0x2F7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CCCu;
    // 0x2f7cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189E0u, 0x2F7CCCu, 0x2F7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CD4u;
label_2f7cd4:
    // 0x2f7cd4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2f7cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2f7cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7cdc: 0x24a57878  addiu       $a1, $a1, 0x7878
    ctx->pc = 0x2f7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30840));
    // 0x2f7ce0: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x2F7CE0u;
    SET_GPR_U32(ctx, 31, 0x2F7CE8u);
    ctx->pc = 0x2F7CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7CE0u;
    // 0x2f7ce4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x2F7CE0u, 0x2F7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7CE8u;
label_2f7ce8:
    // 0x2f7ce8: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7CE8u;
    {
        const bool branch_taken_0x2f7ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F7CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CE8u;
        // 0x2f7cec: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ce8) {
            ctx->pc = 0x2F7CFCu;
            goto label_2f7cfc;
        }
    }
    ctx->pc = 0x2F7CF0u;
    // 0x2f7cf0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F7CF0u;
    {
        const bool branch_taken_0x2f7cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7CF0u;
        // 0x2f7cf4: 0x2402fc17  addiu       $v0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7cf0) {
            ctx->pc = 0x2F7D80u;
            goto label_2f7d80;
        }
    }
    ctx->pc = 0x2F7CF8u;
label_2f7cf8:
    // 0x2f7cf8: 0xae07014c  sw          $a3, 0x14C($s0)
    ctx->pc = 0x2f7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 7));
label_2f7cfc:
    // 0x2f7cfc: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2F7CFCu;
    SET_GPR_U32(ctx, 31, 0x2F7D04u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2F7CFCu, 0x2F7D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D04u;
label_2f7d04:
    // 0x2f7d04: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2f7d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f7d08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f7d08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d14: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f7d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7d18: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f7d1c: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x2F7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2F7D24u);
    ctx->pc = 0x2F7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D1Cu;
    // 0x2f7d20: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x2F7D1Cu, 0x2F7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D24u;
label_2f7d24:
    // 0x2f7d24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f7d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7d2c: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F7D2Cu;
    {
        const bool branch_taken_0x2f7d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D2Cu;
        // 0x2f7d30: 0x2402fc17  addiu       $v0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d2c) {
            ctx->pc = 0x2F7D80u;
            goto label_2f7d80;
        }
    }
    ctx->pc = 0x2F7D34u;
    // 0x2f7d34: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F7D34u;
    SET_GPR_U32(ctx, 31, 0x2F7D3Cu);
    ctx->pc = 0x2F7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D34u;
    // 0x2f7d38: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2F7D34u, 0x2F7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D3Cu;
label_2f7d3c:
    // 0x2f7d3c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F7D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F7D44u);
    ctx->pc = 0x2F7D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D3Cu;
    // 0x2f7d40: 0x8e040154  lw          $a0, 0x154($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x2F7D3Cu, 0x2F7D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D44u;
label_2f7d44:
    // 0x2f7d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7d48: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x2F7D48u;
    SET_GPR_U32(ctx, 31, 0x2F7D50u);
    ctx->pc = 0x2F7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D48u;
    // 0x2f7d4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x2F7D48u, 0x2F7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D50u;
label_2f7d50:
    // 0x2f7d50: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2f7d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7d54: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2f7d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2f7d58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7D58u;
    {
        const bool branch_taken_0x2f7d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D58u;
        // 0x2f7d5c: 0x2402fc08  addiu       $v0, $zero, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d58) {
            ctx->pc = 0x2F7D80u;
            goto label_2f7d80;
        }
    }
    ctx->pc = 0x2F7D60u;
    // 0x2f7d60: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f7d64: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7D64u;
    {
        const bool branch_taken_0x2f7d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d64) {
            ctx->pc = 0x2F7D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7D64u;
            // 0x2f7d68: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7D8Cu;
            goto label_2f7d8c;
        }
    }
    ctx->pc = 0x2F7D6Cu;
    // 0x2f7d6c: 0x0  nop
    ctx->pc = 0x2f7d6cu;
    // NOP
label_2f7d70:
    // 0x2f7d70: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2f7d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2f7d74: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x2f7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x2f7d78: 0x2402fc0d  addiu       $v0, $zero, -0x3F3
    ctx->pc = 0x2f7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
    // 0x2f7d7c: 0x0  nop
    ctx->pc = 0x2f7d7cu;
    // NOP
label_2f7d80:
    // 0x2f7d80: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f7d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f7d84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7D84u;
    {
        const bool branch_taken_0x2f7d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7D84u;
        // 0x2f7d88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7d84) {
            ctx->pc = 0x2F7DA8u;
            goto label_2f7da8;
        }
    }
    ctx->pc = 0x2F7D8Cu;
label_2f7d8c:
    // 0x2f7d8c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7D8Cu;
    {
        const bool branch_taken_0x2f7d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7d8c) {
            ctx->pc = 0x2F7D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7D8Cu;
            // 0x2f7d90: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DA8u;
            goto label_2f7da8;
        }
    }
    ctx->pc = 0x2F7D94u;
    // 0x2f7d94: 0xc0bf12c  jal         func_2FC4B0
    ctx->pc = 0x2F7D94u;
    SET_GPR_U32(ctx, 31, 0x2F7D9Cu);
    ctx->pc = 0x2F7D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7D94u;
    // 0x2f7d98: 0x8e04013c  lw          $a0, 0x13C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC4B0u, 0x2F7D94u, 0x2F7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7D9Cu;
label_2f7d9c:
    // 0x2f7d9c: 0x2403fc13  addiu       $v1, $zero, -0x3ED
    ctx->pc = 0x2f7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
    // 0x2f7da0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2f7da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2f7da4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7da8:
    // 0x2f7da8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f7da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7dac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f7dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7db0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7db0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7DB8u;
        // 0x2f7dbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7DC0u;
}
