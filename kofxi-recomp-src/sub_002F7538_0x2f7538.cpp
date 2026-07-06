#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7538
// Address: 0x2f7538 - 0x2f7628
void sub_002F7538_0x2f7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7538_0x2f7538");
#endif

    switch (ctx->pc) {
        case 0x2f7578u: goto label_2f7578;
        case 0x2f7590u: goto label_2f7590;
        case 0x2f75acu: goto label_2f75ac;
        case 0x2f75d0u: goto label_2f75d0;
        default: break;
    }

    ctx->pc = 0x2f7538u;

    // 0x2f7538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f753c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f7540: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f7540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f7544: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2f7544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7548: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f7548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f754c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2f754cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7550: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f7554: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f7554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7558: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f755c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2f755cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7560: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f7560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f7564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f7564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7568: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f7568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f756c: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x2F756Cu;
    {
        const bool branch_taken_0x2f756c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2F7570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F756Cu;
            // 0x2f7570: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f756c) {
            ctx->pc = 0x2F75FCu;
            goto label_2f75fc;
        }
    }
    ctx->pc = 0x2F7574u;
    // 0x2f7574: 0x2415fc15  addiu       $s5, $zero, -0x3EB
    ctx->pc = 0x2f7574u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966293));
label_2f7578:
    // 0x2f7578: 0x8e220170  lw          $v0, 0x170($s1)
    ctx->pc = 0x2f7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x2f757c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F757Cu;
    {
        const bool branch_taken_0x2f757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F757Cu;
            // 0x2f7580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f757c) {
            ctx->pc = 0x2F7598u;
            goto label_2f7598;
        }
    }
    ctx->pc = 0x2F7584u;
    // 0x2f7584: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f7584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7588: 0xc0beaa6  jal         func_2FAA98
    ctx->pc = 0x2F7588u;
    SET_GPR_U32(ctx, 31, 0x2F7590u);
    ctx->pc = 0x2F758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7588u;
            // 0x2f758c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA98u;
    if (runtime->hasFunction(0x2FAA98u)) {
        auto targetFn = runtime->lookupFunction(0x2FAA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7590u; }
        if (ctx->pc != 0x2F7590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FAA98_0x2faa98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7590u; }
        if (ctx->pc != 0x2F7590u) { return; }
    }
    ctx->pc = 0x2F7590u;
label_2f7590:
    // 0x2f7590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7590u;
    {
        const bool branch_taken_0x2f7590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7590u;
            // 0x2f7594: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7590) {
            ctx->pc = 0x2F75B4u;
            goto label_2f75b4;
        }
    }
    ctx->pc = 0x2F7598u;
label_2f7598:
    // 0x2f7598: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2f7598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2f759c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f75a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75a4: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x2F75A4u;
    SET_GPR_U32(ctx, 31, 0x2F75ACu);
    ctx->pc = 0x2F75A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75A4u;
            // 0x2f75a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F75ACu; }
        if (ctx->pc != 0x2F75ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F75ACu; }
        if (ctx->pc != 0x2F75ACu) { return; }
    }
    ctx->pc = 0x2F75ACu;
label_2f75ac:
    // 0x2f75ac: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2f75acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f75b0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2f75b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_2f75b4:
    // 0x2f75b4: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F75B4u;
    {
        const bool branch_taken_0x2f75b4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2f75b4) {
            ctx->pc = 0x2F75D8u;
            goto label_2f75d8;
        }
    }
    ctx->pc = 0x2F75BCu;
    // 0x2f75bc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2f75bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2f75c0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F75C0u;
    {
        const bool branch_taken_0x2f75c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f75c0) {
            ctx->pc = 0x2F75C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75C0u;
            // 0x2f75c4: 0xae350020  sw          $s5, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F75C8u;
            goto label_2f75c8;
        }
    }
    ctx->pc = 0x2F75C8u;
label_2f75c8:
    // 0x2f75c8: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2F75C8u;
    SET_GPR_U32(ctx, 31, 0x2F75D0u);
    ctx->pc = 0x2FC3F0u;
    if (runtime->hasFunction(0x2FC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F75D0u; }
        if (ctx->pc != 0x2F75D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC3F0_0x2fc3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F75D0u; }
        if (ctx->pc != 0x2F75D0u) { return; }
    }
    ctx->pc = 0x2F75D0u;
label_2f75d0:
    // 0x2f75d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f75d4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x2f75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_2f75d8:
    // 0x2f75d8: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F75D8u;
    {
        const bool branch_taken_0x2f75d8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F75DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75D8u;
            // 0x2f75dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75d8) {
            ctx->pc = 0x2F7600u;
            goto label_2f7600;
        }
    }
    ctx->pc = 0x2F75E0u;
    // 0x2f75e0: 0x6000008  bltz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F75E0u;
    {
        const bool branch_taken_0x2f75e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2F75E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75E0u;
            // 0x2f75e4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75e0) {
            ctx->pc = 0x2F7604u;
            goto label_2f7604;
        }
    }
    ctx->pc = 0x2F75E8u;
    // 0x2f75e8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F75E8u;
    {
        const bool branch_taken_0x2f75e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75E8u;
            // 0x2f75ec: 0x2921023  subu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75e8) {
            ctx->pc = 0x2F7604u;
            goto label_2f7604;
        }
    }
    ctx->pc = 0x2F75F0u;
    // 0x2f75f0: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2f75f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2f75f4: 0x1e40ffe0  bgtz        $s2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2F75F4u;
    {
        const bool branch_taken_0x2f75f4 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2F75F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F75F4u;
            // 0x2f75f8: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75f4) {
            ctx->pc = 0x2F7578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f7578;
        }
    }
    ctx->pc = 0x2F75FCu;
label_2f75fc:
    // 0x2f75fc: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x2f75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_2f7600:
    // 0x2f7600: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f7600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f7604:
    // 0x2f7604: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f7604u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7608: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f7608u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f760c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f760cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7610: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f7610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7614: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f7614u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7618: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f761c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f761cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7620: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7620u;
            // 0x2f7624: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7628u;
    ctx->pc = 0x2f7628u;
}
