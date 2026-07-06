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

// Function: sub_001DC300
// Address: 0x1dc300 - 0x1dc3b8
void sub_001DC300_0x1dc300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC300_0x1dc300");
#endif

    switch (ctx->pc) {
        case 0x1dc338u: goto label_1dc338;
        case 0x1dc390u: goto label_1dc390;
        default: break;
    }

    ctx->pc = 0x1dc300u;

    // 0x1dc300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc30c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc310: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dc310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc314: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dc314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dc318: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dc318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc31c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC31Cu;
    {
        const bool branch_taken_0x1dc31c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC31Cu;
        // 0x1dc320: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc31c) {
            ctx->pc = 0x1DC330u;
            goto label_1dc330;
        }
    }
    ctx->pc = 0x1DC324u;
    // 0x1dc324: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dc324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dc328: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DC328u;
    {
        const bool branch_taken_0x1dc328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC328u;
        // 0x1dc32c: 0x24448080  addiu       $a0, $v0, -0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc328) {
            ctx->pc = 0x1DC364u;
            goto label_1dc364;
        }
    }
    ctx->pc = 0x1DC330u;
label_1dc330:
    // 0x1dc330: 0xc0770ee  jal         func_1DC3B8
    ctx->pc = 0x1DC330u;
    SET_GPR_U32(ctx, 31, 0x1DC338u);
    ctx->pc = 0x1DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC3B8u, 0x1DC330u, 0x1DC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC338u;
label_1dc338:
    // 0x1dc338: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1dc338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1dc33c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC33Cu;
    {
        const bool branch_taken_0x1dc33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC33Cu;
        // 0x1dc340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc33c) {
            ctx->pc = 0x1DC360u;
            goto label_1dc360;
        }
    }
    ctx->pc = 0x1DC344u;
    // 0x1dc344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc348: 0x34a50210  ori         $a1, $a1, 0x210
    ctx->pc = 0x1dc348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)528);
    // 0x1dc34c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc34cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dc350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc354: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dc354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc358: 0x8076688  j           func_1D9A20
    ctx->pc = 0x1DC358u;
    ctx->pc = 0x1DC35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC358u;
    // 0x1dc35c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A20u;
    sub_001D9A20_0x1d9a20(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC360u;
label_1dc360:
    // 0x1dc360: 0x26040190  addiu       $a0, $s0, 0x190
    ctx->pc = 0x1dc360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_1dc364:
    // 0x1dc364: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1dc364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1dc368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc36c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1dc374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dc378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc37c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dc37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc380: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x1dc380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x1dc384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dc384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc388: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC388u;
        // 0x1dc38c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC390u;
label_1dc390:
    // 0x1dc390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc394: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc39c: 0xac4601d4  sw          $a2, 0x1D4($v0)
    ctx->pc = 0x1dc39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 468), GPR_U32(ctx, 6));
    // 0x1dc3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc3a4: 0xac4501d0  sw          $a1, 0x1D0($v0)
    ctx->pc = 0x1dc3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 5));
    // 0x1dc3a8: 0xac4701d8  sw          $a3, 0x1D8($v0)
    ctx->pc = 0x1dc3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 7));
    // 0x1dc3ac: 0x8077126  j           func_1DC498
    ctx->pc = 0x1DC3ACu;
    ctx->pc = 0x1DC3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC3ACu;
    // 0x1dc3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC498u, 0x1DC3ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC3B4u;
    // 0x1dc3b4: 0x0  nop
    ctx->pc = 0x1dc3b4u;
    // NOP
    if (ctx->pc == 0x1dc3b4u) { ctx->pc = 0x1dc3b8u; }
}
