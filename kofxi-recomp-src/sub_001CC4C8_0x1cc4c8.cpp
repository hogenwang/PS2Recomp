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

// Function: sub_001CC4C8
// Address: 0x1cc4c8 - 0x1cc5e8
void sub_001CC4C8_0x1cc4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC4C8_0x1cc4c8");
#endif

    switch (ctx->pc) {
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5d0u: goto label_1cc5d0;
        default: break;
    }

    ctx->pc = 0x1cc4c8u;

    // 0x1cc4c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4cc: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4CCu;
    {
        const bool branch_taken_0x1cc4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4CCu;
        // 0x1cc4d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4cc) {
            ctx->pc = 0x1CC4F0u;
            goto label_1cc4f0;
        }
    }
    ctx->pc = 0x1CC4D4u;
    // 0x1cc4d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc4d8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4e0: 0x2484bc00  addiu       $a0, $a0, -0x4400
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949888));
    // 0x1cc4e4: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x1cc4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x1cc4e8: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC4E8u;
    ctx->pc = 0x1CC4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4E8u;
    // 0x1cc4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4F0u;
label_1cc4f0:
    // 0x1cc4f0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cc4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cc4f4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4F4u;
    {
        const bool branch_taken_0x1cc4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4f4) {
            ctx->pc = 0x1CC4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC4F4u;
            // 0x1cc4f8: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC518u;
            goto label_1cc518;
        }
    }
    ctx->pc = 0x1CC4FCu;
    // 0x1cc4fc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cc500: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cc500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cc504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc508: 0x2484bc10  addiu       $a0, $a0, -0x43F0
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949904));
    // 0x1cc50c: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1cc50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
    // 0x1cc510: 0x8073006  j           func_1CC018
    ctx->pc = 0x1CC510u;
    ctx->pc = 0x1CC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC510u;
    // 0x1cc514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC018u;
    sub_001CC018_0x1cc018(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC518u;
label_1cc518:
    // 0x1cc518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc51c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cc51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cc520: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cc524: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC558u;
            goto label_1cc558;
        }
    }
    ctx->pc = 0x1CC52Cu;
    // 0x1cc52c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1cc52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cc530:
    // 0x1cc530: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1cc530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1cc534: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cc534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cc538: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1cc53c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1cc53cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1cc540: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc544: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cc544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1cc548: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cc548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cc54c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1cc54cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cc550: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC550u;
    {
        const bool branch_taken_0x1cc550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC550u;
        // 0x1cc554: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc550) {
            ctx->pc = 0x1CC530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc530;
        }
    }
    ctx->pc = 0x1CC558u;
label_1cc558:
    // 0x1cc558: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cc55c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc560: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cc564: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1cc568: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1cc568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1cc56c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1cc56cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1cc570: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1cc570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1cc574: 0x0  nop
    ctx->pc = 0x1cc574u;
    // NOP
label_1cc578:
    // 0x1cc578: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1cc57c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1cc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1cc580: 0x0  nop
    ctx->pc = 0x1cc580u;
    // NOP
    // 0x1cc584: 0x0  nop
    ctx->pc = 0x1cc584u;
    // NOP
    // 0x1cc588: 0x0  nop
    ctx->pc = 0x1cc588u;
    // NOP
    // 0x1cc58c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CC58Cu;
    {
        const bool branch_taken_0x1cc58c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1CC590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC58Cu;
        // 0x1cc590: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc58c) {
            ctx->pc = 0x1CC578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc578;
        }
    }
    ctx->pc = 0x1CC594u;
    // 0x1cc594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc598: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC598u;
        // 0x1cc59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5A0u;
    // 0x1cc5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc5a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc5b4: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CC5B4u;
    SET_GPR_U32(ctx, 31, 0x1CC5BCu);
    ctx->pc = 0x1CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5B4u;
    // 0x1cc5b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CC5B4u, 0x1CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5BCu;
label_1cc5bc:
    // 0x1cc5bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5c0: 0xc07317a  jal         func_1CC5E8
    ctx->pc = 0x1CC5C0u;
    SET_GPR_U32(ctx, 31, 0x1CC5C8u);
    ctx->pc = 0x1CC5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5C0u;
    // 0x1cc5c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5E8u, 0x1CC5C0u, 0x1CC5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5C8u;
label_1cc5c8:
    // 0x1cc5c8: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CC5C8u;
    SET_GPR_U32(ctx, 31, 0x1CC5D0u);
    ctx->pc = 0x1CC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC5C8u;
    // 0x1cc5cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CC5C8u, 0x1CC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5D0u;
label_1cc5d0:
    // 0x1cc5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc5d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cc5d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc5dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5E0u;
        // 0x1cc5e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5E8u;
}
