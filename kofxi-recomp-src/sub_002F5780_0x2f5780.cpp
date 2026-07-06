#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5780
// Address: 0x2f5780 - 0x2f5800
void sub_002F5780_0x2f5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5780_0x2f5780");
#endif

    switch (ctx->pc) {
        case 0x2f57b0u: goto label_2f57b0;
        case 0x2f57bcu: goto label_2f57bc;
        case 0x2f57d4u: goto label_2f57d4;
        default: break;
    }

    ctx->pc = 0x2f5780u;

    // 0x2f5780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f5784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5788: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f5788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f578c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5790: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f5790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f5794: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f5794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f5798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f579c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f579cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57a0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F57A0u;
    {
        const bool branch_taken_0x2f57a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57A0u;
            // 0x2f57a4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57a0) {
            ctx->pc = 0x2F57E0u;
            goto label_2f57e0;
        }
    }
    ctx->pc = 0x2F57A8u;
    // 0x2f57a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f57ac: 0x0  nop
    ctx->pc = 0x2f57acu;
    // NOP
label_2f57b0:
    // 0x2f57b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f57b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57b4: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F57B4u;
    SET_GPR_U32(ctx, 31, 0x2F57BCu);
    ctx->pc = 0x2F57B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57B4u;
            // 0x2f57b8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (runtime->hasFunction(0x2F6790u)) {
        auto targetFn = runtime->lookupFunction(0x2F6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57BCu; }
        if (ctx->pc != 0x2F57BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6790_0x2f6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57BCu; }
        if (ctx->pc != 0x2F57BCu) { return; }
    }
    ctx->pc = 0x2F57BCu;
label_2f57bc:
    // 0x2f57bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F57BCu;
    {
        const bool branch_taken_0x2f57bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57bc) {
            ctx->pc = 0x2F57C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57BCu;
            // 0x2f57c0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F57D8u;
            goto label_2f57d8;
        }
    }
    ctx->pc = 0x2F57C4u;
    // 0x2f57c4: 0x52300001  beql        $s1, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F57C4u;
    {
        const bool branch_taken_0x2f57c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f57c4) {
            ctx->pc = 0x2F57C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57C4u;
            // 0x2f57c8: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F57CCu;
            goto label_2f57cc;
        }
    }
    ctx->pc = 0x2F57CCu;
label_2f57cc:
    // 0x2f57cc: 0xc0bd600  jal         func_2F5800
    ctx->pc = 0x2F57CCu;
    SET_GPR_U32(ctx, 31, 0x2F57D4u);
    ctx->pc = 0x2F57D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57CCu;
            // 0x2f57d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5800u;
    if (runtime->hasFunction(0x2F5800u)) {
        auto targetFn = runtime->lookupFunction(0x2F5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57D4u; }
        if (ctx->pc != 0x2F57D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5800_0x2f5800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F57D4u; }
        if (ctx->pc != 0x2F57D4u) { return; }
    }
    ctx->pc = 0x2F57D4u;
label_2f57d4:
    // 0x2f57d4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2f57d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f57d8:
    // 0x2f57d8: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F57D8u;
    {
        const bool branch_taken_0x2f57d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57d8) {
            ctx->pc = 0x2F57DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57D8u;
            // 0x2f57dc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F57B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f57b0;
        }
    }
    ctx->pc = 0x2F57E0u;
label_2f57e0:
    // 0x2f57e0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f57e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f57e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f57e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f57e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f57ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f57ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f57f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f57f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f57f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f57f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f57f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F57FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F57F8u;
            // 0x2f57fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5800u;
    ctx->pc = 0x2f5800u;
}
