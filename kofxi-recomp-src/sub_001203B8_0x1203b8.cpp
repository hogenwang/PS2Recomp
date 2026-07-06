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

// Function: sub_001203B8
// Address: 0x1203b8 - 0x1204b8
void sub_001203B8_0x1203b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001203B8_0x1203b8");
#endif

    switch (ctx->pc) {
        case 0x1203d8u: goto label_1203d8;
        case 0x1203f4u: goto label_1203f4;
        case 0x1203fcu: goto label_1203fc;
        case 0x12041cu: goto label_12041c;
        case 0x120420u: goto label_120420;
        case 0x120428u: goto label_120428;
        case 0x12043cu: goto label_12043c;
        case 0x120450u: goto label_120450;
        case 0x120458u: goto label_120458;
        case 0x120464u: goto label_120464;
        case 0x12048cu: goto label_12048c;
        case 0x1204a4u: goto label_1204a4;
        case 0x1204b0u: goto label_1204b0;
        default: break;
    }

    ctx->pc = 0x1203b8u;

    // 0x1203b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1203b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1203bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1203bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1203c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1203c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1203c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1203c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1203c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1203cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1203ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1203d0: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x1203D0u;
    SET_GPR_U32(ctx, 31, 0x1203D8u);
    ctx->pc = 0x1203D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203D0u;
    // 0x1203d4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x1203D0u, 0x1203D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203D8u;
label_1203d8:
    // 0x1203d8: 0x240503df  addiu       $a1, $zero, 0x3DF
    ctx->pc = 0x1203d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 991));
    // 0x1203dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1203dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1203e0: 0x52d3c  dsll32      $a1, $a1, 20
    ctx->pc = 0x1203e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
    // 0x1203e4: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1203E4u;
    {
        const bool branch_taken_0x1203e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1203E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203E4u;
        // 0x1203e8: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1203e4) {
            ctx->pc = 0x120468u;
            goto label_120468;
        }
    }
    ctx->pc = 0x1203ECu;
    // 0x1203ec: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x1203ECu;
    SET_GPR_U32(ctx, 31, 0x1203F4u);
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x1203ECu, 0x1203F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203F4u;
label_1203f4:
    // 0x1203f4: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x1203F4u;
    SET_GPR_U32(ctx, 31, 0x1203FCu);
    ctx->pc = 0x1203F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1203F4u;
    // 0x1203f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x1203F4u, 0x1203FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203FCu;
label_1203fc:
    // 0x1203fc: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x1203fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120400: 0x11787a  dsrl        $t7, $s1, 1
    ctx->pc = 0x120400u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) >> 1);
    // 0x120404: 0x322e0001  andi        $t6, $s1, 0x1
    ctx->pc = 0x120404u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x120408: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x120408u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x12040c: 0x6200023  bltz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x12040Cu;
    {
        const bool branch_taken_0x12040c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x120410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12040Cu;
        // 0x120410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12040c) {
            ctx->pc = 0x12049Cu;
            goto label_12049c;
        }
    }
    ctx->pc = 0x120414u;
    // 0x120414: 0xc048096  jal         func_120258
    ctx->pc = 0x120414u;
    SET_GPR_U32(ctx, 31, 0x12041Cu);
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x120414u, 0x12041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12041Cu;
label_12041c:
    // 0x12041c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12041cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_120420:
    // 0x120420: 0xc048a5c  jal         func_122970
    ctx->pc = 0x120420u;
    SET_GPR_U32(ctx, 31, 0x120428u);
    ctx->pc = 0x120424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120420u;
    // 0x120424: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x120420u, 0x120428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120428u;
label_120428:
    // 0x120428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x120428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12042c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12042cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120434: 0xc048b9e  jal         func_122E78
    ctx->pc = 0x120434u;
    SET_GPR_U32(ctx, 31, 0x12043Cu);
    ctx->pc = 0x120438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120434u;
    // 0x120438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E78u, 0x120434u, 0x12043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12043Cu;
label_12043c:
    // 0x12043c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12043cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120440: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x120440u;
    {
        const bool branch_taken_0x120440 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x120444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120440u;
        // 0x120444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120440) {
            ctx->pc = 0x120484u;
            goto label_120484;
        }
    }
    ctx->pc = 0x120448u;
    // 0x120448: 0xc048a5c  jal         func_122970
    ctx->pc = 0x120448u;
    SET_GPR_U32(ctx, 31, 0x120450u);
    ctx->pc = 0x122970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122970u, 0x120448u, 0x120450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120450u;
label_120450:
    // 0x120450: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x120450u;
    SET_GPR_U32(ctx, 31, 0x120458u);
    ctx->pc = 0x120454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120450u;
    // 0x120454: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x120450u, 0x120458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120458u;
label_120458:
    // 0x120458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x120458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12045c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12045cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120460: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x120460u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_120464:
    // 0x120464: 0x220782d  daddu       $t7, $s1, $zero
    ctx->pc = 0x120464u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_120468:
    // 0x120468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x120468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12046c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12046cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120470: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x120470u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x120474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x120474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120478: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x120478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12047c: 0x3e00008  jr          $ra
    ctx->pc = 0x12047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12047Cu;
        // 0x120480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120484u;
label_120484:
    // 0x120484: 0xc048c28  jal         func_1230A0
    ctx->pc = 0x120484u;
    SET_GPR_U32(ctx, 31, 0x12048Cu);
    ctx->pc = 0x120488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120484u;
    // 0x120488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1230A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230A0u, 0x120484u, 0x12048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12048Cu;
label_12048c:
    // 0x12048c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x120490: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x120490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x120494: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x120494u;
    {
        const bool branch_taken_0x120494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x120498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120494u;
        // 0x120498: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120494) {
            ctx->pc = 0x120464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120464;
        }
    }
    ctx->pc = 0x12049Cu;
label_12049c:
    // 0x12049c: 0xc048096  jal         func_120258
    ctx->pc = 0x12049Cu;
    SET_GPR_U32(ctx, 31, 0x1204A4u);
    ctx->pc = 0x1204A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12049Cu;
    // 0x1204a0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120258u, 0x12049Cu, 0x1204A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204A4u;
label_1204a4:
    // 0x1204a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1204a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1204a8: 0xc048a46  jal         func_122918
    ctx->pc = 0x1204A8u;
    SET_GPR_U32(ctx, 31, 0x1204B0u);
    ctx->pc = 0x1204ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204A8u;
    // 0x1204ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x1204A8u, 0x1204B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1204B0u;
label_1204b0:
    // 0x1204b0: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x1204B0u;
    {
        const bool branch_taken_0x1204b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1204B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1204B0u;
        // 0x1204b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1204b0) {
            ctx->pc = 0x120420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_120420;
        }
    }
    ctx->pc = 0x1204B8u;
}
