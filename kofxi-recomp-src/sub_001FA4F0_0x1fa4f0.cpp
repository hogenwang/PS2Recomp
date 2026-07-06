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

// Function: sub_001FA4F0
// Address: 0x1fa4f0 - 0x1fa580
void sub_001FA4F0_0x1fa4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA4F0_0x1fa4f0");
#endif

    switch (ctx->pc) {
        case 0x1fa500u: goto label_1fa500;
        case 0x1fa530u: goto label_1fa530;
        case 0x1fa564u: goto label_1fa564;
        default: break;
    }

    ctx->pc = 0x1fa4f0u;

    // 0x1fa4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa4f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa4f8: 0xc07f68e  jal         func_1FDA38
    ctx->pc = 0x1FA4F8u;
    SET_GPR_U32(ctx, 31, 0x1FA500u);
    ctx->pc = 0x1FA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA4F8u;
    // 0x1fa4fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA38u, 0x1FA4F8u, 0x1FA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA500u;
label_1fa500:
    // 0x1fa500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa504: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fa504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa508: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA508u;
        // 0x1fa50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA510u;
    // 0x1fa510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fa514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa518: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fa518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa51c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa528: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FA528u;
    SET_GPR_U32(ctx, 31, 0x1FA530u);
    ctx->pc = 0x1FA52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA528u;
    // 0x1fa52c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1FA528u, 0x1FA530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA530u;
label_1fa530:
    // 0x1fa530: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fa534: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA534u;
    {
        const bool branch_taken_0x1fa534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA534u;
        // 0x1fa538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa534) {
            ctx->pc = 0x1FA558u;
            goto label_1fa558;
        }
    }
    ctx->pc = 0x1FA53Cu;
    // 0x1fa53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa540: 0x34a50155  ori         $a1, $a1, 0x155
    ctx->pc = 0x1fa540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)341);
    // 0x1fa544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa54c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FA54Cu;
    ctx->pc = 0x1FA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA54Cu;
    // 0x1fa550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1FA554u;
    // 0x1fa554: 0x0  nop
    ctx->pc = 0x1fa554u;
    // NOP
label_1fa558:
    // 0x1fa558: 0x8e243708  lw          $a0, 0x3708($s1)
    ctx->pc = 0x1fa558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14088)));
    // 0x1fa55c: 0xc07e960  jal         func_1FA580
    ctx->pc = 0x1FA55Cu;
    SET_GPR_U32(ctx, 31, 0x1FA564u);
    ctx->pc = 0x1FA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA55Cu;
    // 0x1fa560: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA580u, 0x1FA55Cu, 0x1FA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA564u;
label_1fa564:
    // 0x1fa564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa574: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA574u;
        // 0x1fa578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA57Cu;
    // 0x1fa57c: 0x0  nop
    ctx->pc = 0x1fa57cu;
    // NOP
}
