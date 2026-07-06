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

// Function: sub_00235390
// Address: 0x235390 - 0x235410
void sub_00235390_0x235390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235390_0x235390");
#endif

    switch (ctx->pc) {
        case 0x2353c8u: goto label_2353c8;
        case 0x2353d0u: goto label_2353d0;
        case 0x2353f0u: goto label_2353f0;
        default: break;
    }

    ctx->pc = 0x235390u;

    // 0x235390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235394: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x235394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x235398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x235398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23539c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23539cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2353a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2353a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2353a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2353a8: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2353a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2353ac: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x2353acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2353b0: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2353b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2353b4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2353B4u;
    {
        const bool branch_taken_0x2353b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2353B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353B4u;
        // 0x2353b8: 0xa6220030  sh          $v0, 0x30($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353b4) {
            ctx->pc = 0x2353E4u;
            goto label_2353e4;
        }
    }
    ctx->pc = 0x2353BCu;
    // 0x2353bc: 0x263200dc  addiu       $s2, $s1, 0xDC
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x2353c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2353c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2353c4: 0x0  nop
    ctx->pc = 0x2353c4u;
    // NOP
label_2353c8:
    // 0x2353c8: 0xc08a1ce  jal         func_228738
    ctx->pc = 0x2353C8u;
    SET_GPR_U32(ctx, 31, 0x2353D0u);
    ctx->pc = 0x2353CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353C8u;
    // 0x2353cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228738u, 0x2353C8u, 0x2353D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353D0u;
label_2353d0:
    // 0x2353d0: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2353d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2353d4: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2353D4u;
    {
        const bool branch_taken_0x2353d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2353d4) {
            ctx->pc = 0x2353D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2353D4u;
            // 0x2353d8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2353C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2353c8;
        }
    }
    ctx->pc = 0x2353DCu;
    // 0x2353dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2353DCu;
    {
        const bool branch_taken_0x2353dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2353dc) {
            ctx->pc = 0x2353E8u;
            goto label_2353e8;
        }
    }
    ctx->pc = 0x2353E4u;
label_2353e4:
    // 0x2353e4: 0x263200dc  addiu       $s2, $s1, 0xDC
    ctx->pc = 0x2353e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
label_2353e8:
    // 0x2353e8: 0xc08d50a  jal         func_235428
    ctx->pc = 0x2353E8u;
    SET_GPR_U32(ctx, 31, 0x2353F0u);
    ctx->pc = 0x2353ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353E8u;
    // 0x2353ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235428u, 0x2353E8u, 0x2353F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353F0u;
label_2353f0:
    // 0x2353f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2353f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2353f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2353f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2353f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2353fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2353fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235404: 0x8091536  j           func_2454D8
    ctx->pc = 0x235404u;
    ctx->pc = 0x235408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235404u;
    // 0x235408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2454D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2454D8u, 0x235404u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x23540Cu;
    // 0x23540c: 0x0  nop
    ctx->pc = 0x23540cu;
    // NOP
}
