#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001029B0
// Address: 0x1029b0 - 0x102ab0
void sub_001029B0_0x1029b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001029B0_0x1029b0");
#endif

    switch (ctx->pc) {
        case 0x1029d4u: goto label_1029d4;
        case 0x1029e0u: goto label_1029e0;
        case 0x102a30u: goto label_102a30;
        case 0x102a54u: goto label_102a54;
        case 0x102a60u: goto label_102a60;
        default: break;
    }

    ctx->pc = 0x1029b0u;

    // 0x1029b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1029b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1029b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1029b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1029b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1029b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1029bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1029c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1029c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1029c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1029c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1029c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1029cc: 0xc040920  jal         func_102480
    ctx->pc = 0x1029CCu;
    SET_GPR_U32(ctx, 31, 0x1029D4u);
    ctx->pc = 0x1029D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1029CCu;
            // 0x1029d0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102480u;
    if (runtime->hasFunction(0x102480u)) {
        auto targetFn = runtime->lookupFunction(0x102480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029D4u; }
        if (ctx->pc != 0x1029D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102480_0x102480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029D4u; }
        if (ctx->pc != 0x1029D4u) { return; }
    }
    ctx->pc = 0x1029D4u;
label_1029d4:
    // 0x1029d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1029d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1029d8: 0xc0408e2  jal         func_102388
    ctx->pc = 0x1029D8u;
    SET_GPR_U32(ctx, 31, 0x1029E0u);
    ctx->pc = 0x1029DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1029D8u;
            // 0x1029dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029E0u; }
        if (ctx->pc != 0x1029E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1029E0u; }
        if (ctx->pc != 0x1029E0u) { return; }
    }
    ctx->pc = 0x1029E0u;
label_1029e0:
    // 0x1029e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1029e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1029e4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1029e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1029e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1029e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1029ec: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1029ECu;
    {
        const bool branch_taken_0x1029ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1029ec) {
            ctx->pc = 0x1029F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1029ECu;
            // 0x1029f0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1029F4u;
            goto label_1029f4;
        }
    }
    ctx->pc = 0x1029F4u;
label_1029f4:
    // 0x1029f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1029f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1029f8: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x1029f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1029fc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x1029fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x102a00: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x102a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x102a04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x102a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102a0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x102a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x102a10: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102a10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102a14: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x102a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x102a18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102a18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x102a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102a24: 0x3e00008  jr          $ra
    ctx->pc = 0x102A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102A24u;
            // 0x102a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102A2Cu;
    // 0x102a2c: 0x0  nop
    ctx->pc = 0x102a2cu;
    // NOP
label_102a30:
    // 0x102a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x102a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102a38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x102a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x102a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102a40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102a44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x102a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x102a4c: 0xc040920  jal         func_102480
    ctx->pc = 0x102A4Cu;
    SET_GPR_U32(ctx, 31, 0x102A54u);
    ctx->pc = 0x102A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102A4Cu;
            // 0x102a50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102480u;
    if (runtime->hasFunction(0x102480u)) {
        auto targetFn = runtime->lookupFunction(0x102480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A54u; }
        if (ctx->pc != 0x102A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102480_0x102480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A54u; }
        if (ctx->pc != 0x102A54u) { return; }
    }
    ctx->pc = 0x102A54u;
label_102a54:
    // 0x102a54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102a58: 0xc0408e2  jal         func_102388
    ctx->pc = 0x102A58u;
    SET_GPR_U32(ctx, 31, 0x102A60u);
    ctx->pc = 0x102A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102A58u;
            // 0x102a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102388u;
    if (runtime->hasFunction(0x102388u)) {
        auto targetFn = runtime->lookupFunction(0x102388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A60u; }
        if (ctx->pc != 0x102A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102388_0x102388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102A60u; }
        if (ctx->pc != 0x102A60u) { return; }
    }
    ctx->pc = 0x102A60u;
label_102a60:
    // 0x102a60: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102a64: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x102a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102a68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x102a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x102a6c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x102A6Cu;
    {
        const bool branch_taken_0x102a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x102a6c) {
            ctx->pc = 0x102A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102A6Cu;
            // 0x102a70: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102A74u;
            goto label_102a74;
        }
    }
    ctx->pc = 0x102A74u;
label_102a74:
    // 0x102a74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102a78: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x102a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x102a7c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x102a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x102a80: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x102a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x102a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x102a88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x102a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102a8c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x102a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x102a90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102a94: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x102a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x102a98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102a98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102a9c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x102a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x102aa0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x102aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x102aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x102AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102AA8u;
            // 0x102aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102AB0u;
    ctx->pc = 0x102ab0u;
}
