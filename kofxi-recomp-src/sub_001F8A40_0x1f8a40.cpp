#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F8A40
// Address: 0x1f8a40 - 0x1f8ab8
void sub_001F8A40_0x1f8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8A40_0x1f8a40");
#endif

    switch (ctx->pc) {
        case 0x1f8a68u: goto label_1f8a68;
        case 0x1f8a70u: goto label_1f8a70;
        case 0x1f8a7cu: goto label_1f8a7c;
        case 0x1f8a8cu: goto label_1f8a8c;
        default: break;
    }

    ctx->pc = 0x1f8a40u;

    // 0x1f8a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8a44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f8a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f8a4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a50: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f8a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f8a54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8a58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8a5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f8a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f8a60: 0xc0758fa  jal         func_1D63E8
    ctx->pc = 0x1F8A60u;
    SET_GPR_U32(ctx, 31, 0x1F8A68u);
    ctx->pc = 0x1F8A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A60u;
            // 0x1f8a64: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D63E8u;
    if (runtime->hasFunction(0x1D63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A68u; }
        if (ctx->pc != 0x1F8A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D63E8_0x1d63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A68u; }
        if (ctx->pc != 0x1F8A68u) { return; }
    }
    ctx->pc = 0x1F8A68u;
label_1f8a68:
    // 0x1f8a68: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f8a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a70:
    // 0x1f8a70: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1f8a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1f8a74: 0xc07f47e  jal         func_1FD1F8
    ctx->pc = 0x1F8A74u;
    SET_GPR_U32(ctx, 31, 0x1F8A7Cu);
    ctx->pc = 0x1F8A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A74u;
            // 0x1f8a78: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F8u;
    if (runtime->hasFunction(0x1FD1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A7Cu; }
        if (ctx->pc != 0x1F8A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD1F8_0x1fd1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A7Cu; }
        if (ctx->pc != 0x1F8A7Cu) { return; }
    }
    ctx->pc = 0x1F8A7Cu;
label_1f8a7c:
    // 0x1f8a7c: 0x643fffc  bgezl       $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1F8A7Cu;
    {
        const bool branch_taken_0x1f8a7c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1f8a7c) {
            ctx->pc = 0x1F8A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A7Cu;
            // 0x1f8a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F8A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f8a70;
        }
    }
    ctx->pc = 0x1F8A84u;
    // 0x1f8a84: 0xc07f47e  jal         func_1FD1F8
    ctx->pc = 0x1F8A84u;
    SET_GPR_U32(ctx, 31, 0x1F8A8Cu);
    ctx->pc = 0x1F8A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8A84u;
            // 0x1f8a88: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1F8u;
    if (runtime->hasFunction(0x1FD1F8u)) {
        auto targetFn = runtime->lookupFunction(0x1FD1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A8Cu; }
        if (ctx->pc != 0x1F8A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD1F8_0x1fd1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F8A8Cu; }
        if (ctx->pc != 0x1F8A8Cu) { return; }
    }
    ctx->pc = 0x1F8A8Cu;
label_1f8a8c:
    // 0x1f8a8c: 0xfe2000c0  sd          $zero, 0xC0($s1)
    ctx->pc = 0x1f8a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 192), GPR_U64(ctx, 0));
    // 0x1f8a90: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1f8a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1f8a94: 0xfe2000c8  sd          $zero, 0xC8($s1)
    ctx->pc = 0x1f8a94u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 200), GPR_U64(ctx, 0));
    // 0x1f8a98: 0xfe2000d0  sd          $zero, 0xD0($s1)
    ctx->pc = 0x1f8a98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 208), GPR_U64(ctx, 0));
    // 0x1f8a9c: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x1f8a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x1f8aa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8aa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8aa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8aac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f8aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F8AB0u;
            // 0x1f8ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F8AB8u;
    ctx->pc = 0x1f8ab8u;
}
