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

// Function: sub_001EB470
// Address: 0x1eb470 - 0x1eb540
void sub_001EB470_0x1eb470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB470_0x1eb470");
#endif

    switch (ctx->pc) {
        case 0x1eb4d0u: goto label_1eb4d0;
        case 0x1eb520u: goto label_1eb520;
        default: break;
    }

    ctx->pc = 0x1eb470u;

    // 0x1eb470: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb478: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eb478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eb480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb484: 0x24891368  addiu       $t1, $a0, 0x1368
    ctx->pc = 0x1eb484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1eb488: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb48c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1eb48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb490: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb490u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb494: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1eb494u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb498: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1eb49c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1eb49cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4a0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1eb4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eb4a4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB4A4u;
    {
        const bool branch_taken_0x1eb4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4A4u;
        // 0x1eb4a8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb4a4) {
            ctx->pc = 0x1EB4C0u;
            goto label_1eb4c0;
        }
    }
    ctx->pc = 0x1EB4ACu;
    // 0x1eb4ac: 0x8d25004c  lw          $a1, 0x4C($t1)
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x1eb4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb4b4: 0x807f662  j           func_1FD988
    ctx->pc = 0x1EB4B4u;
    ctx->pc = 0x1EB4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB4B4u;
    // 0x1eb4b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    sub_001FD988_0x1fd988(rdram, ctx, runtime); return;
    ctx->pc = 0x1EB4BCu;
    // 0x1eb4bc: 0x0  nop
    ctx->pc = 0x1eb4bcu;
    // NOP
label_1eb4c0:
    // 0x1eb4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eb4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1eb4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB4C8u;
        // 0x1eb4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB4D0u;
label_1eb4d0:
    // 0x1eb4d0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb4d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb4d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb4dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb4e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb4e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb4f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb4f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eb4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eb4f8: 0x26091368  addiu       $t1, $s0, 0x1368
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4968));
    // 0x1eb4fc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1eb4fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb500: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x1eb500u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1eb504: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1eb504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb508: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1eb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eb50c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1eb510: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB510u;
    {
        const bool branch_taken_0x1eb510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB510u;
        // 0x1eb514: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb510) {
            ctx->pc = 0x1EB524u;
            goto label_1eb524;
        }
    }
    ctx->pc = 0x1EB518u;
    // 0x1eb518: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1EB518u;
    SET_GPR_U32(ctx, 31, 0x1EB520u);
    ctx->pc = 0x1EB51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB518u;
    // 0x1eb51c: 0x8d25004c  lw          $a1, 0x4C($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1EB518u, 0x1EB520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB520u;
label_1eb520:
    // 0x1eb520: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1eb520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eb524:
    // 0x1eb524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eb524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb528: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eb528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb52c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1eb52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1eb530: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1eb530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb538: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB538u;
        // 0x1eb53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB540u;
}
