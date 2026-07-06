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

// Function: sub_002E50E8
// Address: 0x2e50e8 - 0x2e51a0
void sub_002E50E8_0x2e50e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E50E8_0x2e50e8");
#endif

    switch (ctx->pc) {
        case 0x2e5130u: goto label_2e5130;
        case 0x2e5150u: goto label_2e5150;
        case 0x2e5164u: goto label_2e5164;
        case 0x2e5178u: goto label_2e5178;
        default: break;
    }

    ctx->pc = 0x2e50e8u;

    // 0x2e50e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e50e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e50ec: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2e50ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2e50f0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2e50f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2e50f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e50f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50f8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2e50f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2e50fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e50fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5104: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2e5104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2e5108: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2e5108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2e510c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2e510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2e5110: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2e5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2e5114: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e5114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5118: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e5118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e511c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e511cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e5120: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e5120u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5128: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2E5128u;
    SET_GPR_U32(ctx, 31, 0x2E5130u);
    ctx->pc = 0x2E512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5128u;
    // 0x2e512c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2E5128u, 0x2E5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5130u;
label_2e5130:
    // 0x2e5130: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x2e5130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x2e5134: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e5134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5138: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x2e5138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x2e513c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x2e513cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
    // 0x2e5140: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x2e5140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x2e5144: 0xafb10020  sw          $s1, 0x20($sp)
    ctx->pc = 0x2e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    // 0x2e5148: 0xc043298  jal         func_10CA60
    ctx->pc = 0x2E5148u;
    SET_GPR_U32(ctx, 31, 0x2E5150u);
    ctx->pc = 0x2E514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5148u;
    // 0x2e514c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA60u, 0x2E5148u, 0x2E5150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5150u;
label_2e5150:
    // 0x2e5150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5154: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5154u;
    {
        const bool branch_taken_0x2e5154 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2E5158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5154u;
        // 0x2e5158: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5154) {
            ctx->pc = 0x2E517Cu;
            goto label_2e517c;
        }
    }
    ctx->pc = 0x2E515Cu;
    // 0x2e515c: 0xc043768  jal         func_10DDA0
    ctx->pc = 0x2E515Cu;
    SET_GPR_U32(ctx, 31, 0x2E5164u);
    ctx->pc = 0x2E5160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E515Cu;
    // 0x2e5160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDA0u, 0x2E515Cu, 0x2E5164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5164u;
label_2e5164:
    // 0x2e5164: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5168: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5168u;
    {
        const bool branch_taken_0x2e5168 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2E516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5168u;
        // 0x2e516c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5168) {
            ctx->pc = 0x2E517Cu;
            goto label_2e517c;
        }
    }
    ctx->pc = 0x2E5170u;
    // 0x2e5170: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x2E5170u;
    SET_GPR_U32(ctx, 31, 0x2E5178u);
    ctx->pc = 0x2E5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5170u;
    // 0x2e5174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x2E5170u, 0x2E5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5178u;
label_2e5178:
    // 0x2e5178: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e5178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e517c:
    // 0x2e517c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e517cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5180: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2e5180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5184: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2e5184u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5188: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2e5188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e518c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2e518cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5190: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2e5190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5194: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2e5194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5198: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5198u;
        // 0x2e519c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E51A0u;
}
