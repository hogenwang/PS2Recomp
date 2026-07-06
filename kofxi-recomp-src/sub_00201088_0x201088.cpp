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

// Function: sub_00201088
// Address: 0x201088 - 0x201140
void sub_00201088_0x201088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201088_0x201088");
#endif

    switch (ctx->pc) {
        case 0x201088u: goto label_201088;
        case 0x20108cu: goto label_20108c;
        case 0x201090u: goto label_201090;
        case 0x201094u: goto label_201094;
        case 0x201098u: goto label_201098;
        case 0x20109cu: goto label_20109c;
        case 0x2010a0u: goto label_2010a0;
        case 0x2010a4u: goto label_2010a4;
        case 0x2010a8u: goto label_2010a8;
        case 0x2010acu: goto label_2010ac;
        case 0x2010b0u: goto label_2010b0;
        case 0x2010b4u: goto label_2010b4;
        case 0x2010b8u: goto label_2010b8;
        case 0x2010bcu: goto label_2010bc;
        case 0x2010c0u: goto label_2010c0;
        case 0x2010c4u: goto label_2010c4;
        case 0x2010c8u: goto label_2010c8;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010d0u: goto label_2010d0;
        case 0x2010d4u: goto label_2010d4;
        case 0x2010d8u: goto label_2010d8;
        case 0x2010dcu: goto label_2010dc;
        case 0x2010e0u: goto label_2010e0;
        case 0x2010e4u: goto label_2010e4;
        case 0x2010e8u: goto label_2010e8;
        case 0x2010ecu: goto label_2010ec;
        case 0x2010f0u: goto label_2010f0;
        case 0x2010f4u: goto label_2010f4;
        case 0x2010f8u: goto label_2010f8;
        case 0x2010fcu: goto label_2010fc;
        case 0x201100u: goto label_201100;
        case 0x201104u: goto label_201104;
        case 0x201108u: goto label_201108;
        case 0x20110cu: goto label_20110c;
        case 0x201110u: goto label_201110;
        case 0x201114u: goto label_201114;
        case 0x201118u: goto label_201118;
        case 0x20111cu: goto label_20111c;
        case 0x201120u: goto label_201120;
        case 0x201124u: goto label_201124;
        case 0x201128u: goto label_201128;
        case 0x20112cu: goto label_20112c;
        case 0x201130u: goto label_201130;
        case 0x201134u: goto label_201134;
        case 0x201138u: goto label_201138;
        case 0x20113cu: goto label_20113c;
        default: break;
    }

    ctx->pc = 0x201088u;

label_201088:
    // 0x201088: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20108c:
    // 0x20108c: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x20108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_201090:
    // 0x201090: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_201094:
    // 0x201094: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x201094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_201098:
    // 0x201098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20109c:
    // 0x20109c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x20109cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
label_2010a0:
    // 0x2010a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2010a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2010a4:
    // 0x2010a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2010a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2010a8:
    // 0x2010a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2010a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2010ac:
    // 0x2010ac: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2010acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2010b0:
    // 0x2010b0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2010b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
label_2010b4:
    // 0x2010b4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2010b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2010b8:
    // 0x2010b8: 0xc049cb6  jal         func_1272D8
label_2010bc:
    if (ctx->pc == 0x2010BCu) {
        ctx->pc = 0x2010BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010B8u;
        // 0x2010bc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010C0u;
        goto label_2010c0;
    }
    ctx->pc = 0x2010B8u;
    SET_GPR_U32(ctx, 31, 0x2010C0u);
    ctx->pc = 0x2010BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010B8u;
    // 0x2010bc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2010B8u, 0x2010C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010C0u;
label_2010c0:
    // 0x2010c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2010c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2010c4:
    // 0x2010c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2010c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2010c8:
    // 0x2010c8: 0xc080450  jal         func_201140
label_2010cc:
    if (ctx->pc == 0x2010CCu) {
        ctx->pc = 0x2010CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010C8u;
        // 0x2010cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010D0u;
        goto label_2010d0;
    }
    ctx->pc = 0x2010C8u;
    SET_GPR_U32(ctx, 31, 0x2010D0u);
    ctx->pc = 0x2010CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010C8u;
    // 0x2010cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201140u, 0x2010C8u, 0x2010D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010D0u;
label_2010d0:
    // 0x2010d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2010d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2010d4:
    // 0x2010d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2010d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2010d8:
    // 0x2010d8: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
label_2010dc:
    if (ctx->pc == 0x2010DCu) {
        ctx->pc = 0x2010DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010D8u;
        // 0x2010dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010E0u;
        goto label_2010e0;
    }
    ctx->pc = 0x2010D8u;
    {
        const bool branch_taken_0x2010d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2010DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010D8u;
        // 0x2010dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010d8) {
            ctx->pc = 0x2010E4u;
            goto label_2010e4;
        }
    }
    ctx->pc = 0x2010E0u;
label_2010e0:
    // 0x2010e0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2010e4:
    // 0x2010e4: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2010e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_2010e8:
    // 0x2010e8: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2010e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_2010ec:
    // 0x2010ec: 0xc08070c  jal         func_201C30
label_2010f0:
    if (ctx->pc == 0x2010F0u) {
        ctx->pc = 0x2010F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010ECu;
        // 0x2010f0: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2010F4u;
        goto label_2010f4;
    }
    ctx->pc = 0x2010ECu;
    SET_GPR_U32(ctx, 31, 0x2010F4u);
    ctx->pc = 0x2010F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2010ECu;
    // 0x2010f0: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C30u, 0x2010ECu, 0x2010F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2010F4u;
label_2010f4:
    // 0x2010f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2010f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2010f8:
    // 0x2010f8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2010fc:
    if (ctx->pc == 0x2010FCu) {
        ctx->pc = 0x2010FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F8u;
        // 0x2010fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201100u;
        goto label_201100;
    }
    ctx->pc = 0x2010F8u;
    {
        const bool branch_taken_0x2010f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2010FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010F8u;
        // 0x2010fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2010f8) {
            ctx->pc = 0x201108u;
            goto label_201108;
        }
    }
    ctx->pc = 0x201100u;
label_201100:
    // 0x201100: 0xc0801fa  jal         func_2007E8
label_201104:
    if (ctx->pc == 0x201104u) {
        ctx->pc = 0x201108u;
        goto label_201108;
    }
    ctx->pc = 0x201100u;
    SET_GPR_U32(ctx, 31, 0x201108u);
    ctx->pc = 0x2007E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007E8u, 0x201100u, 0x201108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201108u;
label_201108:
    // 0x201108: 0x8e420068  lw          $v0, 0x68($s2)
    ctx->pc = 0x201108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_20110c:
    // 0x20110c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_201110:
    if (ctx->pc == 0x201110u) {
        ctx->pc = 0x201110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20110Cu;
        // 0x201110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201114u;
        goto label_201114;
    }
    ctx->pc = 0x20110Cu;
    {
        const bool branch_taken_0x20110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20110Cu;
        // 0x201110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20110c) {
            ctx->pc = 0x201120u;
            goto label_201120;
        }
    }
    ctx->pc = 0x201114u;
label_201114:
    // 0x201114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x201114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_201118:
    // 0x201118: 0x40f809  jalr        $v0
label_20111c:
    if (ctx->pc == 0x20111Cu) {
        ctx->pc = 0x20111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201118u;
        // 0x20111c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201120u;
        goto label_201120;
    }
    ctx->pc = 0x201118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201120u);
        ctx->pc = 0x20111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201118u;
        // 0x20111c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201118u, 0x201120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201120u;
label_201120:
    // 0x201120: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x201120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_201124:
    // 0x201124: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x201124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_201128:
    // 0x201128: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x201128u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20112c:
    // 0x20112c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x20112cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_201130:
    // 0x201130: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x201130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_201134:
    // 0x201134: 0x3e00008  jr          $ra
label_201138:
    if (ctx->pc == 0x201138u) {
        ctx->pc = 0x201138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201134u;
        // 0x201138: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20113Cu;
        goto label_20113c;
    }
    ctx->pc = 0x201134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201134u;
        // 0x201138: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20113Cu;
label_20113c:
    // 0x20113c: 0x0  nop
    ctx->pc = 0x20113cu;
    // NOP
    if (ctx->pc == 0x20113cu) { ctx->pc = 0x201140u; }
}
