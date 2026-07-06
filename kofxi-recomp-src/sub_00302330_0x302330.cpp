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

// Function: sub_00302330
// Address: 0x302330 - 0x302410
void sub_00302330_0x302330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302330_0x302330");
#endif

    switch (ctx->pc) {
        case 0x30234cu: goto label_30234c;
        case 0x30237cu: goto label_30237c;
        case 0x302388u: goto label_302388;
        case 0x3023a8u: goto label_3023a8;
        case 0x3023b4u: goto label_3023b4;
        case 0x3023e8u: goto label_3023e8;
        case 0x3023fcu: goto label_3023fc;
        default: break;
    }

    ctx->pc = 0x302330u;

    // 0x302330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x302330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x302334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x302334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x302338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x302338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30233c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x302340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302344: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x302344u;
    SET_GPR_U32(ctx, 31, 0x30234Cu);
    ctx->pc = 0x302348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302344u;
    // 0x302348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x302344u, 0x30234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30234Cu;
label_30234c:
    // 0x30234c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x30234cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x302350: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x302350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302354: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x302354u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x302358: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x302358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x30235c: 0x28140  sll         $s0, $v0, 5
    ctx->pc = 0x30235cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x302360: 0x24632180  addiu       $v1, $v1, 0x2180
    ctx->pc = 0x302360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8576));
    // 0x302364: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x302368: 0x24420cb0  addiu       $v0, $v0, 0xCB0
    ctx->pc = 0x302368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
    // 0x30236c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x302370: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x302370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x302374: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x302374u;
    SET_GPR_U32(ctx, 31, 0x30237Cu);
    ctx->pc = 0x302378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302374u;
    // 0x302378: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x302374u, 0x30237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30237Cu;
label_30237c:
    // 0x30237c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302380: 0xc040454  jal         func_101150
    ctx->pc = 0x302380u;
    SET_GPR_U32(ctx, 31, 0x302388u);
    ctx->pc = 0x302384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302380u;
    // 0x302384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x302380u, 0x302388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302388u;
label_302388:
    // 0x302388: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x302388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x30238c: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x30238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x302390: 0x24420ce0  addiu       $v0, $v0, 0xCE0
    ctx->pc = 0x302390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3296));
    // 0x302394: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x302394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x302398: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x302398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30239c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x30239cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3023a0: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x3023A0u;
    SET_GPR_U32(ctx, 31, 0x3023A8u);
    ctx->pc = 0x3023A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023A0u;
    // 0x3023a4: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x3023A0u, 0x3023A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023A8u;
label_3023a8:
    // 0x3023a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3023a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023ac: 0xc040454  jal         func_101150
    ctx->pc = 0x3023ACu;
    SET_GPR_U32(ctx, 31, 0x3023B4u);
    ctx->pc = 0x3023B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023ACu;
    // 0x3023b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x3023ACu, 0x3023B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023B4u;
label_3023b4:
    // 0x3023b4: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3023b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x3023b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3023b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3023bc: 0x7c402490  sq          $zero, 0x2490($v0)
    ctx->pc = 0x3023bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9360), GPR_VEC(ctx, 0));
    // 0x3023c0: 0x34640012  ori         $a0, $v1, 0x12
    ctx->pc = 0x3023c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
    // 0x3023c4: 0x3c0301cc  lui         $v1, 0x1CC
    ctx->pc = 0x3023c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)460 << 16));
    // 0x3023c8: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3023c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x3023cc: 0xac642490  sw          $a0, 0x2490($v1)
    ctx->pc = 0x3023ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 9360), GPR_U32(ctx, 4));
    // 0x3023d0: 0x7c4025c0  sq          $zero, 0x25C0($v0)
    ctx->pc = 0x3023d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 9664), GPR_VEC(ctx, 0));
    // 0x3023d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3023d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x3023d8: 0x3c0201cc  lui         $v0, 0x1CC
    ctx->pc = 0x3023d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)460 << 16));
    // 0x3023dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3023dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023e0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x3023E0u;
    SET_GPR_U32(ctx, 31, 0x3023E8u);
    ctx->pc = 0x3023E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023E0u;
    // 0x3023e4: 0xac4325c0  sw          $v1, 0x25C0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 9664), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x3023E0u, 0x3023E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023E8u;
label_3023e8:
    // 0x3023e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3023e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x3023ec: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x3023ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x3023f0: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x3023f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x3023f4: 0xc040a04  jal         func_102810
    ctx->pc = 0x3023F4u;
    SET_GPR_U32(ctx, 31, 0x3023FCu);
    ctx->pc = 0x3023F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023F4u;
    // 0x3023f8: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x3023F4u, 0x3023FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023FCu;
label_3023fc:
    // 0x3023fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3023fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x302400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x302404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302408: 0x3e00008  jr          $ra
    ctx->pc = 0x302408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302408u;
        // 0x30240c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302410u;
}
