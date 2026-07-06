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

// Function: sub_00155CA0
// Address: 0x155ca0 - 0x155da0
void sub_00155CA0_0x155ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155CA0_0x155ca0");
#endif

    switch (ctx->pc) {
        case 0x155d04u: goto label_155d04;
        case 0x155d6cu: goto label_155d6c;
        case 0x155d7cu: goto label_155d7c;
        default: break;
    }

    ctx->pc = 0x155ca0u;

    // 0x155ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x155ca4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155ca8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x155ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x155cac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x155cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x155cb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x155cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x155cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x155cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x155cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x155cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155cc0: 0x84830020  lh          $v1, 0x20($a0)
    ctx->pc = 0x155cc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x155cc4: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x155CC4u;
    {
        const bool branch_taken_0x155cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x155CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CC4u;
        // 0x155cc8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cc4) {
            ctx->pc = 0x155D74u;
            goto label_155d74;
        }
    }
    ctx->pc = 0x155CCCu;
    // 0x155ccc: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x155cd0: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x155cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x155cd4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x155cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x155cd8: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x155cdc: 0x2442ffd4  addiu       $v0, $v0, -0x2C
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967252));
    // 0x155ce0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x155ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x155ce4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x155ce8: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x155ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x155cec: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155cf0: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x155cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155cf4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155CF4u;
    {
        const bool branch_taken_0x155cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155CF4u;
        // 0x155cf8: 0x8e330000  lw          $s3, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155cf4) {
            ctx->pc = 0x155D04u;
            goto label_155d04;
        }
    }
    ctx->pc = 0x155CFCu;
    // 0x155cfc: 0xc055850  jal         func_156140
    ctx->pc = 0x155CFCu;
    SET_GPR_U32(ctx, 31, 0x155D04u);
    ctx->pc = 0x156140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156140u, 0x155CFCu, 0x155D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D04u;
label_155d04:
    // 0x155d04: 0x16720004  bne         $s3, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x155D04u;
    {
        const bool branch_taken_0x155d04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x155d04) {
            ctx->pc = 0x155D18u;
            goto label_155d18;
        }
    }
    ctx->pc = 0x155D0Cu;
    // 0x155d0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x155d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x155D10u;
    {
        const bool branch_taken_0x155d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D10u;
        // 0x155d14: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d10) {
            ctx->pc = 0x155D54u;
            goto label_155d54;
        }
    }
    ctx->pc = 0x155D18u;
label_155d18:
    // 0x155d18: 0x16930004  bne         $s4, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x155D18u;
    {
        const bool branch_taken_0x155d18 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x155d18) {
            ctx->pc = 0x155D2Cu;
            goto label_155d2c;
        }
    }
    ctx->pc = 0x155D20u;
    // 0x155d20: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x155d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x155d24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x155D24u;
    {
        const bool branch_taken_0x155d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D24u;
        // 0x155d28: 0xae600018  sw          $zero, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d24) {
            ctx->pc = 0x155D54u;
            goto label_155d54;
        }
    }
    ctx->pc = 0x155D2Cu;
label_155d2c:
    // 0x155d2c: 0x56920004  bnel        $s4, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x155D2Cu;
    {
        const bool branch_taken_0x155d2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 18));
        if (branch_taken_0x155d2c) {
            ctx->pc = 0x155D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155D2Cu;
            // 0x155d30: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155D40u;
            goto label_155d40;
        }
    }
    ctx->pc = 0x155D34u;
    // 0x155d34: 0x8e920018  lw          $s2, 0x18($s4)
    ctx->pc = 0x155d34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x155d38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155D38u;
    {
        const bool branch_taken_0x155d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D38u;
        // 0x155d3c: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d38) {
            ctx->pc = 0x155D54u;
            goto label_155d54;
        }
    }
    ctx->pc = 0x155D40u;
label_155d40:
    // 0x155d40: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x155d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x155d44: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x155d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x155d48: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x155d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x155d4c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x155d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x155d50: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x155d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_155d54:
    // 0x155d54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x155d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x155d58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x155d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155d5c: 0xa6820020  sh          $v0, 0x20($s4)
    ctx->pc = 0x155d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x155d60: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x155d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x155d64: 0xc055810  jal         func_156040
    ctx->pc = 0x155D64u;
    SET_GPR_U32(ctx, 31, 0x155D6Cu);
    ctx->pc = 0x155D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155D64u;
    // 0x155d68: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156040u, 0x155D64u, 0x155D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D6Cu;
label_155d6c:
    // 0x155d6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x155D6Cu;
    {
        const bool branch_taken_0x155d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D6Cu;
        // 0x155d70: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155d6c) {
            ctx->pc = 0x155D80u;
            goto label_155d80;
        }
    }
    ctx->pc = 0x155D74u;
label_155d74:
    // 0x155d74: 0xc068158  jal         func_1A0560
    ctx->pc = 0x155D74u;
    SET_GPR_U32(ctx, 31, 0x155D7Cu);
    ctx->pc = 0x1A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0560u, 0x155D74u, 0x155D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155D7Cu;
label_155d7c:
    // 0x155d7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x155d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_155d80:
    // 0x155d80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x155d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155d84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x155d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155d88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x155d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155d8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155d90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155d94: 0x3e00008  jr          $ra
    ctx->pc = 0x155D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155D94u;
        // 0x155d98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155D9Cu;
    // 0x155d9c: 0x0  nop
    ctx->pc = 0x155d9cu;
    // NOP
    if (ctx->pc == 0x155d9cu) { ctx->pc = 0x155da0u; }
}
