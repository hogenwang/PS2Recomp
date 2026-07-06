#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003429B0
// Address: 0x3429b0 - 0x342a40
void sub_003429B0_0x3429b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003429B0_0x3429b0");
#endif

    switch (ctx->pc) {
        case 0x3429d0u: goto label_3429d0;
        case 0x3429dcu: goto label_3429dc;
        case 0x3429fcu: goto label_3429fc;
        default: break;
    }

    ctx->pc = 0x3429b0u;

    // 0x3429b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3429b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3429b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3429b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3429b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3429b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3429bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3429bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3429c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3429c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3429c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3429c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429c8: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x3429C8u;
    SET_GPR_U32(ctx, 31, 0x3429D0u);
    ctx->pc = 0x3429CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3429C8u;
            // 0x3429cc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (runtime->hasFunction(0x20A360u)) {
        auto targetFn = runtime->lookupFunction(0x20A360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3429D0u; }
        if (ctx->pc != 0x3429D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A360_0x20a360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3429D0u; }
        if (ctx->pc != 0x3429D0u) { return; }
    }
    ctx->pc = 0x3429D0u;
label_3429d0:
    // 0x3429d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3429d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3429d4: 0xc0828d8  jal         func_20A360
    ctx->pc = 0x3429D4u;
    SET_GPR_U32(ctx, 31, 0x3429DCu);
    ctx->pc = 0x3429D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3429D4u;
            // 0x3429d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A360u;
    if (runtime->hasFunction(0x20A360u)) {
        auto targetFn = runtime->lookupFunction(0x20A360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3429DCu; }
        if (ctx->pc != 0x3429DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A360_0x20a360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3429DCu; }
        if (ctx->pc != 0x3429DCu) { return; }
    }
    ctx->pc = 0x3429DCu;
label_3429dc:
    // 0x3429dc: 0x52420003  beql        $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3429DCu;
    {
        const bool branch_taken_0x3429dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x3429dc) {
            ctx->pc = 0x3429E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3429DCu;
            // 0x3429e0: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3429ECu;
            goto label_3429ec;
        }
    }
    ctx->pc = 0x3429E4u;
    // 0x3429e4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3429E4u;
    {
        const bool branch_taken_0x3429e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3429E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3429E4u;
            // 0x3429e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3429e4) {
            ctx->pc = 0x342A24u;
            goto label_342a24;
        }
    }
    ctx->pc = 0x3429ECu;
label_3429ec:
    // 0x3429ec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3429ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3429f0: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3429F0u;
    {
        const bool branch_taken_0x3429f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3429f0) {
            ctx->pc = 0x342A20u;
            goto label_342a20;
        }
    }
    ctx->pc = 0x3429F8u;
    // 0x3429f8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3429f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3429fc:
    // 0x3429fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3429fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x342a00: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x342a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x342a04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342A04u;
    {
        const bool branch_taken_0x342a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x342A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A04u;
            // 0x342a08: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a04) {
            ctx->pc = 0x342A14u;
            goto label_342a14;
        }
    }
    ctx->pc = 0x342A0Cu;
    // 0x342a0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342A0Cu;
    {
        const bool branch_taken_0x342a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A0Cu;
            // 0x342a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342a0c) {
            ctx->pc = 0x342A24u;
            goto label_342a24;
        }
    }
    ctx->pc = 0x342A14u;
label_342a14:
    // 0x342a14: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x342a14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x342a18: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x342A18u;
    {
        const bool branch_taken_0x342a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x342a18) {
            ctx->pc = 0x342A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x342A18u;
            // 0x342a1c: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3429FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3429fc;
        }
    }
    ctx->pc = 0x342A20u;
label_342a20:
    // 0x342a20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_342a24:
    // 0x342a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x342a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342a34: 0x3e00008  jr          $ra
    ctx->pc = 0x342A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x342A34u;
            // 0x342a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x342A3Cu;
    // 0x342a3c: 0x0  nop
    ctx->pc = 0x342a3cu;
    // NOP
    ctx->pc = 0x342a40u;
}
