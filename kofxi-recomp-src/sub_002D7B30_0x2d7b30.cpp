#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D7B30
// Address: 0x2d7b30 - 0x2d7c60
void sub_002D7B30_0x2d7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7B30_0x2d7b30");
#endif

    switch (ctx->pc) {
        case 0x2d7b70u: goto label_2d7b70;
        case 0x2d7ba8u: goto label_2d7ba8;
        case 0x2d7bb0u: goto label_2d7bb0;
        case 0x2d7bd0u: goto label_2d7bd0;
        case 0x2d7c08u: goto label_2d7c08;
        case 0x2d7c38u: goto label_2d7c38;
        case 0x2d7c40u: goto label_2d7c40;
        default: break;
    }

    ctx->pc = 0x2d7b30u;

    // 0x2d7b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d7b34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d7b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d7b38: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2d7b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d7b3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d7b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d7b40: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2d7b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d7b48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d7b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b4c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d7b50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d7b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b54: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d7b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d7b58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2d7b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d7b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d7b64: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d7b68: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7B68u;
    SET_GPR_U32(ctx, 31, 0x2D7B70u);
    ctx->pc = 0x2D7B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7B68u;
            // 0x2d7b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B70u; }
        if (ctx->pc != 0x2D7B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7B70u; }
        if (ctx->pc != 0x2D7B70u) { return; }
    }
    ctx->pc = 0x2D7B70u;
label_2d7b70:
    // 0x2d7b70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7b74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7b78: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7b7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d7b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d7b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b88: 0x24849710  addiu       $a0, $a0, -0x68F0
    ctx->pc = 0x2d7b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940432));
    // 0x2d7b8c: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x2d7b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x2d7b90: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x2d7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x2d7b94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d7b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d7b98: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d7b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d7b9c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d7b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d7ba0: 0xc0b2aa2  jal         func_2CAA88
    ctx->pc = 0x2D7BA0u;
    SET_GPR_U32(ctx, 31, 0x2D7BA8u);
    ctx->pc = 0x2D7BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BA0u;
            // 0x2d7ba4: 0xafbd001c  sw          $sp, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA88u;
    if (runtime->hasFunction(0x2CAA88u)) {
        auto targetFn = runtime->lookupFunction(0x2CAA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BA8u; }
        if (ctx->pc != 0x2D7BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAA88_0x2caa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BA8u; }
        if (ctx->pc != 0x2D7BA8u) { return; }
    }
    ctx->pc = 0x2D7BA8u;
label_2d7ba8:
    // 0x2d7ba8: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D7BA8u;
    SET_GPR_U32(ctx, 31, 0x2D7BB0u);
    ctx->pc = 0x2D7BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BA8u;
            // 0x2d7bac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BB0u; }
        if (ctx->pc != 0x2D7BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7BB0u; }
        if (ctx->pc != 0x2D7BB0u) { return; }
    }
    ctx->pc = 0x2D7BB0u;
label_2d7bb0:
    // 0x2d7bb0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d7bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7bb4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d7bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7bb8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d7bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7bbc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d7bbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7bc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d7bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7bc4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d7bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d7bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7BC8u;
            // 0x2d7bcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7BD0u;
label_2d7bd0:
    // 0x2d7bd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d7bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d7bd4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d7bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d7bd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bdc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d7bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d7be0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d7be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7be4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d7be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d7be8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d7be8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d7becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bf0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2d7bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d7bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bf8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d7bfc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d7c00: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D7C00u;
    SET_GPR_U32(ctx, 31, 0x2D7C08u);
    ctx->pc = 0x2D7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C00u;
            // 0x2d7c04: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C08u; }
        if (ctx->pc != 0x2D7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C08u; }
        if (ctx->pc != 0x2D7C08u) { return; }
    }
    ctx->pc = 0x2D7C08u;
label_2d7c08:
    // 0x2d7c08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d7c0c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d7c10: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2d7c10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d7c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7c1c: 0x24429868  addiu       $v0, $v0, -0x6798
    ctx->pc = 0x2d7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940776));
    // 0x2d7c20: 0x248497a0  addiu       $a0, $a0, -0x6860
    ctx->pc = 0x2d7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940576));
    // 0x2d7c24: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x2d7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    // 0x2d7c28: 0xafb2000c  sw          $s2, 0xC($sp)
    ctx->pc = 0x2d7c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
    // 0x2d7c2c: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x2d7c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x2d7c30: 0xc0b2aa2  jal         func_2CAA88
    ctx->pc = 0x2D7C30u;
    SET_GPR_U32(ctx, 31, 0x2D7C38u);
    ctx->pc = 0x2D7C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C30u;
            // 0x2d7c34: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAA88u;
    if (runtime->hasFunction(0x2CAA88u)) {
        auto targetFn = runtime->lookupFunction(0x2CAA88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C38u; }
        if (ctx->pc != 0x2D7C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAA88_0x2caa88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C38u; }
        if (ctx->pc != 0x2D7C38u) { return; }
    }
    ctx->pc = 0x2D7C38u;
label_2d7c38:
    // 0x2d7c38: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2D7C38u;
    SET_GPR_U32(ctx, 31, 0x2D7C40u);
    ctx->pc = 0x2D7C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C38u;
            // 0x2d7c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C40u; }
        if (ctx->pc != 0x2D7C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7C40u; }
        if (ctx->pc != 0x2D7C40u) { return; }
    }
    ctx->pc = 0x2D7C40u;
label_2d7c40:
    // 0x2d7c40: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d7c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7c44: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d7c44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7c48: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d7c48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7c4c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d7c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d7c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7c54: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7C54u;
            // 0x2d7c58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7C5Cu;
    // 0x2d7c5c: 0x0  nop
    ctx->pc = 0x2d7c5cu;
    // NOP
    ctx->pc = 0x2d7c60u;
}
