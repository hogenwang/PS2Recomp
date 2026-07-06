#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4088
// Address: 0x2c4088 - 0x2c4118
void sub_002C4088_0x2c4088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4088_0x2c4088");
#endif

    switch (ctx->pc) {
        case 0x2c409cu: goto label_2c409c;
        case 0x2c40c8u: goto label_2c40c8;
        case 0x2c40d8u: goto label_2c40d8;
        case 0x2c40e8u: goto label_2c40e8;
        case 0x2c40f8u: goto label_2c40f8;
        default: break;
    }

    ctx->pc = 0x2c4088u;

    // 0x2c4088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c408c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2c408cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2c4090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c4090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c4094: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2C4094u;
    SET_GPR_U32(ctx, 31, 0x2C409Cu);
    ctx->pc = 0x2C4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4094u;
            // 0x2c4098: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C409Cu; }
        if (ctx->pc != 0x2C409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C409Cu; }
        if (ctx->pc != 0x2C409Cu) { return; }
    }
    ctx->pc = 0x2C409Cu;
label_2c409c:
    // 0x2c409c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c409cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40a0: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C40A0u;
    {
        const bool branch_taken_0x2c40a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c40a0) {
            ctx->pc = 0x2C40A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40A0u;
            // 0x2c40a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C40D0u;
            goto label_2c40d0;
        }
    }
    ctx->pc = 0x2C40A8u;
    // 0x2c40a8: 0x240200ec  addiu       $v0, $zero, 0xEC
    ctx->pc = 0x2c40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x2c40ac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2c40acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c40b0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x2c40b4: 0x240500ce  addiu       $a1, $zero, 0xCE
    ctx->pc = 0x2c40b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x2c40b8: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2c40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2c40bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c40bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c40c0: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2C40C0u;
    SET_GPR_U32(ctx, 31, 0x2C40C8u);
    ctx->pc = 0x2C40C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40C0u;
            // 0x2c40c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40C8u; }
        if (ctx->pc != 0x2C40C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40C8u; }
        if (ctx->pc != 0x2C40C8u) { return; }
    }
    ctx->pc = 0x2C40C8u;
label_2c40c8:
    // 0x2c40c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2C40C8u;
    {
        const bool branch_taken_0x2c40c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40C8u;
            // 0x2c40cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40c8) {
            ctx->pc = 0x2C4104u;
            goto label_2c4104;
        }
    }
    ctx->pc = 0x2C40D0u;
label_2c40d0:
    // 0x2c40d0: 0xc0b0ff2  jal         func_2C3FC8
    ctx->pc = 0x2C40D0u;
    SET_GPR_U32(ctx, 31, 0x2C40D8u);
    ctx->pc = 0x2C40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40D0u;
            // 0x2c40d4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C3FC8u;
    if (runtime->hasFunction(0x2C3FC8u)) {
        auto targetFn = runtime->lookupFunction(0x2C3FC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40D8u; }
        if (ctx->pc != 0x2C40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C3FC8_0x2c3fc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40D8u; }
        if (ctx->pc != 0x2C40D8u) { return; }
    }
    ctx->pc = 0x2C40D8u;
label_2c40d8:
    // 0x2c40d8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C40D8u;
    {
        const bool branch_taken_0x2c40d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40D8u;
            // 0x2c40dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40d8) {
            ctx->pc = 0x2C40C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c40c8;
        }
    }
    ctx->pc = 0x2C40E0u;
    // 0x2c40e0: 0xc0b09ee  jal         func_2C27B8
    ctx->pc = 0x2C40E0u;
    SET_GPR_U32(ctx, 31, 0x2C40E8u);
    ctx->pc = 0x2C27B8u;
    if (runtime->hasFunction(0x2C27B8u)) {
        auto targetFn = runtime->lookupFunction(0x2C27B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40E8u; }
        if (ctx->pc != 0x2C40E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C27B8_0x2c27b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40E8u; }
        if (ctx->pc != 0x2C40E8u) { return; }
    }
    ctx->pc = 0x2C40E8u;
label_2c40e8:
    // 0x2c40e8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C40E8u;
    {
        const bool branch_taken_0x2c40e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C40ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40E8u;
            // 0x2c40ec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c40e8) {
            ctx->pc = 0x2C40C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c40c8;
        }
    }
    ctx->pc = 0x2C40F0u;
    // 0x2c40f0: 0xc0a06f2  jal         func_281BC8
    ctx->pc = 0x2C40F0u;
    SET_GPR_U32(ctx, 31, 0x2C40F8u);
    ctx->pc = 0x2C40F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C40F0u;
            // 0x2c40f4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281BC8u;
    if (runtime->hasFunction(0x281BC8u)) {
        auto targetFn = runtime->lookupFunction(0x281BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40F8u; }
        if (ctx->pc != 0x2C40F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BC8_0x281bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C40F8u; }
        if (ctx->pc != 0x2C40F8u) { return; }
    }
    ctx->pc = 0x2C40F8u;
label_2c40f8:
    // 0x2c40f8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c40f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c40fc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2c40fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2c4100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4104:
    // 0x2c4104: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c4104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4108: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2c4108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c410c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C410Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C410Cu;
            // 0x2c4110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4114u;
    // 0x2c4114: 0x0  nop
    ctx->pc = 0x2c4114u;
    // NOP
    ctx->pc = 0x2c4118u;
}
