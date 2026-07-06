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

// Function: sub_002F5570
// Address: 0x2f5570 - 0x2f5650
void sub_002F5570_0x2f5570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5570_0x2f5570");
#endif

    switch (ctx->pc) {
        case 0x2f55b0u: goto label_2f55b0;
        case 0x2f55d0u: goto label_2f55d0;
        case 0x2f55ecu: goto label_2f55ec;
        case 0x2f5600u: goto label_2f5600;
        case 0x2f5610u: goto label_2f5610;
        case 0x2f561cu: goto label_2f561c;
        default: break;
    }

    ctx->pc = 0x2f5570u;

    // 0x2f5570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f5578: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f5578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f557c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f557cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5580: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f5584: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f5584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5588: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f5588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f558c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F558Cu;
    {
        const bool branch_taken_0x2f558c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F558Cu;
        // 0x2f5590: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f558c) {
            ctx->pc = 0x2F55DCu;
            goto label_2f55dc;
        }
    }
    ctx->pc = 0x2F5594u;
    // 0x2f5594: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F5594u;
    {
        const bool branch_taken_0x2f5594 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5594u;
        // 0x2f5598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5594) {
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F559Cu;
    // 0x2f559c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F559Cu;
    {
        const bool branch_taken_0x2f559c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f559c) {
            ctx->pc = 0x2F55C8u;
            goto label_2f55c8;
        }
    }
    ctx->pc = 0x2F55A4u;
    // 0x2f55a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f55a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f55a8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F55A8u;
    {
        const bool branch_taken_0x2f55a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f55a8) {
            ctx->pc = 0x2F55C8u;
            goto label_2f55c8;
        }
    }
    ctx->pc = 0x2F55B0u;
label_2f55b0:
    // 0x2f55b0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2f55b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F55B4u;
    {
        const bool branch_taken_0x2f55b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f55b4) {
            ctx->pc = 0x2F55C8u;
            goto label_2f55c8;
        }
    }
    ctx->pc = 0x2F55BCu;
    // 0x2f55bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f55c0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F55C0u;
    {
        const bool branch_taken_0x2f55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C0u;
        // 0x2f55c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55c0) {
            ctx->pc = 0x2F55B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f55b0;
        }
    }
    ctx->pc = 0x2F55C8u;
label_2f55c8:
    // 0x2f55c8: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F55C8u;
    SET_GPR_U32(ctx, 31, 0x2F55D0u);
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F55C8u, 0x2F55D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55D0u;
label_2f55d0:
    // 0x2f55d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f55d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55d4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F55D4u;
    {
        const bool branch_taken_0x2f55d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f55d4) {
            ctx->pc = 0x2F55E4u;
            goto label_2f55e4;
        }
    }
    ctx->pc = 0x2F55DCu;
label_2f55dc:
    // 0x2f55dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F55DCu;
    {
        const bool branch_taken_0x2f55dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55DCu;
        // 0x2f55e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55dc) {
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F55E4u;
label_2f55e4:
    // 0x2f55e4: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F55E4u;
    SET_GPR_U32(ctx, 31, 0x2F55ECu);
    ctx->pc = 0x2F55E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55E4u;
    // 0x2f55e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6510u, 0x2F55E4u, 0x2F55ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F55ECu;
label_2f55ec:
    // 0x2f55ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f55ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55f0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F55F0u;
    {
        const bool branch_taken_0x2f55f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55F0u;
        // 0x2f55f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55f0) {
            ctx->pc = 0x2F5614u;
            goto label_2f5614;
        }
    }
    ctx->pc = 0x2F55F8u;
    // 0x2f55f8: 0xc0be450  jal         func_2F9140
    ctx->pc = 0x2F55F8u;
    SET_GPR_U32(ctx, 31, 0x2F5600u);
    ctx->pc = 0x2F55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F55F8u;
    // 0x2f55fc: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F55F8u, 0x2F5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5600u;
label_2f5600:
    // 0x2f5600: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F5600u;
    {
        const bool branch_taken_0x2f5600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5600) {
            ctx->pc = 0x2F5604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5600u;
            // 0x2f5604: 0xac510008  sw          $s1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5624u;
            goto label_2f5624;
        }
    }
    ctx->pc = 0x2F5608u;
    // 0x2f5608: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5608u;
    SET_GPR_U32(ctx, 31, 0x2F5610u);
    ctx->pc = 0x2F560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5608u;
    // 0x2f560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5608u, 0x2F5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5610u;
label_2f5610:
    // 0x2f5610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f5614:
    // 0x2f5614: 0xc0be45e  jal         func_2F9178
    ctx->pc = 0x2F5614u;
    SET_GPR_U32(ctx, 31, 0x2F561Cu);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F5614u, 0x2F561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F561Cu;
label_2f561c:
    // 0x2f561c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F561Cu;
    {
        const bool branch_taken_0x2f561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F561Cu;
        // 0x2f5620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f561c) {
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F5624u;
label_2f5624:
    // 0x2f5624: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x2f5624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x2f5628: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2f5628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2f562c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F562Cu;
    {
        const bool branch_taken_0x2f562c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F562Cu;
        // 0x2f5630: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f562c) {
            ctx->pc = 0x2F5638u;
            goto label_2f5638;
        }
    }
    ctx->pc = 0x2F5634u;
    // 0x2f5634: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f5634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f5638:
    // 0x2f5638: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f5638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f563c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f563cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f5640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5648: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5648u;
        // 0x2f564c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5650u;
}
