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

// Function: sub_0010E530
// Address: 0x10e530 - 0x10e600
void sub_0010E530_0x10e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E530_0x10e530");
#endif

    switch (ctx->pc) {
        case 0x10e568u: goto label_10e568;
        case 0x10e578u: goto label_10e578;
        case 0x10e5b0u: goto label_10e5b0;
        default: break;
    }

    ctx->pc = 0x10e530u;

    // 0x10e530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e534: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10e534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e538: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10e538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10e53c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10e540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10e540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e544: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10e548: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10e548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e54c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10e550: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10e554: 0x1a400021  blez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x10E554u;
    {
        const bool branch_taken_0x10e554 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x10E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E554u;
        // 0x10e558: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e554) {
            ctx->pc = 0x10E5DCu;
            goto label_10e5dc;
        }
    }
    ctx->pc = 0x10E55Cu;
    // 0x10e55c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x10e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x10e560: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10e560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10e564: 0x0  nop
    ctx->pc = 0x10e564u;
    // NOP
label_10e568:
    // 0x10e568: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x10e568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10e56c: 0x8c4463e8  lw          $a0, 0x63E8($v0)
    ctx->pc = 0x10e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25576)));
    // 0x10e570: 0x2838021  addu        $s0, $s4, $v1
    ctx->pc = 0x10e570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x10e574: 0x0  nop
    ctx->pc = 0x10e574u;
    // NOP
label_10e578:
    // 0x10e578: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10e578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10e57c: 0x0  nop
    ctx->pc = 0x10e57cu;
    // NOP
    // 0x10e580: 0x0  nop
    ctx->pc = 0x10e580u;
    // NOP
    // 0x10e584: 0x0  nop
    ctx->pc = 0x10e584u;
    // NOP
    // 0x10e588: 0x0  nop
    ctx->pc = 0x10e588u;
    // NOP
    // 0x10e58c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10E58Cu;
    {
        const bool branch_taken_0x10e58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e58c) {
            ctx->pc = 0x10E578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e578;
        }
    }
    ctx->pc = 0x10E594u;
    // 0x10e594: 0x266563d0  addiu       $a1, $s3, 0x63D0
    ctx->pc = 0x10e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 25552));
    // 0x10e598: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x10e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x10e59c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10e5a0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x10e5a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10e5a4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x10e5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10e5a8: 0xc043878  jal         func_10E1E0
    ctx->pc = 0x10E5A8u;
    SET_GPR_U32(ctx, 31, 0x10E5B0u);
    ctx->pc = 0x10E5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E5A8u;
    // 0x10e5ac: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E1E0u, 0x10E5A8u, 0x10E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E5B0u;
label_10e5b0:
    // 0x10e5b0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x10e5b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10e5b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10e5b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E5B8u;
    {
        const bool branch_taken_0x10e5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5B8u;
        // 0x10e5bc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5b8) {
            ctx->pc = 0x10E5C8u;
            goto label_10e5c8;
        }
    }
    ctx->pc = 0x10E5C0u;
    // 0x10e5c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E5C0u;
    {
        const bool branch_taken_0x10e5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10E5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5C0u;
        // 0x10e5c4: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5c0) {
            ctx->pc = 0x10E5D0u;
            goto label_10e5d0;
        }
    }
    ctx->pc = 0x10E5C8u;
label_10e5c8:
    // 0x10e5c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10E5C8u;
    {
        const bool branch_taken_0x10e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5C8u;
        // 0x10e5cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5c8) {
            ctx->pc = 0x10E5E0u;
            goto label_10e5e0;
        }
    }
    ctx->pc = 0x10E5D0u;
label_10e5d0:
    // 0x10e5d0: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x10e5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x10e5d4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x10E5D4u;
    {
        const bool branch_taken_0x10e5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5D4u;
        // 0x10e5d8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5d4) {
            ctx->pc = 0x10E568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10e568;
        }
    }
    ctx->pc = 0x10E5DCu;
label_10e5dc:
    // 0x10e5dc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10e5dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10e5e0:
    // 0x10e5e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10e5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e5e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10e5e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e5e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10e5e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e5ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10e5ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e5f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10e5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10e5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10E5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5F8u;
        // 0x10e5fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E600u;
}
