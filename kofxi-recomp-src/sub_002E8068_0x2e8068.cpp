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

// Function: sub_002E8068
// Address: 0x2e8068 - 0x2e8148
void sub_002E8068_0x2e8068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8068_0x2e8068");
#endif

    switch (ctx->pc) {
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80c4u: goto label_2e80c4;
        case 0x2e80d8u: goto label_2e80d8;
        default: break;
    }

    ctx->pc = 0x2e8068u;

    // 0x2e8068: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e8068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e806c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e806cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e8070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e8070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e8074: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2e8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2e8078: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2e8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2e807c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e807cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8080: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e8080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e8084: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e8084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8088: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e8088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e808c: 0x2413ffe4  addiu       $s3, $zero, -0x1C
    ctx->pc = 0x2e808cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x2e8090: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e8090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e8094: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e8094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8098: 0x8c50ea08  lw          $s0, -0x15F8($v0)
    ctx->pc = 0x2e8098u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961672)));
    // 0x2e809c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e809cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e80a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e80a4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2E80A4u;
    {
        const bool branch_taken_0x2e80a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80A4u;
        // 0x2e80a8: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80a4) {
            ctx->pc = 0x2E8118u;
            goto label_2e8118;
        }
    }
    ctx->pc = 0x2E80ACu;
    // 0x2e80ac: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x2e80acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2e80b0: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2e80b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e80b4: 0x0  nop
    ctx->pc = 0x2e80b4u;
    // NOP
label_2e80b8:
    // 0x2e80b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2e80b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80bc: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2E80BCu;
    SET_GPR_U32(ctx, 31, 0x2E80C4u);
    ctx->pc = 0x2E80C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80BCu;
    // 0x2e80c0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2E80BCu, 0x2E80C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80C4u;
label_2e80c4:
    // 0x2e80c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e80c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80c8: 0x56600011  bnel        $s3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E80C8u;
    {
        const bool branch_taken_0x2e80c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e80c8) {
            ctx->pc = 0x2E80CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E80C8u;
            // 0x2e80cc: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8110u;
            goto label_2e8110;
        }
    }
    ctx->pc = 0x2E80D0u;
    // 0x2e80d0: 0xc0b9902  jal         func_2E6408
    ctx->pc = 0x2E80D0u;
    SET_GPR_U32(ctx, 31, 0x2E80D8u);
    ctx->pc = 0x2E80D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E80D0u;
    // 0x2e80d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6408u, 0x2E80D0u, 0x2E80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E80D8u;
label_2e80d8:
    // 0x2e80d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e80d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80dc: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E80DCu;
    {
        const bool branch_taken_0x2e80dc = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E80E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80DCu;
        // 0x2e80e0: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80dc) {
            ctx->pc = 0x2E811Cu;
            goto label_2e811c;
        }
    }
    ctx->pc = 0x2E80E4u;
    // 0x2e80e4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E80E4u;
    {
        const bool branch_taken_0x2e80e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80E4u;
        // 0x2e80e8: 0x941818  mult        $v1, $a0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80e4) {
            ctx->pc = 0x2E80F8u;
            goto label_2e80f8;
        }
    }
    ctx->pc = 0x2E80ECu;
    // 0x2e80ec: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e80f0: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2e80f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2e80f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2e80f8:
    // 0x2e80f8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E80F8u;
    {
        const bool branch_taken_0x2e80f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E80F8u;
        // 0x2e80fc: 0x941818  mult        $v1, $a0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80f8) {
            ctx->pc = 0x2E8118u;
            goto label_2e8118;
        }
    }
    ctx->pc = 0x2E8100u;
    // 0x2e8100: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8104: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2e8104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2e8108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8108u;
    {
        const bool branch_taken_0x2e8108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8108u;
        // 0x2e810c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8108) {
            ctx->pc = 0x2E8118u;
            goto label_2e8118;
        }
    }
    ctx->pc = 0x2E8110u;
label_2e8110:
    // 0x2e8110: 0x1600ffe9  bnez        $s0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2E8110u;
    {
        const bool branch_taken_0x2e8110 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8110u;
        // 0x2e8114: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8110) {
            ctx->pc = 0x2E80B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e80b8;
        }
    }
    ctx->pc = 0x2E8118u;
label_2e8118:
    // 0x2e8118: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e8118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e811c:
    // 0x2e811c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e811cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8120: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2e8120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8124: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2e8124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8128: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e8128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e812c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2e812cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8130: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e8130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8134: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2e8134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e8138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e813c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E813Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E813Cu;
        // 0x2e8140: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E813Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8144u;
    // 0x2e8144: 0x0  nop
    ctx->pc = 0x2e8144u;
    // NOP
    if (ctx->pc == 0x2e8144u) { ctx->pc = 0x2e8148u; }
}
