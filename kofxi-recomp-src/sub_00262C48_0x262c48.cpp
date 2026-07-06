#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262C48
// Address: 0x262c48 - 0x262d08
void sub_00262C48_0x262c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262C48_0x262c48");
#endif

    switch (ctx->pc) {
        case 0x262ca0u: goto label_262ca0;
        case 0x262ca8u: goto label_262ca8;
        case 0x262cd0u: goto label_262cd0;
        default: break;
    }

    ctx->pc = 0x262c48u;

    // 0x262c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x262c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x262c4c: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x262c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x262c50: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x262c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x262c54: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x262c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x262c58: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x262c58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c5c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x262c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x262c60: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x262c60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c64: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x262c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x262c68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x262c68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c6c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x262c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x262c70: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x262c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c74: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x262c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x262c78: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x262c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x262c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x262c80: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x262c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x262c88: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x262c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c8c: 0x8fbe00b0  lw          $fp, 0xB0($sp)
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x262c90: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x262c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262C94u;
    {
        const bool branch_taken_0x262c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262C94u;
            // 0x262c98: 0xffbf00a0  sd          $ra, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c94) {
            ctx->pc = 0x262CA8u;
            goto label_262ca8;
        }
    }
    ctx->pc = 0x262C9Cu;
    // 0x262c9c: 0x0  nop
    ctx->pc = 0x262c9cu;
    // NOP
label_262ca0:
    // 0x262ca0: 0xc043736  jal         func_10DCD8
    ctx->pc = 0x262CA0u;
    SET_GPR_U32(ctx, 31, 0x262CA8u);
    ctx->pc = 0x10DCD8u;
    if (runtime->hasFunction(0x10DCD8u)) {
        auto targetFn = runtime->lookupFunction(0x10DCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CA8u; }
        if (ctx->pc != 0x262CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010DCD8_0x10dcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CA8u; }
        if (ctx->pc != 0x262CA8u) { return; }
    }
    ctx->pc = 0x262CA8u;
label_262ca8:
    // 0x262ca8: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x262ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x262cac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x262cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cb0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x262cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cb4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x262cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cb8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x262cb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cbc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x262cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cc0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x262cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cc4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x262cc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262cc8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x262CC8u;
    SET_GPR_U32(ctx, 31, 0x262CD0u);
    ctx->pc = 0x262CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262CC8u;
            // 0x262ccc: 0x200582d  daddu       $t3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (runtime->hasFunction(0x110D30u)) {
        auto targetFn = runtime->lookupFunction(0x110D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CD0u; }
        if (ctx->pc != 0x262CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSifRpcCallPacket_0x110d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262CD0u; }
        if (ctx->pc != 0x262CD0u) { return; }
    }
    ctx->pc = 0x262CD0u;
label_262cd0:
    // 0x262cd0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x262CD0u;
    {
        const bool branch_taken_0x262cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262CD0u;
            // 0x262cd4: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cd0) {
            ctx->pc = 0x262CA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262ca0;
        }
    }
    ctx->pc = 0x262CD8u;
    // 0x262cd8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x262cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x262cdc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x262cdcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x262ce0: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x262ce0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x262ce4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x262ce4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x262ce8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x262ce8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262cec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x262cecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262cf0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x262cf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262cf4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x262cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262cf8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x262cf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262cfc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d00: 0x3e00008  jr          $ra
    ctx->pc = 0x262D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D00u;
            // 0x262d04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262D08u;
    ctx->pc = 0x262d08u;
}
