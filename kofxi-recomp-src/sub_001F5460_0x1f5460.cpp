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

// Function: sub_001F5460
// Address: 0x1f5460 - 0x1f5520
void sub_001F5460_0x1f5460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5460_0x1f5460");
#endif

    switch (ctx->pc) {
        case 0x1f5490u: goto label_1f5490;
        case 0x1f54b0u: goto label_1f54b0;
        case 0x1f54dcu: goto label_1f54dc;
        case 0x1f54f4u: goto label_1f54f4;
        default: break;
    }

    ctx->pc = 0x1f5460u;

    // 0x1f5460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f5464: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f5468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f546c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5470: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f5470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f5474: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f5474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f5478: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f5478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f547c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f547cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f5480: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f5480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f5484: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f5488: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F5488u;
    SET_GPR_U32(ctx, 31, 0x1F5490u);
    ctx->pc = 0x1F548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5488u;
    // 0x1f548c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9C0u, 0x1F5488u, 0x1F5490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5490u;
label_1f5490:
    // 0x1f5490: 0x8e022018  lw          $v0, 0x2018($s0)
    ctx->pc = 0x1f5490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    // 0x1f5494: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x1f5494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x1f5498: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F5498u;
    {
        const bool branch_taken_0x1f5498 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5498u;
        // 0x1f549c: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5498) {
            ctx->pc = 0x1F54ECu;
            goto label_1f54ec;
        }
    }
    ctx->pc = 0x1F54A0u;
    // 0x1f54a0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1f54a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54a4: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1f54a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f54a8: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1f54a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f54ac: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1f54acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f54b0:
    // 0x1f54b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f54b4: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F54B4u;
    {
        const bool branch_taken_0x1f54b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1f54b4) {
            ctx->pc = 0x1F54B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54B4u;
            // 0x1f54b8: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F54C8u;
            goto label_1f54c8;
        }
    }
    ctx->pc = 0x1F54BCu;
    // 0x1f54bc: 0x54540009  bnel        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F54BCu;
    {
        const bool branch_taken_0x1f54bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1f54bc) {
            ctx->pc = 0x1F54C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54BCu;
            // 0x1f54c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F54E4u;
            goto label_1f54e4;
        }
    }
    ctx->pc = 0x1F54C4u;
    // 0x1f54c4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1f54c8:
    // 0x1f54c8: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F54C8u;
    {
        const bool branch_taken_0x1f54c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f54c8) {
            ctx->pc = 0x1F54CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F54C8u;
            // 0x1f54cc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F54E4u;
            goto label_1f54e4;
        }
    }
    ctx->pc = 0x1F54D0u;
    // 0x1f54d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f54d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54d4: 0xc07d636  jal         func_1F58D8
    ctx->pc = 0x1F54D4u;
    SET_GPR_U32(ctx, 31, 0x1F54DCu);
    ctx->pc = 0x1F54D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54D4u;
    // 0x1f54d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F58D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F58D8u, 0x1F54D4u, 0x1F54DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54DCu;
label_1f54dc:
    // 0x1f54dc: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x1f54dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x1f54e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f54e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1f54e4:
    // 0x1f54e4: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F54E4u;
    {
        const bool branch_taken_0x1f54e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54E4u;
        // 0x1f54e8: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54e4) {
            ctx->pc = 0x1F54B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f54b0;
        }
    }
    ctx->pc = 0x1F54ECu;
label_1f54ec:
    // 0x1f54ec: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F54ECu;
    SET_GPR_U32(ctx, 31, 0x1F54F4u);
    ctx->pc = 0x1F54F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F54ECu;
    // 0x1f54f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9D8u, 0x1F54ECu, 0x1F54F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F54F4u;
label_1f54f4:
    // 0x1f54f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f54f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f54f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f54f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f54fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f54fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5500: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f5500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5504: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f5504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f5508: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f5508u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f550c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f550cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5510: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f5510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5514: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5514u;
        // 0x1f5518: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F551Cu;
    // 0x1f551c: 0x0  nop
    ctx->pc = 0x1f551cu;
    // NOP
    if (ctx->pc == 0x1f551cu) { ctx->pc = 0x1f5520u; }
}
