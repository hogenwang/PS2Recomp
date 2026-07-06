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

// Function: sub_00288320
// Address: 0x288320 - 0x2883c8
void sub_00288320_0x288320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288320_0x288320");
#endif

    switch (ctx->pc) {
        case 0x288358u: goto label_288358;
        case 0x288384u: goto label_288384;
        case 0x288398u: goto label_288398;
        default: break;
    }

    ctx->pc = 0x288320u;

    // 0x288320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288324: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x288324u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288328: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x288328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28832c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x288330: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x288330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x288334: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x288334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x288338: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28833c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288340: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x288340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288344: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x288344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x288348: 0x6400015  bltz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x288348u;
    {
        const bool branch_taken_0x288348 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x28834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288348u;
        // 0x28834c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288348) {
            ctx->pc = 0x2883A0u;
            goto label_2883a0;
        }
    }
    ctx->pc = 0x288350u;
    // 0x288350: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x288350u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288354: 0x0  nop
    ctx->pc = 0x288354u;
    // NOP
label_288358:
    // 0x288358: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x288358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x28835c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x288360: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x288360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x288364: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x288364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288368: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x288368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28836c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x28836cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x288370: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x288370u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x288374: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x288374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x288378: 0x10203e  dsrl32      $a0, $s0, 0
    ctx->pc = 0x288378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x28837c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x28837Cu;
    SET_GPR_U32(ctx, 31, 0x288384u);
    ctx->pc = 0x288380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28837Cu;
    // 0x288380: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x28837Cu, 0x288384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288384u;
label_288384:
    // 0x288384: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x288384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288388: 0x2118024  and         $s0, $s0, $s1
    ctx->pc = 0x288388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 17));
    // 0x28838c: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x28838cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x288390: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x288390u;
    SET_GPR_U32(ctx, 31, 0x288398u);
    ctx->pc = 0x288394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288390u;
    // 0x288394: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x288390u, 0x288398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288398u;
label_288398:
    // 0x288398: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x288398u;
    {
        const bool branch_taken_0x288398 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x28839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288398u;
        // 0x28839c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288398) {
            ctx->pc = 0x288358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288358;
        }
    }
    ctx->pc = 0x2883A0u;
label_2883a0:
    // 0x2883a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2883a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2883a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2883a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2883a8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2883a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2883ac: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2883acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2883b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2883b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2883b4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2883b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2883b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2883b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2883bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2883BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2883BCu;
        // 0x2883c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2883BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2883C4u;
    // 0x2883c4: 0x0  nop
    ctx->pc = 0x2883c4u;
    // NOP
    if (ctx->pc == 0x2883c4u) { ctx->pc = 0x2883c8u; }
}
