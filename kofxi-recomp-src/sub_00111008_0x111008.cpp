#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111008
// Address: 0x111008 - 0x1110d8
void sub_00111008_0x111008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111008_0x111008");
#endif

    switch (ctx->pc) {
        case 0x11104cu: goto label_11104c;
        case 0x111090u: goto label_111090;
        default: break;
    }

    ctx->pc = 0x111008u;

    // 0x111008: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11100c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x111010: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x111010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x111014: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x111014u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111018: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x111018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11101c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11101cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111020: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x111020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x111024: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x111024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11102c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x11102cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111030: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111034: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x111034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11103c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111040: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x111040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x111044: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x111044u;
    SET_GPR_U32(ctx, 31, 0x11104Cu);
    ctx->pc = 0x111048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111044u;
            // 0x111048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11104Cu; }
        if (ctx->pc != 0x11104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11104Cu; }
        if (ctx->pc != 0x11104Cu) { return; }
    }
    ctx->pc = 0x11104Cu;
label_11104c:
    // 0x11104c: 0xaea0003c  sw          $zero, 0x3C($s5)
    ctx->pc = 0x11104cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 0));
    // 0x111050: 0xaea00038  sw          $zero, 0x38($s5)
    ctx->pc = 0x111050u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 0));
    // 0x111054: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x111054u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x111058: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x111058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x11105c: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x11105cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x111060: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x111060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x111064: 0xaeb30010  sw          $s3, 0x10($s5)
    ctx->pc = 0x111064u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 19));
    // 0x111068: 0xaeb40014  sw          $s4, 0x14($s5)
    ctx->pc = 0x111068u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 20));
    // 0x11106c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11106Cu;
    {
        const bool branch_taken_0x11106c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11106Cu;
            // 0x111070: 0xaeb60040  sw          $s6, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11106c) {
            ctx->pc = 0x11107Cu;
            goto label_11107c;
        }
    }
    ctx->pc = 0x111074u;
    // 0x111074: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x111074u;
    {
        const bool branch_taken_0x111074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111074u;
            // 0x111078: 0xaed50008  sw          $s5, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111074) {
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x11107Cu;
label_11107c:
    // 0x11107c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11107cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111080: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x111080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x111084: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x111084u;
    {
        const bool branch_taken_0x111084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x111084) {
            ctx->pc = 0x111088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111084u;
            // 0x111088: 0xac950038  sw          $s5, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1110B0u;
            goto label_1110b0;
        }
    }
    ctx->pc = 0x11108Cu;
    // 0x11108c: 0x0  nop
    ctx->pc = 0x11108cu;
    // NOP
label_111090:
    // 0x111090: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x111090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111094: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x111098: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x111098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11109c: 0x0  nop
    ctx->pc = 0x11109cu;
    // NOP
    // 0x1110a0: 0x0  nop
    ctx->pc = 0x1110a0u;
    // NOP
    // 0x1110a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1110A4u;
    {
        const bool branch_taken_0x1110a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1110a4) {
            ctx->pc = 0x111090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111090;
        }
    }
    ctx->pc = 0x1110ACu;
    // 0x1110ac: 0xac950038  sw          $s5, 0x38($a0)
    ctx->pc = 0x1110acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 21));
label_1110b0:
    // 0x1110b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1110b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1110b4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1110b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1110b8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1110b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1110bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1110bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1110c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1110c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1110c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1110c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1110c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1110c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1110cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1110ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1110d0: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x1110D0u;
    ctx->pc = 0x1110D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1110D0u;
            // 0x1110d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1110D8u;
    ctx->pc = 0x1110d8u;
}
