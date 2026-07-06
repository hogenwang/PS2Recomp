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

// Function: sub_0028E478
// Address: 0x28e478 - 0x28e508
void sub_0028E478_0x28e478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E478_0x28e478");
#endif

    switch (ctx->pc) {
        case 0x28e478u: goto label_28e478;
        case 0x28e47cu: goto label_28e47c;
        case 0x28e480u: goto label_28e480;
        case 0x28e484u: goto label_28e484;
        case 0x28e488u: goto label_28e488;
        case 0x28e48cu: goto label_28e48c;
        case 0x28e490u: goto label_28e490;
        case 0x28e494u: goto label_28e494;
        case 0x28e498u: goto label_28e498;
        case 0x28e49cu: goto label_28e49c;
        case 0x28e4a0u: goto label_28e4a0;
        case 0x28e4a4u: goto label_28e4a4;
        case 0x28e4a8u: goto label_28e4a8;
        case 0x28e4acu: goto label_28e4ac;
        case 0x28e4b0u: goto label_28e4b0;
        case 0x28e4b4u: goto label_28e4b4;
        case 0x28e4b8u: goto label_28e4b8;
        case 0x28e4bcu: goto label_28e4bc;
        case 0x28e4c0u: goto label_28e4c0;
        case 0x28e4c4u: goto label_28e4c4;
        case 0x28e4c8u: goto label_28e4c8;
        case 0x28e4ccu: goto label_28e4cc;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4d4u: goto label_28e4d4;
        case 0x28e4d8u: goto label_28e4d8;
        case 0x28e4dcu: goto label_28e4dc;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4e4u: goto label_28e4e4;
        case 0x28e4e8u: goto label_28e4e8;
        case 0x28e4ecu: goto label_28e4ec;
        case 0x28e4f0u: goto label_28e4f0;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e4f8u: goto label_28e4f8;
        case 0x28e4fcu: goto label_28e4fc;
        case 0x28e500u: goto label_28e500;
        case 0x28e504u: goto label_28e504;
        default: break;
    }

    ctx->pc = 0x28e478u;

label_28e478:
    // 0x28e478: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e47c:
    // 0x28e47c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e480:
    // 0x28e480: 0x8c4245c8  lw          $v0, 0x45C8($v0)
    ctx->pc = 0x28e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17864)));
label_28e484:
    // 0x28e484: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e488:
    if (ctx->pc == 0x28E488u) {
        ctx->pc = 0x28E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E484u;
        // 0x28e488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E48Cu;
        goto label_28e48c;
    }
    ctx->pc = 0x28E484u;
    {
        const bool branch_taken_0x28e484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E484u;
        // 0x28e488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e484) {
            ctx->pc = 0x28E4ACu;
            goto label_28e4ac;
        }
    }
    ctx->pc = 0x28E48Cu;
label_28e48c:
    // 0x28e48c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e490:
    // 0x28e490: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x28e490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_28e494:
    // 0x28e494: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e498:
    // 0x28e498: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e49c:
    // 0x28e49c: 0xc0a5648  jal         func_295920
label_28e4a0:
    if (ctx->pc == 0x28E4A0u) {
        ctx->pc = 0x28E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E49Cu;
        // 0x28e4a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4A4u;
        goto label_28e4a4;
    }
    ctx->pc = 0x28E49Cu;
    SET_GPR_U32(ctx, 31, 0x28E4A4u);
    ctx->pc = 0x28E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E49Cu;
    // 0x28e4a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E49Cu, 0x28E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4A4u;
label_28e4a4:
    // 0x28e4a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e4a8:
    if (ctx->pc == 0x28E4A8u) {
        ctx->pc = 0x28E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A4u;
        // 0x28e4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4ACu;
        goto label_28e4ac;
    }
    ctx->pc = 0x28E4A4u;
    {
        const bool branch_taken_0x28e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4A4u;
        // 0x28e4a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4a4) {
            ctx->pc = 0x28E4B4u;
            goto label_28e4b4;
        }
    }
    ctx->pc = 0x28E4ACu;
label_28e4ac:
    // 0x28e4ac: 0x40f809  jalr        $v0
label_28e4b0:
    if (ctx->pc == 0x28E4B0u) {
        ctx->pc = 0x28E4B4u;
        goto label_28e4b4;
    }
    ctx->pc = 0x28E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E4B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E4ACu, 0x28E4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E4B4u;
label_28e4b4:
    // 0x28e4b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e4b8:
    // 0x28e4b8: 0x3e00008  jr          $ra
label_28e4bc:
    if (ctx->pc == 0x28E4BCu) {
        ctx->pc = 0x28E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4B8u;
        // 0x28e4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4C0u;
        goto label_28e4c0;
    }
    ctx->pc = 0x28E4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4B8u;
        // 0x28e4bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E4C0u;
label_28e4c0:
    // 0x28e4c0: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x28e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
label_28e4c4:
    // 0x28e4c4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28e4c8:
    // 0x28e4c8: 0x8c4245cc  lw          $v0, 0x45CC($v0)
    ctx->pc = 0x28e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17868)));
label_28e4cc:
    // 0x28e4cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_28e4d0:
    if (ctx->pc == 0x28E4D0u) {
        ctx->pc = 0x28E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4CCu;
        // 0x28e4d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4D4u;
        goto label_28e4d4;
    }
    ctx->pc = 0x28E4CCu;
    {
        const bool branch_taken_0x28e4cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4CCu;
        // 0x28e4d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4cc) {
            ctx->pc = 0x28E4F4u;
            goto label_28e4f4;
        }
    }
    ctx->pc = 0x28E4D4u;
label_28e4d4:
    // 0x28e4d4: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x28e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_28e4d8:
    // 0x28e4d8: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x28e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_28e4dc:
    // 0x28e4dc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x28e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_28e4e0:
    // 0x28e4e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e4e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e4e4:
    // 0x28e4e4: 0xc0a5648  jal         func_295920
label_28e4e8:
    if (ctx->pc == 0x28E4E8u) {
        ctx->pc = 0x28E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4E4u;
        // 0x28e4e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4ECu;
        goto label_28e4ec;
    }
    ctx->pc = 0x28E4E4u;
    SET_GPR_U32(ctx, 31, 0x28E4ECu);
    ctx->pc = 0x28E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E4E4u;
    // 0x28e4e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x28E4E4u, 0x28E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E4ECu;
label_28e4ec:
    // 0x28e4ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_28e4f0:
    if (ctx->pc == 0x28E4F0u) {
        ctx->pc = 0x28E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4ECu;
        // 0x28e4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E4F4u;
        goto label_28e4f4;
    }
    ctx->pc = 0x28E4ECu;
    {
        const bool branch_taken_0x28e4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E4ECu;
        // 0x28e4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4ec) {
            ctx->pc = 0x28E4FCu;
            goto label_28e4fc;
        }
    }
    ctx->pc = 0x28E4F4u;
label_28e4f4:
    // 0x28e4f4: 0x40f809  jalr        $v0
label_28e4f8:
    if (ctx->pc == 0x28E4F8u) {
        ctx->pc = 0x28E4FCu;
        goto label_28e4fc;
    }
    ctx->pc = 0x28E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E4FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E4F4u, 0x28E4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E4FCu;
label_28e4fc:
    // 0x28e4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e500:
    // 0x28e500: 0x3e00008  jr          $ra
label_28e504:
    if (ctx->pc == 0x28E504u) {
        ctx->pc = 0x28E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E500u;
        // 0x28e504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E508u;
        goto label_fallthrough_0x28e500;
    }
    ctx->pc = 0x28E500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E500u;
        // 0x28e504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e500:
    ctx->pc = 0x28E508u;
}
