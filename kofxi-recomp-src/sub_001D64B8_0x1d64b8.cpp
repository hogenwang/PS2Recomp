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

// Function: sub_001D64B8
// Address: 0x1d64b8 - 0x1d6568
void sub_001D64B8_0x1d64b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D64B8_0x1d64b8");
#endif

    switch (ctx->pc) {
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d6518u: goto label_1d6518;
        case 0x1d653cu: goto label_1d653c;
        default: break;
    }

    ctx->pc = 0x1d64b8u;

    // 0x1d64b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D64B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D64B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D64C0u;
    // 0x1d64c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d64c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d64c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d64c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d64cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d64ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d64d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d64d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d64d4: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D64D4u;
    SET_GPR_U32(ctx, 31, 0x1D64DCu);
    ctx->pc = 0x1D64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64D4u;
    // 0x1d64d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D64D4u, 0x1D64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D64DCu;
label_1d64dc:
    // 0x1d64dc: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1d64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x1d64e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D64E0u;
    {
        const bool branch_taken_0x1d64e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D64E0u;
        // 0x1d64e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64e0) {
            ctx->pc = 0x1D6500u;
            goto label_1d6500;
        }
    }
    ctx->pc = 0x1D64E8u;
    // 0x1d64e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d64e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d64ec: 0x34a50302  ori         $a1, $a1, 0x302
    ctx->pc = 0x1d64ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)770);
    // 0x1d64f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d64f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d64f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d64f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d64f8: 0x80761c6  j           func_1D8718
    ctx->pc = 0x1D64F8u;
    ctx->pc = 0x1D64FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D64F8u;
    // 0x1d64fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8718u, 0x1D64F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D6500u;
label_1d6500:
    // 0x1d6500: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1d6500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1d6504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6508: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d650c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6510: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6510u;
        // 0x1d6514: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6518u;
label_1d6518:
    // 0x1d6518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d651c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6528: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d652c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d6530: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d6534: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D6534u;
    SET_GPR_U32(ctx, 31, 0x1D653Cu);
    ctx->pc = 0x1D6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6534u;
    // 0x1d6538: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E8u, 0x1D6534u, 0x1D653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D653Cu;
label_1d653c:
    // 0x1d653c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D653Cu;
    {
        const bool branch_taken_0x1d653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d653c) {
            ctx->pc = 0x1D6540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D653Cu;
            // 0x1d6540: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6550u;
            goto label_1d6550;
        }
    }
    ctx->pc = 0x1D6544u;
    // 0x1d6544: 0xae1100e8  sw          $s1, 0xE8($s0)
    ctx->pc = 0x1d6544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 17));
    // 0x1d6548: 0xae1200e4  sw          $s2, 0xE4($s0)
    ctx->pc = 0x1d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 18));
    // 0x1d654c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d654cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6550:
    // 0x1d6550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6558: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d655c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D655Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D655Cu;
        // 0x1d6560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D655Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6564u;
    // 0x1d6564: 0x0  nop
    ctx->pc = 0x1d6564u;
    // NOP
}
